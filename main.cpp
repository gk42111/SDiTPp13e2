#include "Test.h"
#include <iostream>
#include <algorithm>
#include <time.h>
#include <Windows.h>
using namespace std;

int main() {
	Test test, test1, test2;
	clock_t start, stop, start1, stop1, start2, stop2;
	start = clock();
	test.sort_b();
	stop = clock();
	start1 = clock();
	test1.sort_wstawianie();
	stop1 = clock();
	start2 = clock();
	std::sort(test2.a.begin(), test2.a.end());
	stop2 = clock();
	double czas, czas1, czas2;
	czas = (stop - start); czas1 = (stop1 - start1); czas2 = (stop2 - start2);
	cout << "babelkowo: " << czas << " wstawianie: " << czas1 << " wbud.: " << czas2 << endl;
	system("pause");
	return 0;
}