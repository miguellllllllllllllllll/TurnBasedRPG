package;
import flixel.FlxState;
import flixel.text.FlxText;

class PlayState extends FlxState
{
	var player:Player;

	override public function create()
	{	
		var text = new FlxText(10, 10, 100, "Hello, World!");
		add(text);
		var text = new FlxText(10, 20, 100, "I miss my twink boyfriend...");
		add(text);

		// (X,Y);
		player = new Player(50, 50);
		add(player);
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
