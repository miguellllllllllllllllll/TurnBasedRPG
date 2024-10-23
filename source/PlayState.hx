package;
import flixel.FlxBasic;
import flixel.FlxG;
import flixel.FlxState;
import flixel.addons.editors.ogmo.FlxOgmo3Loader;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.sound.FlxSound;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;

using flixel.util.FlxSpriteUtil;

class PlayState extends FlxState
{
	var player:Player;
	var map:FlxOgmo3Loader;
	var walls:FlxTilemap;
	var coins:FlxTypedGroup<Coin>;
	var enemies:FlxTypedGroup<Enemy>;
	var hud:HUD;
	var money:Int = 0;
	var health:Int = 3;
	var inCombat:Bool = false;
	var combatHud:CombatHUD;
	var ending:Bool;
	var won:Bool;
	var coinSound:FlxSound;
	#if mobile
	public static var virtualPad:FlxVirtualPad;
	#end

	override public function create()
	{	
		var text = new FlxText(10, 10, 100, "Hello, World!");
		add(text);
		var text = new FlxText(10, 20, 100, "I miss my twink boyfriend...");
		add(text);

		map = new FlxOgmo3Loader(AssetPaths.turnBasedRPG__ogmo, AssetPaths.room_001__json);
		walls = map.loadTilemap(AssetPaths.tiles__png, "walls");
		walls.follow();
		walls.setTileProperties(1, NONE);
		walls.setTileProperties(2, ANY);
		add(walls);

		// coins
		coins = new FlxTypedGroup<Coin>();
		add(coins);

		//enemies
		enemies = new FlxTypedGroup<Enemy>();
		add(enemies);
		
		// (X,Y);
		player = new Player();
		map.loadEntities(placeEntities, "entities");
		add(player);
		FlxG.camera.follow(player, TOPDOWN, 1);

		// HUD
		hud = new HUD();
		add(hud);

		combatHud = new CombatHUD();
        add(combatHud);

		coinSound = FlxG.sound.load(AssetPaths.coin__wav);

		#if mobile
		virtualPad = new FlxVirtualPad(FULL, NONE);
		add(virtualPad);
		#end

		FlxG.camera.fade(FlxColor.BLACK, 0.33, true);

		#if FLX_MOUSE
		FlxG.mouse.visible = false;
		#end

		super.create();
	}

	function placeEntities(entity:EntityData)
	{
		if (entity.name == "player")
		{
			player.setPosition(entity.x, entity.y);
		}
		else if (entity.name == "coin")
		{
			coins.add(new Coin(entity.x, entity.y));
		}

		else if (entity.name == "enemy")
			{
				enemies.add(new Enemy(entity.x + 4, entity.y, REGULAR));
			}
			else if (entity.name == "boss")
			{
				enemies.add(new Enemy(entity.x + 4, entity.y, BOSS));
			}
	}

	function playerTouchCoin(player:Player, coin:Coin)
	{
		if (player.alive && player.exists && coin.alive && coin.exists)
		{
			coinSound.play(true);
			money++;
			hud.updateHUD(health, money);
			coin.kill();
		}
	}

	function playerTouchEnemy(player:Player, enemy:Enemy)
		{
			if (player.alive && player.exists && enemy.alive && enemy.exists && !enemy.isFlickering())
			{
				startCombat(enemy);
			}
		}
		
		function startCombat(enemy:Enemy)
		{
			inCombat = true;
			player.active = false;
			enemies.active = false;
			combatHud.initCombat(health, enemy);
			#if mobile
			virtualPad.visible = false;
			#end
		}


	override public function update(elapsed:Float)
	{	

		if (inCombat)
			{
				if (!combatHud.visible)
					{
						health = combatHud.playerHealth;
						hud.updateHUD(health, money);
						if (combatHud.outcome == DEFEAT)
						{
							ending = true;
							FlxG.camera.fade(FlxColor.BLACK, 0.33, false, doneLoseFadeOut);
						}
						else
						{
							if (combatHud.outcome == VICTORY)
							{
								combatHud.enemy.kill();
								if (combatHud.enemy.type == BOSS)
								{
									won = true;
									ending = true;
									FlxG.camera.fade(FlxColor.BLACK, 0.33, false, doneWinFadeOut);
								}
							}
							else
							{
								combatHud.enemy.flicker();
							}
							inCombat = false;
							player.active = true;
							enemies.active = true;
							#if mobile
							virtualPad.visible = true;
							#end
						}
					}
			}
			else
			{
				FlxG.collide(player, walls);
				FlxG.overlap(player, coins, playerTouchCoin);
				FlxG.collide(enemies, walls);
				enemies.forEachAlive(checkEnemyVision);
				FlxG.overlap(player, enemies, playerTouchEnemy);
			}

		super.update(elapsed);
		if (ending)
			{
				return;
			}
		FlxG.collide(player, walls);
		FlxG.overlap(player, coins, playerTouchCoin);
		FlxG.collide(enemies, walls);
		enemies.forEachAlive(checkEnemyVision);
	}

	function doneWinFadeOut()
		{
			FlxG.switchState(new GameOverState(won, money));
		}

		function doneLoseFadeOut()
			{
				FlxG.switchState(new GameOverState(won, money));
			}
	

	function checkEnemyVision(enemy:Enemy)
		{
			if (walls.ray(enemy.getMidpoint(), player.getMidpoint()))
			{
				enemy.seesPlayer = true;
				enemy.playerPosition = player.getMidpoint();
			}
			else
			{
				enemy.seesPlayer = false;
			}
		}
}
  