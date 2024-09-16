package;
import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;

class MenuState extends FlxState
{
	override public function create()
	{	// (x, y, size?)
		var text = new FlxText(10, 10, 100, "Hello, World!");
		add(text);
		var text = new FlxText(10, 20, 100, "I miss my twink boyfriend...");
		add(text);
        var playButton = new FlxButton(0, 0, "Play", clickPlay);
        add(playButton);
        // puts the play button in the screen center
        playButton.screenCenter();
		super.create();
	}
    // this function lets a button be clickable and bring us to the Playstate
    function clickPlay()
        {
            FlxG.switchState(new PlayState());
        }

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
