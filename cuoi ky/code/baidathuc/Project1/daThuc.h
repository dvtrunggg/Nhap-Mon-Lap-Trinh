#pragma once
#include <iostream>
#include<math.h>
using namespace std;
#define MAX 100

struct daThuc
{
	float heSo[MAX];  //mảng các hệ số , heSo[i] la he so ung voi x^i
	int bacCaoNhat;  //bậc cao nhất của đa thức
};


//hàm input 1 đa thức
void Input(daThuc& );

//hàm output 1 đa thức
void Output(daThuc );


//tính giá trị đa thức với x là một số thực
float giaTriDaThuc(daThuc t, float x);

//tính tổng 2 đa thức
daThuc tong(daThuc p, daThuc q);

