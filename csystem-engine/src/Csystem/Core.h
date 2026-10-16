#pragma once

#ifdef CS_PLATFORM_WINDOWS
	#ifdef CS_BUILD_DLL
		#define CSYSTEM_API __declspec(dllexport)
	#else
		#define CSYSTEM_API __declspec(dllimport)
	#endif // CS_BUILD_DLL
#else
	#error Csystem Engine only supports Windows!
#endif // CS_PLATFORM_WINDOWS

#define BIT(x) (1 << x)