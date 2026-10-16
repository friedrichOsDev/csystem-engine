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

#ifdef CS_ENABLE_ASSERTS
	#define CS_ASSERT(x, ...) { if(!(x)) { CS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define CS_CORE_ASSERT(x, ...) { if(!(x)) { CS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define CS_ASSERT(x, ...)
	#define CS_CORE_ASSERT(x, ...)
#endif // CS_ENABLE_ASSERTS

#define BIT(x) (1 << x)