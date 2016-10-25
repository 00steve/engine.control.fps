#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include "fps.h"

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif





#ifdef __cplusplus
extern "C"
{
#endif

    DLL_EXPORT EngineControl* Build();
#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
