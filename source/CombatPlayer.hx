package;
import flixel.FlxSprite;
import flixel.sound.FlxSound;


class CombatPlayer extends FlxSprite
{   
    static inline var SPEED:Float = 100;
    var stepSound:FlxSound;

    public function new(x:Float = 0, y:Float = 0)
    {
        super(x, y);
        // our character, (asset, animated?, x,y), Note that we could also just use a raw string path like "assets/images/player.png".
        loadGraphic(AssetPaths.goku_sprite__png, true, 32, 46);

        // makes the right pic flipped
        setFacingFlip(LEFT, false, false);
        setFacingFlip(RIGHT, true, false);
        setFacingFlip(UP, false, false);

        // Hitbox
        //Set.size formula: x/2, y/2
        //offset.set formula: x/4, y/2
		setSize(16, 23);
		offset.set(8, 23);

        // adds animation, ("name", [frame-int], frame rate)
        animation.add("d_idle", [0]);
        animation.add("lr_idle", [3]);
        animation.add("u_idle", [6]);
        animation.add("d_walk", [0, 1, 0, 2], 6);
        animation.add("lr_walk", [3, 4, 3, 5], 6);
        animation.add("u_walk", [6, 7, 6, 8], 6);
        animation.add("combat_idle", [0, 1, 0, 2], 6, true);
        animation.add("dodge",[9, 10, 11, 9, 0],6);

    }
    
    
    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }
}
