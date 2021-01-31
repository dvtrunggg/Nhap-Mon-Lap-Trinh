#pragma once
#include <iostream>
using namespace std;
#define MAX 100

//temp means time in french:)
struct Time {
	float year, month, day, hour, minutes, second;
};


void inputTime(Time&);
void outputTime(Time);

//hàm chuyển đổi year, month, day, hour, minutes, second ---->second để so sánh
float convertSecond(Time);



