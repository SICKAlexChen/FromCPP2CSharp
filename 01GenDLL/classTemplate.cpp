#include "classTemplate.h"

// ---------------------------------------
// Implementation of classTemplate

classTemplate::classTemplate()
{
	m_vec = { 7, 8, 9, 4, 5, 6 };
	m_img.pd = { 7, 8, 45, 9, 4, 5, 6 };
	m_img.size = 20;
}

classTemplate::classTemplate(std::vector<int> _vec)
	: a(10), b(1.5), m_vec(_vec)
{
	m_vec = { 7, 8, 9, 4, 5, 6 };
}

classTemplate::~classTemplate()
{
}

int classTemplate::geta()
{
	return a;
}

double classTemplate::getb()
{
	return b;
}

std::vector<int> classTemplate::getArray()
{
	printf("getArray\n");

	return m_vec;
}

image classTemplate::getImage()
{
	printf("getImage\n");

	return m_img;
}

void classTemplate::setArray(int * _p, size_t l)
{
	m_vec = std::vector<int>();
	for (size_t i=0; i<l; ++i)
	{
		m_vec.push_back(_p[i]);
		printf("push_back(%d)\n", _p[i]);
	}
}

void classTemplate::seta(int _a)
{
	a = _a;
}

void classTemplate::setb(double _b)
{
	b = _b;
}

void classTemplate::setImage(image img)
{
	m_img = img;
}






