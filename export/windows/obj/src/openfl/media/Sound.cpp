// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioContext
#include <lime/media/AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_AudioManager
#include <lime/media/AudioManager.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_lime_media_OpenALAudioContext
#include <lime/media/OpenALAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundMixer
#include <openfl/media/SoundMixer.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_95_new,"openfl.media.Sound","new",0xfdfd1c39,"openfl.media.Sound.new","openfl/media/Sound.hx",95,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_339_close,"openfl.media.Sound","close",0xfbd9cbd1,"openfl.media.Sound.close","openfl/media/Sound.hx",339,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_512_load,"openfl.media.Sound","load",0x3e30ac2d,"openfl.media.Sound.load","openfl/media/Sound.hx",512,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_490_load,"openfl.media.Sound","load",0x3e30ac2d,"openfl.media.Sound.load","openfl/media/Sound.hx",490,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_528_loadCompressedDataFromByteArray,"openfl.media.Sound","loadCompressedDataFromByteArray",0x8f237f2f,"openfl.media.Sound.loadCompressedDataFromByteArray","openfl/media/Sound.hx",528,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_623_loadPCMFromByteArray,"openfl.media.Sound","loadPCMFromByteArray",0xb6cc217a,"openfl.media.Sound.loadPCMFromByteArray","openfl/media/Sound.hx",623,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_675_play,"openfl.media.Sound","play",0x40d33ffb,"openfl.media.Sound.play","openfl/media/Sound.hx",675,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_746_get_sampleRate,"openfl.media.Sound","get_sampleRate",0x2e9a453a,"openfl.media.Sound.get_sampleRate","openfl/media/Sound.hx",746,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_753_get_id3,"openfl.media.Sound","get_id3",0xac6378e8,"openfl.media.Sound.get_id3","openfl/media/Sound.hx",753,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_757_get_length,"openfl.media.Sound","get_length",0xcc37d5f6,"openfl.media.Sound.get_length","openfl/media/Sound.hx",757,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_788_AudioBuffer_onURLLoad,"openfl.media.Sound","AudioBuffer_onURLLoad",0x80e63186,"openfl.media.Sound.AudioBuffer_onURLLoad","openfl/media/Sound.hx",788,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_382_fromAudioBuffer,"openfl.media.Sound","fromAudioBuffer",0xa9f89285,"openfl.media.Sound.fromAudioBuffer","openfl/media/Sound.hx",382,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_403_fromFile,"openfl.media.Sound","fromFile",0x06bfbe8d,"openfl.media.Sound.fromFile","openfl/media/Sound.hx",403,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_573_loadFromFile,"openfl.media.Sound","loadFromFile",0xb0657a53,"openfl.media.Sound.loadFromFile","openfl/media/Sound.hx",573,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_571_loadFromFile,"openfl.media.Sound","loadFromFile",0xb0657a53,"openfl.media.Sound.loadFromFile","openfl/media/Sound.hx",571,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_596_loadFromFiles,"openfl.media.Sound","loadFromFiles",0xa8658ec0,"openfl.media.Sound.loadFromFiles","openfl/media/Sound.hx",596,0x46a01619)
HX_LOCAL_STACK_FRAME(_hx_pos_5a9f676c476e7e7b_594_loadFromFiles,"openfl.media.Sound","loadFromFiles",0xa8658ec0,"openfl.media.Sound.loadFromFiles","openfl/media/Sound.hx",594,0x46a01619)
namespace openfl{
namespace media{

void Sound_obj::__construct( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context){
            	HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_95_new)
HXLINE( 257)		this->_hx___alAudioContext = null();
HXLINE( 240)		this->_hx___urlLoading = false;
HXLINE( 294)		super::__construct(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 296)		this->bytesLoaded = 0;
HXLINE( 297)		this->bytesTotal = 0;
HXLINE( 298)		this->isBuffering = false;
HXLINE( 299)		this->url = null();
HXLINE( 301)		if (::hx::IsNotNull( stream )) {
HXLINE( 303)			this->load(stream,context);
            		}
HXLINE( 317)		bool _hx_tmp;
HXDLIN( 317)		if (::hx::IsNull( stream )) {
HXLINE( 317)			_hx_tmp = ::hx::IsNotNull( ::lime::media::AudioManager_obj::context );
            		}
            		else {
HXLINE( 317)			_hx_tmp = false;
            		}
HXDLIN( 317)		if (_hx_tmp) {
HXLINE( 319)			if ((::lime::media::AudioManager_obj::context->type == HX_("openal",35,5f,94,21))) {
HXLINE( 322)				this->_hx___alAudioContext = ::lime::media::AudioManager_obj::context->openal;
            			}
            		}
            	}

Dynamic Sound_obj::__CreateEmpty() { return new Sound_obj; }

void *Sound_obj::_hx_vtable = 0;

Dynamic Sound_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sound_obj > _hx_result = new Sound_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Sound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x0ce018c7;
	}
}

