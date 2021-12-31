#pragma once

#ifndef _JOYLIB_API
#define _JOYLIB_API

#include <iostream>

#define LIBRARY_API __declspec(dllexport)

LIBRARY_API int lib_main();

#endif // _JOYLIB_API