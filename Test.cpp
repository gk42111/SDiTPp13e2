#include "Test.h"
#include <cstdlib>
using namespace std;
Test::Test()
{
	for (int i = 0; i < 1000; i++) {
		a.push_back(std::rand());
	}
}

void Test::sort_b()
{
	int p;
	int pmin = 0;
	int pmax = a.size() - 1;
	do
	{
		p = -1;
		for (int i = pmin; i < pmax; i++)
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				if (p < 0) pmin = i;
				p = i;
			}
		if (pmin) pmin--;
		pmax = p;
	} while (p >= 0);

}

void Test::sort_wstawianie()
{
	int pom, j;
	for (int i = 1; i < a.size(); i++)
	{
		pom = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > pom)
		{
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = pom;
	}
}
