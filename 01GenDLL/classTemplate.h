#pragma once
#pragma warning(disable:4251)
#pragma warning(disable:4273)

#include <vector>

#ifdef GENE_DLL
#   define EXPORT_TO_DLL   __declspec(dllexport)
#else
#   define EXPORT_TO_DLL   __declspec(dllimport)
#endif  


struct image
{
	std::vector<double> pd;
	int size;
};


class EXPORT_TO_DLL classTemplate final
{
public:
	classTemplate();
	classTemplate(std::vector<int> _vec);
	~classTemplate();

	int geta();
	double getb();
	std::vector<int> getArray();

	image getImage();


	void setArray(int * _p, size_t l);
	void seta(int _a);
	void setb(double _b);
	void setImage(image img);

private:
	int a;
	double b;
	std::vector<int> m_vec;

	image m_img;
};