void Sound_obj::close(){
            	HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_339_close)
HXDLIN( 339)		if (::hx::IsNotNull( this->_hx___buffer )) {
HXLINE( 341)			::openfl::media::SoundMixer_obj::_hx___unregisterSoundChannelByBuffer(this->_hx___buffer);
HXLINE( 342)			this->_hx___buffer->dispose();
HXLINE( 343)			this->_hx___buffer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

void Sound_obj::load( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::media::Sound,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_512_load)
HXLINE( 512)			_gthis->AudioBuffer_onURLLoad(null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_490_load)
HXDLIN( 490)		 ::openfl::media::Sound _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 491)		this->url = stream->url;
HXLINE( 492)		this->_hx___urlLoading = true;
HXLINE( 510)		::lime::media::AudioBuffer_obj::loadFromFile(this->url)->onComplete(this->AudioBuffer_onURLLoad_dyn())->onError( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,load,(void))

void Sound_obj::loadCompressedDataFromByteArray( ::openfl::utils::ByteArrayData bytes,int bytesLength){
            	HX_GC_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_528_loadCompressedDataFromByteArray)
HXLINE( 529)		bool _hx_tmp;
HXDLIN( 529)		if (::hx::IsNotNull( bytes )) {
HXLINE( 529)			_hx_tmp = (bytesLength <= 0);
            		}
            		else {
HXLINE( 529)			_hx_tmp = true;
            		}
HXDLIN( 529)		if (_hx_tmp) {
HXLINE( 531)			this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null()));
HXLINE( 532)			return;
            		}
HXLINE( 535)		bool _hx_tmp1;
HXDLIN( 535)		int a = bytes->position;
HXDLIN( 535)		bool aNeg = (a < 0);
HXDLIN( 535)		bool bNeg = (0 < 0);
HXDLIN( 535)		bool _hx_tmp2;
HXDLIN( 535)		if ((aNeg != bNeg)) {
HXLINE( 535)			_hx_tmp2 = aNeg;
            		}
            		else {
HXLINE( 535)			_hx_tmp2 = (a > 0);
            		}
HXDLIN( 535)		if (!(_hx_tmp2)) {
HXLINE( 535)			int a1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes);
HXDLIN( 535)			bool aNeg1 = (a1 < 0);
HXDLIN( 535)			bool bNeg1 = (bytesLength < 0);
HXDLIN( 535)			if ((aNeg1 != bNeg1)) {
HXLINE( 535)				_hx_tmp1 = aNeg1;
            			}
            			else {
HXLINE( 535)				_hx_tmp1 = (a1 > bytesLength);
            			}
            		}
            		else {
HXLINE( 535)			_hx_tmp1 = true;
            		}
HXDLIN( 535)		if (_hx_tmp1) {
HXLINE( 537)			 ::openfl::utils::ByteArrayData copy =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,bytesLength);
HXLINE( 538)			copy->writeBytes(bytes,bytes->position,bytesLength);
HXLINE( 539)			bytes = copy;
            		}
HXLINE( 543)		this->_hx___buffer = ::lime::media::AudioBuffer_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes));
HXLINE( 545)		if (::hx::IsNull( this->_hx___buffer )) {
HXLINE( 547)			this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null()));
            		}
            		else {
HXLINE( 551)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,loadCompressedDataFromByteArray,(void))

void Sound_obj::loadPCMFromByteArray( ::openfl::utils::ByteArrayData bytes,int samples,::String __o_format,::hx::Null< bool >  __o_stereo,::hx::Null< Float >  __o_sampleRate){
            		::String format = __o_format;
            		if (::hx::IsNull(__o_format)) format = HX_("float",9c,c5,96,02);
            		bool stereo = __o_stereo.Default(true);
            		Float sampleRate = __o_sampleRate.Default(44100);
            	HX_GC_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_623_loadPCMFromByteArray)
