#pragma once

#ifdef BL_PLATFORM_WINDOWS
	#ifdef BL_BUILD_DLL
		#define BLOO_API __declspec(dllexport)
	#else
		#define BLOO_API __declspec(dllimport)
	#endif
#else
	#error Only Supports Windows
#endif