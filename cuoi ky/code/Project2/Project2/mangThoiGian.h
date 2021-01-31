#pragma once
#include"thoiGian.h"


struct arrayTime {
	Time arrTime[MAX];
	int size;
};

//hàm nhập mảng cấu trúc thời gian
void inputArrayTime(arrayTime&);

//hàm xuất mảng cấu trúc thời gian
void outputArrayTime(arrayTime);

void Swap(Time&, Time&);

//hàm sắp xếp theo thứ tự tăng dần
void selectionSort(arrayTime&);