HXLINE( 624)		if (::hx::IsNull( bytes )) {
HXLINE( 626)			this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null()));
HXLINE( 627)			return;
            		}
HXLINE( 630)		int bitsPerSample;
HXDLIN( 630)		if ((format == HX_("float",9c,c5,96,02))) {
HXLINE( 630)			bitsPerSample = 32;
            		}
            		else {
HXLINE( 630)			bitsPerSample = 16;
            		}
HXLINE( 631)		int channels;
HXDLIN( 631)		if (stereo) {
HXLINE( 631)			channels = 2;
            		}
            		else {
HXLINE( 631)			channels = 1;
            		}
HXLINE( 632)		int bytesLength = ::Std_obj::_hx_int((( (Float)((samples * channels)) ) * (( (Float)(bitsPerSample) ) / ( (Float)(8) ))));
HXLINE( 634)		bool _hx_tmp;
HXDLIN( 634)		int a = bytes->position;
HXDLIN( 634)		bool aNeg = (a < 0);
HXDLIN( 634)		bool bNeg = (0 < 0);
HXDLIN( 634)		bool _hx_tmp1;
HXDLIN( 634)		if ((aNeg != bNeg)) {
HXLINE( 634)			_hx_tmp1 = aNeg;
            		}
            		else {
HXLINE( 634)			_hx_tmp1 = (a > 0);
            		}
HXDLIN( 634)		if (!(_hx_tmp1)) {
HXLINE( 634)			int a1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes);
HXDLIN( 634)			bool aNeg1 = (a1 < 0);
HXDLIN( 634)			bool bNeg1 = (bytesLength < 0);
HXDLIN( 634)			if ((aNeg1 != bNeg1)) {
HXLINE( 634)				_hx_tmp = aNeg1;
            			}
            			else {
HXLINE( 634)				_hx_tmp = (a1 > bytesLength);
            			}
            		}
            		else {
HXLINE( 634)			_hx_tmp = true;
            		}
HXDLIN( 634)		if (_hx_tmp) {
HXLINE( 636)			 ::openfl::utils::ByteArrayData copy =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,bytesLength);
HXLINE( 637)			copy->writeBytes(bytes,bytes->position,bytesLength);
HXLINE( 638)			bytes = copy;
            		}
HXLINE( 642)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 643)		audioBuffer->bitsPerSample = bitsPerSample;
HXLINE( 644)		audioBuffer->channels = channels;
HXLINE( 645)		 ::Dynamic elements = null();
HXDLIN( 645)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(bytes);
HXDLIN( 645)		::cpp::VirtualArray array = null();
HXDLIN( 645)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 645)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 645)		 ::Dynamic len = null();
HXDLIN( 645)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 645)		if (::hx::IsNotNull( elements )) {
HXLINE( 645)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE( 645)			if (::hx::IsNotNull( array )) {
HXLINE( 645)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 645)				_this->byteOffset = 0;
HXDLIN( 645)				_this->length = array->get_length();
HXDLIN( 645)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 645)				_this->buffer = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 645)				_this->copyFromArray(array,null());
HXDLIN( 645)				this1 = _this;
            			}
            			else {
HXLINE( 645)				if (::hx::IsNotNull( vector )) {
HXLINE( 645)					 ::lime::utils::ArrayBufferView _this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 645)					::cpp::VirtualArray array1 = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 645)					_this1->byteOffset = 0;
HXDLIN( 645)					_this1->length = array1->get_length();
HXDLIN( 645)					_this1->byteLength = (_this1->length * _this1->bytesPerElement);
HXDLIN( 645)					_this1->buffer = ::haxe::io::Bytes_obj::alloc(_this1->byteLength);
HXDLIN( 645)					_this1->copyFromArray(array1,null());
HXDLIN( 645)					this1 = _this1;
            				}
            				else {
HXLINE( 645)					if (::hx::IsNotNull( view )) {
HXLINE( 645)						 ::lime::utils::ArrayBufferView _this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 645)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 645)						int srcLength = view->length;
HXDLIN( 645)						int srcByteOffset = view->byteOffset;
HXDLIN( 645)						int srcElementSize = view->bytesPerElement;
HXDLIN( 645)						int elementSize = _this2->bytesPerElement;
HXDLIN( 645)						if ((view->type == _this2->type)) {
HXLINE( 645)							int srcLength1 = srcData->length;
HXDLIN( 645)							int cloneLength = (srcLength1 - srcByteOffset);
HXDLIN( 645)							_this2->buffer = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 645)							_this2->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 645)							HX_STACK_DO_THROW(HX_("unimplemented",09,2f,74,b4));
            						}
