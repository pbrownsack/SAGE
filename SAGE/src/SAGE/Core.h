#pragma once

#ifdef SG_PLATFORM_WINDOWS
	#ifdef SG_BUILD_DLL
		#define SAGE_API __declspec(dllexport)
	#else
		#define SAGE_API __declspec(dllimport)
	#endif
#endif