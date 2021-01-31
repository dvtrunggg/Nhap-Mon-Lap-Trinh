#pragma once
#include"daThuc.h"


//mảng các đa thức
struct mangDaThuc {
	daThuc array[MAX];
	int size;
};

//hàm input 1 mảng đa thức
void inputArray(mangDaThuc&);

//hàm output 1 mảng đa thức
void outputArray(mangDaThuc);

//tìm đa thức có giá trị max trong mảng đa thức
daThuc Maxx(mangDaThuc daThuc, float x, float& max);