HXDLIN( 645)						_this2->byteLength = (_this2->bytesPerElement * srcLength);
HXDLIN( 645)						_this2->byteOffset = 0;
HXDLIN( 645)						_this2->length = srcLength;
HXDLIN( 645)						this1 = _this2;
            					}
            					else {
HXLINE( 645)						if (::hx::IsNotNull( buffer )) {
HXLINE( 645)							 ::lime::utils::ArrayBufferView _this3 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 645)							int in_byteOffset = 0;
HXDLIN( 645)							if ((in_byteOffset < 0)) {
HXLINE( 645)								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            							}
HXDLIN( 645)							if ((::hx::Mod(in_byteOffset,_this3->bytesPerElement) != 0)) {
HXLINE( 645)								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            							}
HXDLIN( 645)							int bufferByteLength = buffer->length;
HXDLIN( 645)							int elementSize1 = _this3->bytesPerElement;
HXDLIN( 645)							int newByteLength = bufferByteLength;
HXDLIN( 645)							if (::hx::IsNull( len )) {
HXLINE( 645)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 645)								if ((::hx::Mod(bufferByteLength,_this3->bytesPerElement) != 0)) {
HXLINE( 645)									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            								}
HXDLIN( 645)								if ((newByteLength < 0)) {
HXLINE( 645)									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            								}
            							}
            							else {
HXLINE( 645)								newByteLength = (( (int)(len) ) * _this3->bytesPerElement);
HXDLIN( 645)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 645)								if ((newRange > bufferByteLength)) {
HXLINE( 645)									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            								}
            							}
HXDLIN( 645)							_this3->buffer = buffer;
HXDLIN( 645)							_this3->byteOffset = in_byteOffset;
HXDLIN( 645)							_this3->byteLength = newByteLength;
HXDLIN( 645)							_this3->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this3->bytesPerElement) )));
HXDLIN( 645)							this1 = _this3;
            						}
            						else {
HXLINE( 645)							HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 645)		audioBuffer->data = this1;
HXLINE( 646)		audioBuffer->sampleRate = ::Std_obj::_hx_int(sampleRate);
HXLINE( 648)		this->_hx___buffer = audioBuffer;
HXLINE( 650)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

 ::openfl::media::SoundChannel Sound_obj::play(::hx::Null< Float >  __o_startTime,::hx::Null< int >  __o_loops, ::openfl::media::SoundTransform sndTransform){
            		Float startTime = __o_startTime.Default(((Float)0.0));
            		int loops = __o_loops.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_675_play)
HXLINE( 677)		if ((::openfl::media::SoundMixer_obj::_hx___soundChannels->length >= 32)) {
HXLINE( 679)			return null();
            		}
HXLINE( 682)		if (::hx::IsNull( sndTransform )) {
HXLINE( 684)			sndTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            		}
            		else {
HXLINE( 688)			sndTransform = sndTransform->clone();
            		}
HXLINE( 691)		Float pan = (::openfl::media::SoundMixer_obj::_hx___soundTransform->pan + sndTransform->pan);
HXLINE( 693)		if ((pan > 1)) {
HXLINE( 693)			pan = ( (Float)(1) );
            		}
HXLINE( 694)		if ((pan < -1)) {
HXLINE( 694)			pan = ( (Float)(-1) );
            		}
HXLINE( 696)		Float volume = (::openfl::media::SoundMixer_obj::_hx___soundTransform->volume * sndTransform->volume);
HXLINE( 698)		 ::lime::media::AudioSource audioSource =  ::lime::media::AudioSource_obj::__alloc( HX_CTX ,this->_hx___buffer,null(),null(),null());
HXLINE( 699)		audioSource->offset = ::Std_obj::_hx_int(startTime);
HXLINE( 700)		if ((loops > 1)) {
HXLINE( 700)			audioSource->set_loops((loops - 1));
            		}
HXLINE( 702)		audioSource->set_gain(volume);
HXLINE( 704)		 ::lime::math::Vector4 position = audioSource->get_position();
HXLINE( 705)		position->x = pan;
HXLINE( 706)		position->z = (( (Float)(-1) ) * ::Math_obj::sqrt((( (Float)(1) ) - ::Math_obj::pow(pan,( (Float)(2) )))));
HXLINE( 707)		audioSource->set_position(position);
HXLINE( 709)		 ::lime::media::AudioSource soundChannel;
HXDLIN( 709)		if (this->_hx___urlLoading) {
HXLINE( 709)			soundChannel = null();
            		}
            		else {
HXLINE( 709)			soundChannel = audioSource;
            		}
HXDLIN( 709)		 ::openfl::media::SoundChannel soundChannel1 =  ::openfl::media::SoundChannel_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),soundChannel,sndTransform);
HXLINE( 710)		if (this->_hx___urlLoading) {
HXLINE( 712)			this->_hx___pendingAudioSource = audioSource;
HXLINE( 713)			this->_hx___pendingSoundChannel = soundChannel1;
            		}
            		else {
HXLINE( 715)			if (::hx::IsNull( this->_hx___buffer )) {
HXLINE( 724)				if (::hx::IsNotNull( this->_hx___alAudioContext )) {
HXLINE( 726)					soundChannel1->_hx___startSampleData();
            				}
            			}
            		}
HXLINE( 730)		return soundChannel1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

int Sound_obj::get_sampleRate(){
            	HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_746_get_sampleRate)
HXDLIN( 746)		return 44100;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_sampleRate,return )

 ::openfl::media::ID3Info Sound_obj::get_id3(){
            	HX_GC_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_753_get_id3)
HXDLIN( 753)		return  ::openfl::media::ID3Info_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

int Sound_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_757_get_length)
HXLINE( 759)		if (::hx::IsNotNull( this->_hx___buffer )) {
HXLINE( 764)			if (::hx::IsNotNull( this->_hx___buffer->data )) {
HXLINE( 766)				Float samples = ((( (Float)(this->_hx___buffer->data->length) ) * ((Float)8.0)) / ( (Float)((this->_hx___buffer->channels * this->_hx___buffer->bitsPerSample)) ));
HXLINE( 767)				return ::Std_obj::_hx_int(((samples / ( (Float)(this->_hx___buffer->sampleRate) )) * ( (Float)(1000) )));
            			}
            			else {
HXLINE( 769)				if (::hx::IsNotNull( this->_hx___buffer->_hx___srcVorbisFile )) {
HXLINE( 771)					::cpp::Int64 x = this->_hx___buffer->_hx___srcVorbisFile->pcmTotal(null());
HXDLIN( 771)					int _hx_tmp = _hx_int64_high(x);
HXDLIN( 771)					if ((_hx_tmp != (_hx_int64_low(x) >> 31))) {
HXLINE( 771)						HX_STACK_DO_THROW(HX_("Overflow",62,9f,ed,1a));
            					}
HXDLIN( 771)					int samples1 = _hx_int64_low(x);
HXLINE( 772)					return ::Std_obj::_hx_int(((( (Float)(samples1) ) / ( (Float)(this->_hx___buffer->sampleRate) )) * ( (Float)(1000) )));
            				}
            				else {
HXLINE( 776)					return 0;
            				}
            			}
            		}
HXLINE( 782)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length,return )

void Sound_obj::AudioBuffer_onURLLoad( ::lime::media::AudioBuffer buffer){
            	HX_GC_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_788_AudioBuffer_onURLLoad)
HXLINE( 789)		this->_hx___urlLoading = false;
HXLINE( 790)		if (::hx::IsNull( buffer )) {
HXLINE( 792)			this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null()));
            		}
            		else {
HXLINE( 796)			this->_hx___buffer = buffer;
HXLINE( 797)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
HXLINE( 798)			if (::hx::IsNotNull( this->_hx___pendingSoundChannel )) {
HXLINE( 800)				this->_hx___pendingAudioSource->buffer = this->_hx___buffer;
HXLINE( 803)				this->_hx___pendingAudioSource->init();
HXLINE( 804)				this->_hx___pendingSoundChannel->_hx___initAudioSource(this->_hx___pendingAudioSource);
            			}
            		}
