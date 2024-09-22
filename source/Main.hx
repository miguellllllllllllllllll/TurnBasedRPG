package;

import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		// whichever state u put on here will start first
		addChild(new FlxGame(320, 240, MenuState));
	}
}
