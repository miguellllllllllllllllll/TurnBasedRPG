package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
import flixel.sound.FlxSound;

using flixel.util.FlxSpriteUtil;

enum EnemyType
{
	REGULAR;
	BOSS;
}

class CombatEnemy extends FlxSprite
{
	static inline var WALK_SPEED:Float = 40;
	static inline var CHASE_SPEED:Float = 70;

	public var type:EnemyType;
    var moveDirection:Float;
	var stepSound:FlxSound;

	public function new(x:Float, y:Float, type:EnemyType)
	{
		super(x, y);
		this.type = type;
		var graphic = if (type == BOSS) AssetPaths.frieza__png else AssetPaths.cooler__png;
		loadGraphic(graphic, true, 35, 44);
		setFacingFlip(LEFT, false, false);
		setFacingFlip(RIGHT, true, false);
		animation.add("d_idle", [0]);
		animation.add("lr_idle", [3]);
		animation.add("u_idle", [6]);
		animation.add("d_walk", [0, 1, 0, 2], 6);
		animation.add("lr_walk", [3, 4, 3, 5], 6);
		animation.add("u_walk", [6, 7, 6, 8], 6);
        animation.add("combat_idle", [15, 16, 17, 16], 6, true);
        animation.add("hurt", [12, 12, 12, 12], 6, false);
		drag.x = drag.y = 10;
		 // Hitbox
        //Set.size formula: x/2, y/2
        //offset.set formula: x/4, y/2
		setSize(17, 22);
		offset.x = 12;
		offset.y = 22;
      
	}

    public function changeType(type:EnemyType)
        {
            if (this.type != type)
            {
                this.type = type;
                var graphic = if (type == BOSS) AssetPaths.frieza__png else AssetPaths.cooler__png;
                loadGraphic(graphic, true, 35, 44);
            }
        }
}

