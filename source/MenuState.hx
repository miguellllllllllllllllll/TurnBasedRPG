package;
import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

class MenuState extends FlxState
{
	var titleText:FlxText;
	var optionsButton:FlxButton;
	#if desktop
	var exitButton:FlxButton;
	#end

	override public function create()
	{	// (x, y, size?)
		//var text = new FlxText(10, 10, 100, "Hello, World!");
		//add(text);
		//var text = new FlxText(10, 20, 100, "I miss my twink boyfriend...");
		//add(text);
		if (FlxG.sound.music == null) // don't restart the music if it's already playing
			{
				FlxG.sound.playMusic(AssetPaths.bardockthegoat__mp3, 1, true);
			}
        var playButton = new FlxButton(0, 0, "Play", clickPlay);
        add(playButton);


		titleText = new FlxText(20, 0, 0, "RPG\nGOKU\nGame", 22);
		titleText.alignment = CENTER;
		titleText.screenCenter(X);
		add(titleText);

		playButton.x = (FlxG.width / 2) - playButton.width - 10;
		playButton.y = FlxG.height - playButton.height - 10;
		add(playButton);
		
		optionsButton = new FlxButton(0, 0, "Options", clickOptions);
		optionsButton.x = (FlxG.width / 2) + 10;
		optionsButton.y = FlxG.height - optionsButton.height - 10;
		add(optionsButton);
        // puts the play button in the screen center
        playButton.screenCenter();
		playButton.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
		#if desktop
		exitButton = new FlxButton(FlxG.width - 28, 8, "X", clickExit);
		exitButton.loadGraphic(AssetPaths.button__png, true, 20, 20);
		add(exitButton);
		#end

		FlxG.camera.fade(FlxColor.BLACK, 0.33, true);

		super.create();
	}
    // this function lets a button be clickable and bring us to the Playstate
    function clickPlay()
        {	FlxG.camera.fade(FlxColor.BLACK, 0.33, true);
            FlxG.switchState(new PlayState());
        }

	function clickOptions()
	{		FlxG.camera.fade(FlxColor.BLACK, 0.33, true); 
			FlxG.switchState(new OptionsState());
	}

	#if desktop
	function clickExit()
	{
		Sys.exit(0);
	}
	#end

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
