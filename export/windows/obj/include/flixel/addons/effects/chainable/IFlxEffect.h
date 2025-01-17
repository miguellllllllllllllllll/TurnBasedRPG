// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#define INCLUDED_flixel_addons_effects_chainable_IFlxEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES IFlxEffect_obj {
	public:
		typedef  ::flixel::util::IFlxDestroyable_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::effects::chainable::IFlxEffect_obj *>(_hx_.mPtr->_hx_getInterface(0x4a1f9502)))->_hx_destroy)();
		}
		void (::hx::Object :: *_hx_update)(Float elapsed); 
		static inline void update( ::Dynamic _hx_,Float elapsed) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::effects::chainable::IFlxEffect_obj *>(_hx_.mPtr->_hx_getInterface(0x4a1f9502)))->_hx_update)(elapsed);
		}
		 ::openfl::display::BitmapData (::hx::Object :: *_hx_apply)( ::openfl::display::BitmapData bitmapData); 
		static inline  ::openfl::display::BitmapData apply( ::Dynamic _hx_, ::openfl::display::BitmapData bitmapData) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::effects::chainable::IFlxEffect_obj *>(_hx_.mPtr->_hx_getInterface(0x4a1f9502)))->_hx_apply)(bitmapData);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_IFlxEffect */ 
