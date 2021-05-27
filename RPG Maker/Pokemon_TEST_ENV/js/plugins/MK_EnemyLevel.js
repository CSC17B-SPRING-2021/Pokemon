//=============================================================================
// μ'ki's Enemy Level v1.01
// MK_EnemyLevel.js
//=============================================================================

var Imported = Imported || {};
Imported.MK_EnemyLevel = true;
var Maki = Maki || {};
Maki.EL = Maki.EL || {};

//=============================================================================
/*:
 * @plugindesc v1.01 Enemy Level
 * @author μ'ki
 *
 * @param Default Enemy Level
 * @desc Enemy level set before overriden by <level> notetag (an eval).
 * @default lvl+Math.randomInt(6)-3
 *
 * @param Enemy Level Suffix
 * @desc Level suffix to add after the enemy name (leave blank if you don't wish to use).
 * @default Lv.%1
 *
 * @help
 * ============================================================================
 * Introduction
 * ============================================================================
 * In the default RPG MV game system, actors have level and parameter curves
 * corresponding to each level 1~99. That means their parameters change upon
 * leveling up. Yet enemies don't so, and thus their parameters are fixed, even
 * while the actors keep leveling up and getting stronger.
 * 
 * With this plugin, you can define level and parameter curves of enemies as
 * eval formula. The enemy level can be defined as function of average party
 * level, so that their level will be 'adjusted' evenly at the start of the
 * battle, like in some games like Final Fantasy Tactics. Additionally, you can
 * define suffix on their name that indicates their level, like "Lv.XX".
 *  
 * Contact me for support/bug report:
 * listra92[at]gmail.com
 * https://www.facebook.com/don.listRA92
 * 
 * ============================================================================
 * Enemy Notetag
 * ============================================================================
 * 
 * <level: f(lvl)>
 * Defines level of the enemy as eval function of average party level, lvl
 * (all actors participating in the battle). Optional, with default value
 * defined in the plugin parameter.
 * 
 * <nosuffix>
 * Suppresses the level suffix defined in the plugin parameter for the enemy.
 * 
 * <params>
 *   property: value
 *   ...
 * </params>
 * Defines the enemy parameter curves as properties as follows:*
 *  - mhp: Max HP
 *  - mmp: Max MP
 *  - atk: Physical Attack
 *  - def: Physical Defense
 *  - mat: Magical Attack
 *  - mdf: Magical Defense
 *  - agi: Agility
 *  - luk: Luck
 * 
 *  * The properties are eval function of the enemy level, lvl, e.g.
 *    100+(lvl-1)*50. Optional, with default value used from the database.
 *
 * ============================================================================
 * Changelog
 * ============================================================================
 * v1.01:
 *  - Added <nosuffix> tag.
 * 
 */
//=============================================================================

//=============================================================================
// Parameter Variables
//=============================================================================

Maki.EL.Parameters = PluginManager.parameters('MK_EnemyLevel');

Maki.EL.EnemyLevel = String(Maki.EL.Parameters['Default Enemy Level']);
Maki.EL.LevelSuffix = String(Maki.EL.Parameters['Enemy Level Suffix']);

