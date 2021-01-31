#include "mangThoiGian.h"
int main()
{
	arrayTime t;
	inputArrayTime(t);
	outputArrayTime(t);
	cout << "Sap xep cac thoi gian theo thu tu tang dan:" << endl;
	selectionSort(t);
	outputArrayTime(t);
	return 0;
}