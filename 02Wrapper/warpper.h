#pragma once

#include "classTemplate.h"

// ---------------------------------------
// Warper for C#

namespace SampleCppWrapper
{
	extern "C" __declspec(dllexport) int __stdcall classTemplate_geta();

	extern "C" __declspec(dllexport) double __stdcall classTemplate_getb();

	extern "C" __declspec(dllexport) bool __stdcall classTemplate_getArray(int* & _op, int & l);

	extern "C" __declspec(dllexport) bool __stdcall classTemplate_deleteArray(int * _op);

	extern "C" __declspec(dllexport) void __stdcall classTemplate_setArray(int _pD[], const int l);

	extern "C" __declspec(dllexport) bool __stdcall classTemplate_seta(int _a);

	extern "C" __declspec(dllexport) bool __stdcall classTemplate_setb(double _b);

}