package;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.sound.FlxSound;
import flixel.util.FlxColor;

class Player extends FlxSprite
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

        // Graphic
        //makeGraphic(16, 16, FlxColor.BLUE);
        drag.x = drag.y = 800;  // Higher drag for faster slowdown
		// setSize(8, 8);
		// offset.set(4, 4);
        stepSound = FlxG.sound.load(AssetPaths.step__wav);
    }

    function updateMovement()
    {
        #if FLX_KEYBOARD
        var up:Bool = FlxG.keys.anyPressed([UP, W]);
        var down:Bool = FlxG.keys.anyPressed([DOWN, S]);
        var left:Bool = FlxG.keys.anyPressed([LEFT, A]);
        var right:Bool = FlxG.keys.anyPressed([RIGHT, D]);
        #end

        #if mobile
        var virtualPad = PlayState.virtualPad;
        up = up || virtualPad.buttonUp.pressed;
        down = down || virtualPad.buttonDown.pressed;
        left  = left || virtualPad.buttonLeft.pressed;
        right = right || virtualPad.buttonRight.pressed;
        #end

        // Set velocity to zero if no keys are pressed
        velocity.set(0, 0);

        var moving:Bool = false;

        if (up || down || left || right)
            {   stepSound.play();
                var newAngle:Float = 0;
                if (up)
                {
                    newAngle = -90;
                    if (left)
                        newAngle -= 45;
                    else if (right)
                        newAngle += 45;
                    facing = UP;
                }
                else if (down)
                {
                    newAngle = 90;
                    if (left)
                        newAngle += 45;
                    else if (right)
                        newAngle -= 45;
                    facing = DOWN;
                }
                else if (left)
                {
                    newAngle = 180;
                    facing = LEFT;
                }
                else if (right)
                {
                    newAngle = 0;
                    facing = RIGHT;
                }
            
                // determine our velocity based on angle and speed
                velocity.setPolarDegrees(SPEED, newAngle);

                // If not moving, apply drag
                //if (!moving)
               //  {
               //  velocity.set(0, 0); // Ensure the player stops completely when no input is given
               //  }
            }

            var action = "idle";
            // check if the player is moving, and not walking into walls
            if ((velocity.x != 0 || velocity.y != 0) && touching == NONE)
            {
                action = "walk";
            }
            
            switch (facing)
            {
                case LEFT, RIGHT:
                    animation.play("lr_" + action);
                case UP:
                    animation.play("u_" + action);
                case DOWN:
                    animation.play("d_" + action);
                case _:
            }    
        
    }
    
    override function update(elapsed:Float) 
    {
        updateMovement();
        super.update(elapsed);
    }
}
