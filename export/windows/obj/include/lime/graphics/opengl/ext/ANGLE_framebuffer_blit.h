// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7378ebc94440c0ad_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_framebuffer_blit)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ANGLE_framebuffer_blit_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ANGLE_framebuffer_blit_obj OBJ_;
		ANGLE_framebuffer_blit_obj();

	public:
		enum { _hx_ClassId = 0x461c8afd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_framebuffer_blit")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ANGLE_framebuffer_blit"); }

		inline static ::hx::ObjectPtr< ANGLE_framebuffer_blit_obj > __new() {
			::hx::ObjectPtr< ANGLE_framebuffer_blit_obj > __this = new ANGLE_framebuffer_blit_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ANGLE_framebuffer_blit_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ANGLE_framebuffer_blit_obj *__this = (ANGLE_framebuffer_blit_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ANGLE_framebuffer_blit_obj), false, "lime.graphics.opengl.ext.ANGLE_framebuffer_blit"));
			*(void **)__this = ANGLE_framebuffer_blit_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7378ebc94440c0ad_4_new)
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit)(__this) )->READ_FRAMEBUFFER_BINDING_ANGLE = 36010;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit)(__this) )->DRAW_FRAMEBUFFER_BINDING_ANGLE = 36006;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit)(__this) )->DRAW_FRAMEBUFFER_ANGLE = 36009;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit)(__this) )->READ_FRAMEBUFFER_ANGLE = 36008;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ANGLE_framebuffer_blit_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ANGLE_framebuffer_blit",53,5d,fe,07); }

		int READ_FRAMEBUFFER_ANGLE;
		int DRAW_FRAMEBUFFER_ANGLE;
		int DRAW_FRAMEBUFFER_BINDING_ANGLE;
		int READ_FRAMEBUFFER_BINDING_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit */ 