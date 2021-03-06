/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.BadParcelableException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_BADPARCELABLEEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_OS_BADPARCELABLEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace android { namespace util { class AndroidRuntimeException; } } }


#include <android/util/AndroidRuntimeException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace os {

	class BadParcelableException;
	class BadParcelableException
		: public object<BadParcelableException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit BadParcelableException(jobject jobj)
		: object<BadParcelableException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<android::util::AndroidRuntimeException>() const;


		BadParcelableException(local_ref< java::lang::String > const&);
		BadParcelableException(local_ref< java::lang::Exception > const&);
	}; //class BadParcelableException

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_BADPARCELABLEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_BADPARCELABLEEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_OS_BADPARCELABLEEXCEPTION_HPP_IMPL

namespace j2cpp {



android::os::BadParcelableException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

android::os::BadParcelableException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

android::os::BadParcelableException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::os::BadParcelableException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::os::BadParcelableException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::os::BadParcelableException::operator local_ref<android::util::AndroidRuntimeException>() const
{
	return local_ref<android::util::AndroidRuntimeException>(get_jobject());
}


android::os::BadParcelableException::BadParcelableException(local_ref< java::lang::String > const &a0)
: object<android::os::BadParcelableException>(
	call_new_object<
		android::os::BadParcelableException::J2CPP_CLASS_NAME,
		android::os::BadParcelableException::J2CPP_METHOD_NAME(0),
		android::os::BadParcelableException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::os::BadParcelableException::BadParcelableException(local_ref< java::lang::Exception > const &a0)
: object<android::os::BadParcelableException>(
	call_new_object<
		android::os::BadParcelableException::J2CPP_CLASS_NAME,
		android::os::BadParcelableException::J2CPP_METHOD_NAME(1),
		android::os::BadParcelableException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::os::BadParcelableException,"android/os/BadParcelableException")
J2CPP_DEFINE_METHOD(android::os::BadParcelableException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::BadParcelableException,1,"<init>","(Ljava/lang/Exception;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_BADPARCELABLEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
