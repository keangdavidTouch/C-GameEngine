#pragma once

#include "targetver.h"

#include <stdio.h>
#include <iostream> // std::cout
#include <sstream> // stringstream
#include <tchar.h>
#include <memory> // smart pointers
#include <vector>


#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#pragma warning(push)
#pragma warning (disable:4201)
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/matrix_decompose.hpp>
#pragma warning(pop)

//#include "Log.h" // Various logging functions

template<class T>
inline void SafeDelete(T &pObjectToDelete)
{
	if (pObjectToDelete != nullptr)
    {
		delete(pObjectToDelete);
		pObjectToDelete = nullptr;
	}
}