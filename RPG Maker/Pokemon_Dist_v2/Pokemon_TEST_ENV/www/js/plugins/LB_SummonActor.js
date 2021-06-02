/*:
 * @plugindesc v1.3.2 Summon single actors to temporarily replace the party.
 * @author LadyBaskerville
 *
 *
 *
 * @param On Summon Death
 * @desc Action to be executed when the Summon dies. Type 'return', 'commonevent' or 'lose'.
 * @default return
 *
 * @param Death Common Event
 * @desc If a Common Event is called on Summon Death, enter the Common Event ID here.
 * @default 0
 *
 * @param Return On Battle End
 * @desc Should the party return when the battle ends? Type 'true' or 'false'.
 * @default true
 *
 * @param Summon Battle End Common Event
 * @desc ID of a Common Event to call after a Summon ends a battle. 0 = none.
 * @default 0
 *
 * @param Heal Mode
 * @desc When should the Summons be healed automatically? Type 'summon', 'battleend' or 'never'.
 * @default battleend
 *
 * @param EXP Mode
 * @desc How should EXP be distributed? Type 'party', 'summon', 'share with last' or 'share with all'.
 * @default summon
 *
 * @param Change Victory Aftermath (Yanfly)
 * @desc Should Yanfly's Victory Aftermath and Aftermath Level Up scenes be adapted to the Exp Mode?
 * @default false
 *
 * @param Max EXP Items
 * @desc For Yanfly's VA: Maximum number of actors to appear in the EXP screen. -1 for battle party size.
 * @default -1
 *
 * @help
 * 
 * Summon Actor
 * Version 1.3.2
 * by LadyBaskerville
 * LB_SummonActor.js
 *
 *
 * ---------------------
 *     How to use
 * ---------------------
 * This plugin allows you to temporarily replace the entire party with a 
 * Summon actor. Only one Summon can be summoned at a time.
 * To create a summon / return skill, have the skill call a Common Event
 * that contains one of the Plugin Commands or Script Calls from below.
 *
 * ---------------------
 *   Plugin Parameters
 * ---------------------
 * On Summon Death:
 * Specify here what should happen when the Summon dies in battle.
 * - return:      Return the party immediately.
 * - commonevent: Run a common event. If you use this option,
 *                enter the Common Event ID in the next parameter.
 * - lose:        Let the party lose the battle.
 *
 * Death Common Event:
 * If a Common Event is called on Summon Death, enter the Common Event ID here.
 * By default, the ID is 0 (nothing will happen) - make sure to change this!
 * Usually, you will want to either revive the Summon or return the party with
 * a Script Call / Plugin Command somewhere in the Common Event.
 *
 * Return On Battle End:
 * Should the party return when the battle ends?
 * - true:  yes
 * - false: no
 *
 * Summon Battle End Common Event:
 * Enter the ID of a Common Event that should be called after a Summon ends 
 * a battle. Use this to e.g. reset map tints.
 * 
 * Heal Mode:
 * When should Summons be healed automatically?
 * - summon:    Each time they are summoned.
 * - battleend: After each battle.
 * - never:     No automatic healing.
 * Please note that it is possible to summon a Summon with 0 HP - this will
 * cause the On Summon Death action to be executed directly afterwards.
 *
 * EXP Mode:
 * How should EXP be distributed?
 * - party:           Only the original party members get EXP.
 * - summon:          If a Summon ends the battle, only that Summon gets EXP.
 * - share with last: If a Summon ends the battle, that Summon and the 
 *                    original party get EXP.
 * - share with all:  The original party and all Summons that were summoned in
 *                    the battle get EXP.
 *
 * Change Victory Aftermath (Yanfly):
 * When using Yanfly's Victory Aftermath (and Aftermath Level Up), should the
 * actors that appear on the EXP and Level Up screens be changed to reflect  
 * the EXP Mode?
 * - true:  yes (Summons that gain EXP will always appear first, then party 
 *               members that gain EXP, up to the max number specified below)
 * - false: no (EXP and Level Up screens will only show the actors / summons
 *              that end the battle, no matter if they gain EXP or not)
 *
 * Max EXP Items:
 * When using Yanfly's Victory Aftermath, up to how many actors can appear
 * on the EXP screen? Use -1 for the maximum number of battle members.
 *
 * ---------------------
 *    Plugin Commands
 * ---------------------
 * Use the plugin command
 *     SummonActor n
 * to summon the actor with the ID n.
 *
 * Use the plugin command
 *     ReturnParty
 * to return the party members that were in the party before the summon.
 *
 * ---------------------
 *      Notetags
 * ---------------------
 * You can disable certain skills and items if an actor is dead. 
 * Use the notetag
 *     <Require Living Actor: n>
 * to only enable the skill or item if actor n is alive.
 *
 * ---------------------
 *    Script Calls
 * ---------------------
 * $gameParty.LB_summonActor(n)
 * This is the same as using the Plugin Command SummonActor n.
 *
 * $gameParty.LB_return()
 * This is the same as using the Plugin Command ReturnParty.
 *
 * $gameParty._LB_summonId
 * The actor ID of the current Summon. 0 if there is currently no Summon.
 *
 * $gameParty._LB_summon
 * The current Summon (a Game_Actor). null if there is currently no Summon.
 *
 * ---------------------
 *     Terms of use
 * ---------------------
 * - Free for use in both non-commercial and commercial games.
 * - You may repost and edit this plugin, but do not claim you wrote the 
 *   original code.
 * - Please credit me as LadyBaskerville if you use this plugin.
 * 
 * ---------------------
 *      Changelog
 * ---------------------
 * Version 1.3.2
 * - Improved compatability with Yanfly's Victory Aftermath: Added two plugin
 *   parameters to adapt the Aftermath screens to the EXP mode.
 * Version 1.3.1
 * - Added compatability for Yanfly's Victory Aftermath and Aftermath Level Up.
 * Version 1.3.0
 * - Fixed script calls: made summon and summonId properties of Game_Party.
 * - Added Item notetag.
 * - Added Common Event to run after a Summon ends a battle.
 * - Fixed a small bug where actors would still execute their actions after
 *   the party was replaced by a Summon.
 * Version 1.2.0
 * - Added Skill notetag to require living actors.
 * - Allowed Summons to summon other Summons (replacing the current Summon)
 * Version 1.1.0
 * - Added EXP modes.
 * - Removed the Summons parameter as it is now obsolete.
 * Version 1.0.0
 * - Finished the plugin.
 *
 * ---------------------
 *     Future Plans
 * ---------------------
 * - optional individual status windows for Summon and party (probably in an extension plugin)
 * 
 */