HXLINE( 807)		this->_hx___pendingSoundChannel = null();
HXLINE( 808)		this->_hx___pendingAudioSource = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,AudioBuffer_onURLLoad,(void))

 ::openfl::media::Sound Sound_obj::fromAudioBuffer( ::lime::media::AudioBuffer buffer){
            	HX_GC_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_382_fromAudioBuffer)
HXLINE( 383)		 ::openfl::media::Sound sound =  ::openfl::media::Sound_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 384)		sound->_hx___buffer = buffer;
HXLINE( 385)		return sound;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,fromAudioBuffer,return )

 ::openfl::media::Sound Sound_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_403_fromFile)
HXLINE( 405)		 ::lime::media::AudioBuffer buffer = ::lime::media::AudioBuffer_obj::fromFile(path);
HXLINE( 406)		if (::hx::IsNull( buffer )) {
HXLINE( 408)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,(HX_("Error loading sound from file: ",2b,4a,f9,ef) + path)));
            		}
HXLINE( 410)		return ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,fromFile,return )

 ::lime::app::Future Sound_obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::media::AudioBuffer audioBuffer){
            			HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_573_loadFromFile)
HXLINE( 573)			return ::lime::app::Future_obj::withValue(::openfl::media::Sound_obj::fromAudioBuffer(audioBuffer));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_571_loadFromFile)
HXDLIN( 571)		return ::lime::media::AudioBuffer_obj::loadFromFile(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,loadFromFile,return )

 ::lime::app::Future Sound_obj::loadFromFiles(::Array< ::String > paths){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::media::AudioBuffer audioBuffer){
            			HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_596_loadFromFiles)
HXLINE( 596)			return ::lime::app::Future_obj::withValue(::openfl::media::Sound_obj::fromAudioBuffer(audioBuffer));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_5a9f676c476e7e7b_594_loadFromFiles)
HXDLIN( 594)		return ::lime::media::AudioBuffer_obj::loadFromFiles(paths)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,loadFromFiles,return )


::hx::ObjectPtr< Sound_obj > Sound_obj::__new( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context) {
	::hx::ObjectPtr< Sound_obj > __this = new Sound_obj();
	__this->__construct(stream,context);
	return __this;
}

