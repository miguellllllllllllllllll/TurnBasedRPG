package;

import haxe.io.Bytes;
import haxe.io.Path;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || webassembly)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif (console || sys)
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		data = '{"name":null,"assets":"aoy4:pathy29:assets%2Fdata%2Froom-001.jsony4:sizei7147y4:typey4:TEXTy2:idR1y7:preloadtgoR0y33:assets%2Fdata%2FturnBasedRPG.ogmoR2i6069R3R4R5R7R6tgoR0y76:assets%2Fimages%2Fa_frieza_sprite_sheet_by_spritemaker20_ddds9p0-375w-2x.jpgR2i99355R3y5:IMAGER5R8R6tgoR0y26:assets%2Fimages%2Fboss.pngR2i2558R3R9R5R10R6tgoR0y28:assets%2Fimages%2Fbutton.pngR2i1126R3R9R5R11R6tgoR0y26:assets%2Fimages%2Fcoin.pngR2i1274R3R9R5R12R6tgoR0y28:assets%2Fimages%2Fcooler.pngR2i4413R3R9R5R13R6tgoR0y66:assets%2Fimages%2Fd1o46mc-778261bb-32f7-4394-ba7e-b5b816ddb8d5.pngR2i57444R3R9R5R14R6tgoR0y66:assets%2Fimages%2Fdf1pu9n-72139eb3-7e6a-4f66-8bc8-1bf18f3564a5.pngR2i161546R3R9R5R15R6tgoR0y29:assets%2Fimages%2Fenemies.pngR2i4382R3R9R5R16R6tgoR0y27:assets%2Fimages%2Fenemy.pngR2i2405R3R9R5R17R6tgoR0y28:assets%2Fimages%2Ffrieza.pngR2i4377R3R9R5R18R6tgoR0y111:assets%2Fimages%2FGame%20Boy%20Advance%20-%20Dragon%20Ball%20Z%20The%20Legacy%20of%20Goku%20II%20-%20Cooler.pngR2i41494R3R9R5R19R6tgoR0y34:assets%2Fimages%2Fgokuportrait.pngR2i529R3R9R5R20R6tgoR0y33:assets%2Fimages%2FGoku_Player.pngR2i30628R3R9R5R21R6tgoR0y33:assets%2Fimages%2Fgoku_sprite.pngR2i6097R3R9R5R22R6tgoR0y31:assets%2Fimages%2Fhaxe-logo.pngR2i3499R3R9R5R23R6tgoR0y28:assets%2Fimages%2Fhealth.pngR2i1075R3R9R5R24R6tgoR0y26:assets%2Fimages%2Flogo.jpgR2i40655R3R9R5R25R6tgoR0y28:assets%2Fimages%2Fplayer.pngR2i1876R3R9R5R26R6tgoR0y29:assets%2Fimages%2Fpointer.pngR2i992R3R9R5R27R6tgoR0y27:assets%2Fimages%2Ftiles.pngR2i1056R3R9R5R28R6tgoR2i2752260R3y5:MUSICR5y35:assets%2Fmusic%2Fbardockthegoat.mp3y9:pathGroupaR30hR6tgoR2i23978R3y5:SOUNDR5y25:assets%2Fmusic%2Fcoin.wavR31aR33hR6tgoR2i39300R3R32R5y27:assets%2Fmusic%2Fcombat.wavR31aR34hR6tgoR2i34298R3R32R5y25:assets%2Fmusic%2Ffled.wavR31aR35hR6tgoR2i324962R3R29R5y34:assets%2Fmusic%2Fgameoversound.mp3R31aR36hR6tgoR2i20012R3R32R5y25:assets%2Fmusic%2Fhurt.wavR31aR37hR6tgoR2i33516R3R32R5y25:assets%2Fmusic%2Flose.wavR31aR38hR6tgoR2i24158R3R32R5y25:assets%2Fmusic%2Fmiss.wavR31aR39hR6tgoR2i10518R3R32R5y27:assets%2Fmusic%2Fselect.wavR31aR40hR6tgoR2i10188R3R32R5y25:assets%2Fmusic%2Fstep.wavR31aR41hR6tgoR2i54320R3R32R5y24:assets%2Fmusic%2Fwin.wavR31aR42hR6tgoR0y36:assets%2Fsounds%2Fsounds-go-here.txtR2zR3R4R5R43R6tgoR2i8220R3R29R5y26:flixel%2Fsounds%2Fbeep.mp3R31aR44y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R29R5y28:flixel%2Fsounds%2Fflixel.mp3R31aR46y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i6840R3R32R5R45R31aR44R45hgoR2i33629R3R32R5R47R31aR46R47hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R48R49y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i277R3R9R5R54R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i505R3R9R5R55R6tgoR0y42:flixel%2Fimages%2Ftransitions%2Fcircle.pngR2i824R3R9R5R56R6tgoR0y53:flixel%2Fimages%2Ftransitions%2Fdiagonal_gradient.pngR2i3812R3R9R5R57R6tgoR0y43:flixel%2Fimages%2Ftransitions%2Fdiamond.pngR2i788R3R9R5R58R6tgoR0y42:flixel%2Fimages%2Ftransitions%2Fsquare.pngR2i383R3R9R5R59R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

	}


}

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_room_001_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_turnbasedrpg_ogmo extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_a_frieza_sprite_sheet_by_spritemaker20_ddds9p0_375w_2x_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_boss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_coin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_cooler_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_d1o46mc_778261bb_32f7_4394_ba7e_b5b816ddb8d5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_df1pu9n_72139eb3_7e6a_4f66_8bc8_1bf18f3564a5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_enemies_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_enemy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_frieza_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_boy_advance___dragon_ball_z_the_legacy_of_goku_ii___cooler_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gokuportrait_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_goku_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_goku_sprite_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_haxe_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_health_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logo_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pointer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bardockthegoat_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_coin_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_combat_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_fled_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_gameoversound_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_hurt_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_lose_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_miss_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_select_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_step_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_win_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_circle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diagonal_gradient_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diamond_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_square_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/room-001.json") @:noCompletion #if display private #end class __ASSET__assets_data_room_001_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/turnBasedRPG.ogmo") @:noCompletion #if display private #end class __ASSET__assets_data_turnbasedrpg_ogmo extends haxe.io.Bytes {}
@:keep @:image("assets/images/a_frieza_sprite_sheet_by_spritemaker20_ddds9p0-375w-2x.jpg") @:noCompletion #if display private #end class __ASSET__assets_images_a_frieza_sprite_sheet_by_spritemaker20_ddds9p0_375w_2x_jpg extends lime.graphics.Image {}
@:keep @:image("assets/images/boss.png") @:noCompletion #if display private #end class __ASSET__assets_images_boss_png extends lime.graphics.Image {}
@:keep @:image("assets/images/button.png") @:noCompletion #if display private #end class __ASSET__assets_images_button_png extends lime.graphics.Image {}
@:keep @:image("assets/images/coin.png") @:noCompletion #if display private #end class __ASSET__assets_images_coin_png extends lime.graphics.Image {}
@:keep @:image("assets/images/cooler.png") @:noCompletion #if display private #end class __ASSET__assets_images_cooler_png extends lime.graphics.Image {}
@:keep @:image("assets/images/d1o46mc-778261bb-32f7-4394-ba7e-b5b816ddb8d5.png") @:noCompletion #if display private #end class __ASSET__assets_images_d1o46mc_778261bb_32f7_4394_ba7e_b5b816ddb8d5_png extends lime.graphics.Image {}
@:keep @:image("assets/images/df1pu9n-72139eb3-7e6a-4f66-8bc8-1bf18f3564a5.png") @:noCompletion #if display private #end class __ASSET__assets_images_df1pu9n_72139eb3_7e6a_4f66_8bc8_1bf18f3564a5_png extends lime.graphics.Image {}
@:keep @:image("assets/images/enemies.png") @:noCompletion #if display private #end class __ASSET__assets_images_enemies_png extends lime.graphics.Image {}
@:keep @:image("assets/images/enemy.png") @:noCompletion #if display private #end class __ASSET__assets_images_enemy_png extends lime.graphics.Image {}
@:keep @:image("assets/images/frieza.png") @:noCompletion #if display private #end class __ASSET__assets_images_frieza_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game Boy Advance - Dragon Ball Z The Legacy of Goku II - Cooler.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_boy_advance___dragon_ball_z_the_legacy_of_goku_ii___cooler_png extends lime.graphics.Image {}
@:keep @:image("assets/images/gokuportrait.png") @:noCompletion #if display private #end class __ASSET__assets_images_gokuportrait_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Goku_Player.png") @:noCompletion #if display private #end class __ASSET__assets_images_goku_player_png extends lime.graphics.Image {}
@:keep @:image("assets/images/goku_sprite.png") @:noCompletion #if display private #end class __ASSET__assets_images_goku_sprite_png extends lime.graphics.Image {}
@:keep @:image("assets/images/haxe-logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_haxe_logo_png extends lime.graphics.Image {}
@:keep @:image("assets/images/health.png") @:noCompletion #if display private #end class __ASSET__assets_images_health_png extends lime.graphics.Image {}
@:keep @:image("assets/images/logo.jpg") @:noCompletion #if display private #end class __ASSET__assets_images_logo_jpg extends lime.graphics.Image {}
@:keep @:image("assets/images/player.png") @:noCompletion #if display private #end class __ASSET__assets_images_player_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pointer.png") @:noCompletion #if display private #end class __ASSET__assets_images_pointer_png extends lime.graphics.Image {}
@:keep @:image("assets/images/tiles.png") @:noCompletion #if display private #end class __ASSET__assets_images_tiles_png extends lime.graphics.Image {}
@:keep @:file("assets/music/bardockthegoat.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_bardockthegoat_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/coin.wav") @:noCompletion #if display private #end class __ASSET__assets_music_coin_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/combat.wav") @:noCompletion #if display private #end class __ASSET__assets_music_combat_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/fled.wav") @:noCompletion #if display private #end class __ASSET__assets_music_fled_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/gameoversound.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_gameoversound_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/hurt.wav") @:noCompletion #if display private #end class __ASSET__assets_music_hurt_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/lose.wav") @:noCompletion #if display private #end class __ASSET__assets_music_lose_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/miss.wav") @:noCompletion #if display private #end class __ASSET__assets_music_miss_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/select.wav") @:noCompletion #if display private #end class __ASSET__assets_music_select_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/step.wav") @:noCompletion #if display private #end class __ASSET__assets_music_step_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/win.wav") @:noCompletion #if display private #end class __ASSET__assets_music_win_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/circle.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_circle_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/diagonal_gradient.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diagonal_gradient_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/diamond.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diamond_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/square.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_square_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end