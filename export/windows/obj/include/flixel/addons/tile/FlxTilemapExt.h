// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_tile_FlxTilemapExt
#define INCLUDED_flixel_addons_tile_FlxTilemapExt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileSpecial)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTilemapExt)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTile)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,tile,FlxTypedTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTilemapExt_obj : public  ::flixel::tile::FlxTilemap_obj
{
	public:
		typedef  ::flixel::tile::FlxTilemap_obj super;
		typedef FlxTilemapExt_obj OBJ_;
		FlxTilemapExt_obj();

	public:
		enum { _hx_ClassId = 0x37464a20 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.tile.FlxTilemapExt")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.tile.FlxTilemapExt"); }
		static ::hx::ObjectPtr< FlxTilemapExt_obj > __new();
		static ::hx::ObjectPtr< FlxTilemapExt_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTilemapExt_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTilemapExt",05,80,5b,17); }

		int _snapping;
		 ::flixel::math::FlxBasePoint _slopePoint;
		 ::flixel::math::FlxBasePoint _objPoint;
		bool _downwardsGlue;
		Float _velocityYDownSlope;
		Float _slopeSlowDownFactor;
		::Array< int > _slopeNorthwest;
		::Array< int > _slopeNortheast;
		::Array< int > _slopeSouthwest;
		::Array< int > _slopeSoutheast;
		::Array< int > _slopeThickGentle;
		::Array< int > _slopeThinGentle;
		::Array< int > _slopeThickSteep;
		::Array< int > _slopeThinSteep;
		::Array< ::Dynamic> _specialTiles;
		void destroy();

		void update(Float elapsed);

		void drawTilemap( ::flixel::tile::FlxTilemapBuffer buffer, ::flixel::FlxCamera camera);

		void setSpecialTiles(::Array< ::Dynamic> tiles);
		::Dynamic setSpecialTiles_dyn();

		bool overlapsWithCallback( ::flixel::FlxObject object, ::Dynamic callback,::hx::Null< bool >  flipCallbackParams, ::flixel::math::FlxBasePoint position);

		void setDownwardsGlue(bool downwardsGlue,::hx::Null< Float >  slopeSlowDownFactor,::hx::Null< Float >  velocityYDownSlope);
		::Dynamic setDownwardsGlue_dyn();

		void setSlopes(::Array< int > northwest,::Array< int > northeast,::Array< int > southwest,::Array< int > southeast);
		::Dynamic setSlopes_dyn();

		void setGentle(::Array< int > thickTiles,::Array< int > thinTiles);
		::Dynamic setGentle_dyn();

		void setSteep(::Array< int > thickTiles,::Array< int > thinTiles);
		::Dynamic setSteep_dyn();

		bool checkThickGentle(int tileIndex);
		::Dynamic checkThickGentle_dyn();

		bool checkThinGentle(int tileIndex);
		::Dynamic checkThinGentle_dyn();

		bool checkThickSteep(int tileIndex);
		::Dynamic checkThickSteep_dyn();

		bool checkThinSteep(int tileIndex);
		::Dynamic checkThinSteep_dyn();

		void fixSlopePoint( ::flixel::tile::FlxTile slope);
		::Dynamic fixSlopePoint_dyn();

		void onCollideFloorSlope( ::flixel::FlxObject slope, ::flixel::FlxObject object);
		::Dynamic onCollideFloorSlope_dyn();

		void onCollideCeilSlope( ::flixel::FlxObject slope, ::flixel::FlxObject object);
		::Dynamic onCollideCeilSlope_dyn();

		void solveCollisionSlopeNorthwest( ::flixel::FlxObject slope, ::flixel::FlxObject object);
		::Dynamic solveCollisionSlopeNorthwest_dyn();

		void solveCollisionSlopeNortheast( ::flixel::FlxObject slope, ::flixel::FlxObject object);
		::Dynamic solveCollisionSlopeNortheast_dyn();

		void solveCollisionSlopeSouthwest( ::flixel::FlxObject slope, ::flixel::FlxObject object);
		::Dynamic solveCollisionSlopeSouthwest_dyn();

		void solveCollisionSlopeSoutheast( ::flixel::FlxObject slope, ::flixel::FlxObject object);
		::Dynamic solveCollisionSlopeSoutheast_dyn();

		void setSlopeProperties();
		::Dynamic setSlopeProperties_dyn();

		bool checkArrays(int tileIndex);
		::Dynamic checkArrays_dyn();

		 ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection value);

};

} // end namespace flixel
} // end namespace addons
} // end namespace tile

#endif /* INCLUDED_flixel_addons_tile_FlxTilemapExt */ 