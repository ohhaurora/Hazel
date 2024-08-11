#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILLD_DLL
		#define HAZEL_API __declspec(dllimport)
	#else
		#define HAZEL_API __declspec(dllexport)
	#endif // HZ_BUILLD_DLL
#else
	#error Hazel only support Windows!
#endif // HZ_PLATFORM_WINDOWS