::hx::ObjectPtr< Sound_obj > Sound_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context) {
	Sound_obj *__this = (Sound_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sound_obj), true, "openfl.media.Sound"));
	*(void **)__this = Sound_obj::_hx_vtable;
	__this->__construct(stream,context);
	return __this;
}

Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(_hx___urlLoading,"__urlLoading");
	HX_MARK_MEMBER_NAME(_hx___pendingSoundChannel,"__pendingSoundChannel");
	HX_MARK_MEMBER_NAME(_hx___pendingAudioSource,"__pendingAudioSource");
	HX_MARK_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_MARK_MEMBER_NAME(_hx___alAudioContext,"__alAudioContext");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(_hx___urlLoading,"__urlLoading");
	HX_VISIT_MEMBER_NAME(_hx___pendingSoundChannel,"__pendingSoundChannel");
	HX_VISIT_MEMBER_NAME(_hx___pendingAudioSource,"__pendingAudioSource");
	HX_VISIT_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(_hx___alAudioContext,"__alAudioContext");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Sound_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id3() ); }
		if (HX_FIELD_EQ(inName,"url") ) { return ::hx::Val( url ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return ::hx::Val( get_id3_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { return ::hx::Val( _hx___buffer ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"sampleRate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sampleRate() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return ::hx::Val( isBuffering ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__urlLoading") ) { return ::hx::Val( _hx___urlLoading ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_sampleRate") ) { return ::hx::Val( get_sampleRate_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__alAudioContext") ) { return ::hx::Val( _hx___alAudioContext ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__pendingAudioSource") ) { return ::hx::Val( _hx___pendingAudioSource ); }
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return ::hx::Val( loadPCMFromByteArray_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__pendingSoundChannel") ) { return ::hx::Val( _hx___pendingSoundChannel ); }
		if (HX_FIELD_EQ(inName,"AudioBuffer_onURLLoad") ) { return ::hx::Val( AudioBuffer_onURLLoad_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return ::hx::Val( loadCompressedDataFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromFiles") ) { outValue = loadFromFiles_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromAudioBuffer") ) { outValue = fromAudioBuffer_dyn(); return true; }
	}
	return false;
}

::hx::Val Sound_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { _hx___buffer=inValue.Cast<  ::lime::media::AudioBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__urlLoading") ) { _hx___urlLoading=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__alAudioContext") ) { _hx___alAudioContext=inValue.Cast<  ::lime::media::OpenALAudioContext >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__pendingAudioSource") ) { _hx___pendingAudioSource=inValue.Cast<  ::lime::media::AudioSource >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__pendingSoundChannel") ) { _hx___pendingSoundChannel=inValue.Cast<  ::openfl::media::SoundChannel >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	outFields->push(HX_("id3",f8,03,50,00));
	outFields->push(HX_("isBuffering",98,26,10,90));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("__urlLoading",ed,21,a9,01));
	outFields->push(HX_("__pendingSoundChannel",8b,0f,ec,73));
	outFields->push(HX_("__pendingAudioSource",5a,be,00,89));
	outFields->push(HX_("__buffer",20,28,c4,78));
	outFields->push(HX_("sampleRate",2a,3c,4c,67));
	outFields->push(HX_("__alAudioContext",64,0c,26,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sound_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Sound_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsInt,(int)offsetof(Sound_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{::hx::fsBool,(int)offsetof(Sound_obj,isBuffering),HX_("isBuffering",98,26,10,90)},
	{::hx::fsString,(int)offsetof(Sound_obj,url),HX_("url",6f,2b,59,00)},
	{::hx::fsBool,(int)offsetof(Sound_obj,_hx___urlLoading),HX_("__urlLoading",ed,21,a9,01)},
	{::hx::fsObject /*  ::openfl::media::SoundChannel */ ,(int)offsetof(Sound_obj,_hx___pendingSoundChannel),HX_("__pendingSoundChannel",8b,0f,ec,73)},
	{::hx::fsObject /*  ::lime::media::AudioSource */ ,(int)offsetof(Sound_obj,_hx___pendingAudioSource),HX_("__pendingAudioSource",5a,be,00,89)},
	{::hx::fsObject /*  ::lime::media::AudioBuffer */ ,(int)offsetof(Sound_obj,_hx___buffer),HX_("__buffer",20,28,c4,78)},
	{::hx::fsObject /*  ::lime::media::OpenALAudioContext */ ,(int)offsetof(Sound_obj,_hx___alAudioContext),HX_("__alAudioContext",64,0c,26,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Sound_obj_sStaticStorageInfo = 0;
#endif

static ::String Sound_obj_sMemberFields[] = {
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesTotal",59,57,da,45),
	HX_("isBuffering",98,26,10,90),
	HX_("url",6f,2b,59,00),
	HX_("__urlLoading",ed,21,a9,01),
	HX_("__pendingSoundChannel",8b,0f,ec,73),
	HX_("__pendingAudioSource",5a,be,00,89),
	HX_("__buffer",20,28,c4,78),
	HX_("__alAudioContext",64,0c,26,52),
	HX_("close",b8,17,63,48),
	HX_("load",26,9a,b7,47),
	HX_("loadCompressedDataFromByteArray",d6,4f,5d,a0),
	HX_("loadPCMFromByteArray",73,51,e4,c4),
	HX_("play",f4,2d,5a,4a),
	HX_("get_sampleRate",73,c4,41,dd),
	HX_("get_id3",8f,cc,c4,26),
	HX_("get_length",af,04,8f,8f),
	HX_("AudioBuffer_onURLLoad",6d,fb,f7,c7),
	::String(null()) };

::hx::Class Sound_obj::__mClass;

static ::String Sound_obj_sStaticFields[] = {
	HX_("fromAudioBuffer",2c,65,e0,cd),
	HX_("fromFile",06,9d,87,a1),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("loadFromFiles",a7,99,87,37),
	::String(null())
};

void Sound_obj::__register()
{
	Sound_obj _hx_dummy;
	Sound_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.media.Sound",c7,8b,e2,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sound_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sound_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sound_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sound_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sound_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