DataManager.parseEnemyData = function(enemyId) {
    var notedata = $dataEnemies[enemyId].note.split(/[\r\n]+/);
    var enemyPatternFlag = false;
    $dataEnemies[enemyId].enemyPattern = [];
    $dataEnemies[enemyId].levelf = Maki.EL.EnemyLevel;
    $dataEnemies[enemyId].mhpf = ''+$dataEnemies[enemyId].params[0];
    $dataEnemies[enemyId].mmpf = ''+$dataEnemies[enemyId].params[1];
    $dataEnemies[enemyId].atkf = ''+$dataEnemies[enemyId].params[2];
    $dataEnemies[enemyId].deff = ''+$dataEnemies[enemyId].params[3];
    $dataEnemies[enemyId].matf = ''+$dataEnemies[enemyId].params[4];
    $dataEnemies[enemyId].mdff = ''+$dataEnemies[enemyId].params[5];
    $dataEnemies[enemyId].agif = ''+$dataEnemies[enemyId].params[6];
    $dataEnemies[enemyId].lukf = ''+$dataEnemies[enemyId].params[7];
    var l = notedata.length;
    for (var i = 0; i < l; i++){
        if (notedata[i].match(/<(?:level):[ ](.*)>/i)) {
            $dataEnemies[enemyId].levelf = String(RegExp.$1);
        } else if (notedata[i].match(/<(?:params)>/i)) {
            enemyPatternFlag = true;
        } else if (notedata[i].match(/<\/(?:params)>/i)) {
            enemyPatternFlag = false;
            var ll = $dataEnemies[enemyId].enemyPattern.length;
            for (var j = 0; j < ll; j++) {
                if ($dataEnemies[enemyId].enemyPattern[j].match(/[ ]*(?:mhp):[ ](.*)/i)) {
                    $dataEnemies[enemyId].mhpf = String(RegExp.$1);
                } else
                if ($dataEnemies[enemyId].enemyPattern[j].match(/[ ]*(?:mmp):[ ](.*)/i)) {
                    $dataEnemies[enemyId].mmpf = String(RegExp.$1);
                } else
                if ($dataEnemies[enemyId].enemyPattern[j].match(/[ ]*(?:atk):[ ](.*)/i)) {
                    $dataEnemies[enemyId].atkf = String(RegExp.$1);
                } else
                if ($dataEnemies[enemyId].enemyPattern[j].match(/[ ]*(?:def):[ ](.*)/i)) {
                    $dataEnemies[enemyId].deff = String(RegExp.$1);
                } else
                if ($dataEnemies[enemyId].enemyPattern[j].match(/[ ]*(?:mat):[ ](.*)/i)) {
                    $dataEnemies[enemyId].matf = String(RegExp.$1);
                } else
                if ($dataEnemies[enemyId].enemyPattern[j].match(/[ ]*(?:mdf):[ ](.*)/i)) {
                    $dataEnemies[enemyId].mdff = String(RegExp.$1);
                } else
                if ($dataEnemies[enemyId].enemyPattern[j].match(/[ ]*(?:agi):[ ](.*)/i)) {
                    $dataEnemies[enemyId].agif = String(RegExp.$1);
                } else
                if ($dataEnemies[enemyId].enemyPattern[j].match(/[ ]*(?:luk):[ ](.*)/i)) {
                    $dataEnemies[enemyId].lukf = String(RegExp.$1);
                }
            }
            $dataEnemies[enemyId].enemyPattern = [];
        } else if (enemyPatternFlag) {
            $dataEnemies[enemyId].enemyPattern.push(notedata[i]);
        } else if (notedata[i].match(/<(?:nosuffix)>/i)) {
            $dataEnemies[enemyId].nosuffix = true;
        }
    }
};

Maki.EL.DataManager_onLoad = DataManager.onLoad;
DataManager.onLoad = function(object) {
    Maki.EL.DataManager_onLoad.call(this, object);
    if (object === $dataEnemies) {
        for (var i = 1; i < $dataEnemies.length; i++) {
            this.parseEnemyData(i);
        }
    }
};

Maki.EL.Game_Enemy_initMembers = Game_Enemy.prototype.initMembers;
Game_Enemy.prototype.initMembers = function() {
    Maki.EL.Game_Enemy_initMembers.call(this);
    this._paramBase = [0,0,0,0,0,0,0,0];
};

Maki.EL.Game_Enemy_setup = Game_Enemy.prototype.setup;
Game_Enemy.prototype.setup = function(enemyId, x, y) {
    this._nosuffix = $dataEnemies[enemyId].nosuffix;
    var lvl = 0;
    for (var i = 0; i < $gameParty.battleMembers().length; i++) {
        lvl += $gameParty.battleMembers()[i]._level;
    }
    lvl = Math.floor(lvl/$gameParty.battleMembers().length);
    this._level = Math.max(eval($dataEnemies[enemyId].levelf), 1);
    var lvl = this._level;
    this._paramBase[0] = eval($dataEnemies[enemyId].mhpf);
    this._paramBase[1] = eval($dataEnemies[enemyId].mmpf);
    this._paramBase[2] = eval($dataEnemies[enemyId].atkf);
    this._paramBase[3] = eval($dataEnemies[enemyId].deff);
    this._paramBase[4] = eval($dataEnemies[enemyId].matf);
    this._paramBase[5] = eval($dataEnemies[enemyId].mdff);
    this._paramBase[6] = eval($dataEnemies[enemyId].agif);
    this._paramBase[7] = eval($dataEnemies[enemyId].lukf);
    Maki.EL.Game_Enemy_setup.call(this, enemyId, x, y);
};

Maki.EL.Game_Enemy_name = Game_Enemy.prototype.name;
Game_Enemy.prototype.name = function() {
    var suffix = Maki.EL.LevelSuffix.format(this._level);
    return this._nosuffix ? Maki.EL.Game_Enemy_name.call(this) :
        (this.originalName() + (this._plural ? this._letter : '') + ' ' + suffix);
};

Game_Enemy.prototype.paramBase = function(paramId) {
    return this._paramBase[paramId];
};