(function() {
	
var LB = LB || {};
LB.SummonActor = LB.SummonActor || {};

//LB.SummonActor.summonId = 0;
//LB.SummonActor.summon = null;

LB.SummonActor.notetagsLoaded = false;

// -------------------------
//    Plugin Parameters
// -------------------------
LB.SummonActor.params = PluginManager.parameters('LB_SummonActor');

LB.SummonActor.onSummonDeath = String(LB.SummonActor.params['On Summon Death'].toLowerCase() || 'return');	// 'return', 'commonevent' or 'lose'.
LB.SummonActor.deathCE = Number(LB.SummonActor.params['Death Common Event'] || 0);
LB.SummonActor.returnOnBattleEnd = String(LB.SummonActor.params['Return On Battle End'] || 'true') === 'true';
LB.SummonActor.battleEndCE = Number(LB.SummonActor.params['Summon Battle End Common Event'] || 0);
LB.SummonActor.healMode = String(LB.SummonActor.params['Heal Mode'].toLowerCase() || 'battleend');	//	'summon', 'battleend' or 'never'.
LB.SummonActor.expMode = String(LB.SummonActor.params['EXP Mode'].toLowerCase() || 'summon');	//	'party', 'summon', 'share with last', 'share with all'
LB.SummonActor.changeVA = String(LB.SummonActor.params['Change Victory Aftermath (Yanfly)'] || 'false') === 'true';
LB.SummonActor.maxExpItems = Number(LB.SummonActor.params['Max EXP Items'] || -1);

// -------------------------
//     Plugin Commands
// -------------------------
LB.SummonActor.Game_Interpreter_pluginCommand = Game_Interpreter.prototype.pluginCommand;
Game_Interpreter.prototype.pluginCommand = function(command, args) {
    LB.SummonActor.Game_Interpreter_pluginCommand.call(this, command, args);
	
	if (command == 'SummonActor') {
		$gameParty.LB_summonActor(Number(args[0]));
	}
	
	if (command == 'ReturnParty') {
		$gameParty.LB_return();
	}
};

// ---------------
//   DataManager
// ---------------
DataManager.LB_processReqActNotetags = function(group) {
	for (var i = 0; i < group.length; i++) {
		if (group[i]) {
			if (group[i].meta['Require Living Actor']) {
				group[i]._LB_requiredActor = Number(group[i].meta['Require Living Actor'].trim());
			} else {
				group[i]._LB_requiredActor = null;
			}
		}	
	}
};

LB.SummonActor.DataManager_isDatabaseLoaded = DataManager.isDatabaseLoaded;
DataManager.isDatabaseLoaded = function() {
    if (!LB.SummonActor.DataManager_isDatabaseLoaded.call(this)) {
		return false;
	}
    // the database is loaded, we can now preload the notetags if we haven't already done it
	if (!LB.SummonActor.notetagsLoaded) {
		// preload skill and item notetags
		this.LB_processReqActNotetags($dataSkills);
		this.LB_processReqActNotetags($dataItems);
		LB.SummonActor.notetagsLoaded = true;
	}
	return true;
};

// -------------------------
//     Game_Party
// -------------------------
LB.SummonActor.Game_Party_initialize = Game_Party.prototype.initialize;
Game_Party.prototype.initialize = function() {
    LB.SummonActor.Game_Party_initialize.call(this);
	this._LB_battleMembers = [];
	this._LB_partyMembers = [];
	this._LB_summon = null;
	this._LB_summonId = 0;
};

Game_Party.prototype.LB_addSummon = function(summonId) {
	// store the summon id and Summon
	this._LB_summonId = summonId;
	this._LB_summon = $gameActors.actor(summonId);
	// add the Summon to the party
	this.addActor(summonId);
	// heal the Summon according to heal mode
	if (LB.SummonActor.healMode == 'summon') {
		this._LB_summon.recoverAll();
	}
	// if in battle, add Summon to the list of recent Summons
	if (this.inBattle()) {
		BattleManager._LB_recentSummons.push(this._LB_summon);
	}
};

Game_Party.prototype.LB_summonActor = function(summonId) {
	// check if a Summon is already summoned
	if (!this._LB_summon) {
		// store the current party and battle members
		this._LB_partyMembers = this.allMembers();
		this._LB_battleMembers = this.battleMembers();
		// remove all party members from the party
		this.LB_removeActors(this._LB_partyMembers);
	} else {
		// if a Summon is already summoned, remove it
		this.removeActor(this._LB_summonId);
	}
	// add Summon to party
	this.LB_addSummon(summonId);
};

Game_Party.prototype.LB_return = function() {
	// remove the summon from the party
	this.removeActor(this._LB_summonId);
	// set the stored summon id to 0 and the Summon to null
	this._LB_summonId = 0;
	this._LB_summon = null;
	// add all stored party members to the party
	this.LB_addActors(this._LB_partyMembers);
};

Game_Party.prototype.LB_addActors = function(actors) {
	for (var i = 0; i < actors.length; i++) {
		this.addActor(actors[i]._actorId);
	}
};

Game_Party.prototype.LB_removeActors = function(actors) {
	for (var i = 0; i < actors.length; i++) {
		this.removeActor(actors[i]._actorId);
	}
};

// -------------------------
//     Game_Actor
// -------------------------
LB.SummonActor.Game_Actor_isBattleMember = Game_Actor.prototype.isBattleMember;
Game_Actor.prototype.isBattleMember = function() {
	if (LB.SummonActor.Game_Actor_isBattleMember.call(this)) return true;
	if ($gameParty._LB_battleMembers.contains(this)) return true;
	if ($gameParty.inBattle() && BattleManager._LB_recentSummons.contains(this)) return true;
    return false;
};

// -------------------------
//     Game_BattlerBase
// -------------------------
LB.SummonActor.Game_BattlerBase_canUse = Game_BattlerBase.prototype.canUse;
Game_BattlerBase.prototype.canUse = function(item) {
    if (!LB.SummonActor.Game_BattlerBase_canUse.call(this, item)) return false;
	if (!item._LB_requiredActor) return true;
	if ($gameActors.actor(item._LB_requiredActor).isDead()) return false;
	return true;
};

// -------------------------
//     Game_Action
// -------------------------
LB.SummonActor.Game_Action_isValid = Game_Action.prototype.isValid;
Game_Action.prototype.isValid = function() {
    if (!LB.SummonActor.Game_Action_isValid.call(this)) return false;
	return (this.subject().isEnemy() || $gameParty.members().contains(this.subject()));
};

// -------------------------
//     BattleManager
// -------------------------
LB.SummonActor.BattleManager_initMembers = BattleManager.initMembers;
BattleManager.initMembers = function() {
	LB.SummonActor.BattleManager_initMembers.call(this);
	this._LB_recentSummons = [];
	if ($gameParty._LB_summon) {
		this._LB_recentSummons.push($gameParty._LB_summon);
	}
};

//LB.SummonActor.BattleManager_checkBattleEnd = BattleManager.checkBattleEnd;
BattleManager.checkBattleEnd = function() {
    if (this._phase) {
        if (this.checkAbort()) {
            return true;
        } else if ($gameParty.isAllDead()) {
			if ($gameParty.isAllDead() && $gameParty._LB_summon && LB.SummonActor.onSummonDeath != 'lose') {
				this.LB_processSummonDeath();
				return false;
			} else {
				this.processDefeat();
				return true;
			}
        } else if ($gameTroop.isAllDead()) {
            this.processVictory();
            return true;
        }
    }
    return false;
};

LB.SummonActor.BattleManager_endBattle = BattleManager.endBattle;
BattleManager.endBattle = function(result) {
    LB.SummonActor.BattleManager_endBattle.call(this, result);
	// From now on, check every 100 milliseconds if the scene has changed back 
	// to Scene_Map and only then process battle end
	var that = this;
	var interval = setInterval(function() {
		if (SceneManager._scene.constructor == Scene_Map) {
			that.LB_processSummonBattleEnd();
			clearInterval(interval);
		}
	}, 100);
};

BattleManager.LB_getExpActors = function() {
	// make a list of actors to get EXP
	if (LB.SummonActor.expMode == 'share with all') {
		var expActors = this._LB_recentSummons;
	} else {
		var expActors = [];
	}
	if ($gameParty._LB_summon) {
		switch (LB.SummonActor.expMode) {
			case 'summon':
				expActors.push($gameParty._LB_summon);
				break;
			case 'share with last':
				expActors.push($gameParty._LB_summon);
			case 'party':
			case 'share with all':
				expActors = expActors.concat($gameParty._LB_partyMembers);
				break;
			default:
				console.log('Unknown plugin parameter ' + LB.SummonActor.expMode + ' for EXP Mode in LB_SummonActor');
			}
		} else {
			expActors = expActors.concat($gameParty.allMembers());
		}
	return expActors;
};

BattleManager.LB_getExpActorIds = function() {
	var ids = [];
	var actors = this.LB_getExpActors();
	for (var i = 0; i < actors.length; i++) {
		ids.push(actors[i]._actorId);
	}
	return ids;
};

BattleManager.gainExp = function() {
    var exp = this._rewards.exp;
    this.LB_getExpActors().forEach(function(actor) {
        actor.gainExp(exp);
    });
};

BattleManager.LB_processSummonBattleEnd = function() {
	
	if ($gameParty._LB_summon) {
		// run Common Event
		if (LB.SummonActor.battleEndCE != 0) {
			$gameTemp.reserveCommonEvent(LB.SummonActor.battleEndCE);
		}
		// if return on battle end is true, return the party
		if (LB.SummonActor.returnOnBattleEnd) {
			$gameParty.LB_return();
		}
	}
	
	// if heal mode is battleend, heal all recent summons
	if (LB.SummonActor.healMode == 'battleend') {
		for (var i = 0; i < this._LB_recentSummons.length; i++) {
			this._LB_recentSummons[i].recoverAll();
		}
	}
	// clear the list of recent summons
	this._LB_recentSummons = [];
};

BattleManager.LB_processSummonDeath = function() {
	switch(LB.SummonActor.onSummonDeath) {
		case 'return':
			$gameParty.LB_return();
			break;
		case 'commonevent':
			if (LB.SummonActor.deathCE != 0) {
				$gameTemp.reserveCommonEvent(LB.SummonActor.deathCE);
			}
			break;
	}
};

// Compatability with Yanfly's Victory Aftermath (and Aftermath Level Up)

if (Imported.YEP_VictoryAftermath && LB.SummonActor.changeVA) {
	LB.SummonActor.BattleManager_prepareVictoryInfo = BattleManager.prepareVictoryInfo;
	BattleManager.prepareVictoryInfo = function() {
		var tempParty = $gameParty._actors;
		var expParty = this.LB_getExpActorIds();
		$gameParty._actors = expParty;
		LB.SummonActor.BattleManager_prepareVictoryInfo.call(this);
		$gameParty._actors = tempParty;
	};
	
	Window_VictoryExp.prototype.maxItems = function() {
		if (LB.SummonActor.maxExpItems == -1) return $gameParty.maxBattleMembers();
		return LB.SummonActor.maxExpItems;
	};
	
	Window_VictoryExp.prototype.drawItem = function(index) {
		var actor = BattleManager.LB_getExpActors()[index];
		if (!actor || !actor.isBattleMember()) return;
		this.drawActorProfile(actor, index);
	};

	Window_VictoryExp.prototype.drawItemGauge = function(index) {
		var actor = BattleManager.LB_getExpActors()[index];
		if (!actor || !actor.isBattleMember()) return;
		this.drawActorGauge(actor, index);
	};
}

})();