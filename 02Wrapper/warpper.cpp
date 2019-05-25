#include "warpper.h"

#include <memory>

// ---------------------------------------
// Warper for C#

namespace SampleCppWrapper
{
	std::unique_ptr<classTemplate> g_classTemplate = std::make_unique<classTemplate>();

	int __stdcall classTemplate_geta()
	{
		return g_classTemplate->geta();
	}

	double __stdcall classTemplate_getb()
	{
		return g_classTemplate->getb();
	}

	bool __stdcall classTemplate_getArray(int* & _op, int & l)
	{
		std::vector<int> tmp = g_classTemplate->getArray();
		l = tmp.size();
		
		_op = new int[l];
		for (size_t i=0; i<l; ++i)
		{
			_op[i] = tmp[i];
		}

		return true;
	}

	bool __stdcall classTemplate_deleteArray(int * _op)
	{
		delete[] _op;
		return true;
	}

	void __stdcall classTemplate_setArray(int _pD[], const int l)
	{
		g_classTemplate->setArray(_pD, l);
	}

	bool __stdcall classTemplate_seta(int _a)
	{
		g_classTemplate->seta(_a);
		return true;
	}

	bool __stdcall classTemplate_setb(double _b)
	{
		g_classTemplate->seta(_b);
		return true;
	}


}