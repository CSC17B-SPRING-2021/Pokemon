/*:
 * @plugindesc Show Enemy HP
 * @author Alejandro López
 *
 */

var hpTextSpriteContainerList = [];
var hpTextSpriteContainerIndex = 0;

function resetHpTextSpriteContainerElement(spriteList) {
	for (var i = 0; i < hpTextSpriteContainerIndex; i++) {
		for (var j = 0; j < spriteList.length; j++) {
			if (hpTextSpriteContainerList[i].spriteId == spriteList[j].spriteId) {
				hpTextSpriteContainerList[i].parent.removeChild(hpTextSpriteContainerList[i]);
				for (var k = i; k < hpTextSpriteContainerIndex - 1; k++) {
					hpTextSpriteContainerList[k] = hpTextSpriteContainerList[k + 1];
				}
				if (hpTextSpriteContainerIndex > 0) hpTextSpriteContainerIndex--;
				break;
			}
		}
	}
}

(function() {
	var parameters = PluginManager.parameters('ROKI_ShowEnemyHP');
	
	Sprite_Enemy.prototype.loadBitmap = function(name, hue) {
		if ($gameSystem.isSideView()) {
			this.bitmap = ImageManager.loadSvEnemy(name, hue);
		} else {
			this.bitmap = ImageManager.loadEnemy(name, hue);
		}
		console.log(this.bitmap);
		console.log(this.bitmap.height);
		this.createHPText();
	};
	
	Sprite_Enemy.prototype.startWhiten = function() {
		this._effectDuration = 16;
		this.updateHPText();
	};
	
	Sprite_Enemy.prototype.startBlink = function() {
		this._effectDuration = 20;
		this.updateHPText();
	};
	
	Sprite_Enemy.prototype.createHPText = function(sprite) {
		var sprite = new Sprite();
		this.addChild(sprite);
		hpTextSpriteContainerList[hpTextSpriteContainerIndex++] = sprite;
		
		var currentHp = Math.abs(this._enemy._hp).toString();		
		var row = this._enemy._hp >= this._enemy.mhp / 2 ? 1 : 2;
		
		for (var i = 0; i < currentHp.length; i++) {
			var hpTextSprite = new Sprite();
			hpTextSprite.bitmap = ImageManager.loadSystem('Damage');
			var w = hpTextSprite.bitmap.width / 10;
			var h = hpTextSprite.bitmap.height / 5;
			hpTextSprite.anchor.x = 0.5;
			hpTextSprite.anchor.y = 1;
			
			hpTextSprite.y = 0;
			
			sprite.addChild(hpTextSprite);
			
			var n = Number(currentHp[i]);
			hpTextSprite.setFrame(n * w, row * h, w, h);
			hpTextSprite.x = (i - (currentHp.length - 1) / 2) * w;
		}
		
	};
	
	Sprite_Enemy.prototype.updateHPText = function() {
		resetHpTextSpriteContainerElement(this.children);
		this.createHPText();
	};
	
})();