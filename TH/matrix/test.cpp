#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iostream>
#define MAX 100
using namespace std;
void XuatMang(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n\n");
	}
}


bool KiemTraCoPhaiPhanTuHoangHau(int a[][MAX], int vtdong, int vtcot, int dong, int cot)
{
	int x = a[vtdong][vtcot];

	// kiểm tra dòng
	for (int i = 0; i < cot; i++)
	{
		if (a[vtdong][i] > x)
		{
			return false;
		}
	}
	// kiểm tra cột
	for (int j = 0; j < dong; j++)
	{
		if (a[j][vtcot] > x)
		{
			return false;
		}
	}
	//ktra duong cheo thu nhat
	int vtdong1 = vtdong + 1;
	int vtcot1 = vtcot + 1;
	while (vtcot1 + 1 < cot && vtdong1 < vtdong)
	{
		if (a[vtcot1][vtdong1] > x)
			return false;
		// tăng phải
		vtcot1++;
		vtdong1++;
	}
	vtdong1 = vtdong - 1;
	vtcot1 = vtcot - 1;
	while (vtcot1 - 1 >= 0 && vtdong1 >= 0)
	{
		if (a[vtcot1][vtdong1] > x)
			return false;
		//giảm qua trái
		vtcot1--;
		vtdong1--;
	}
	// duong cheo thu 2
	vtdong1 = vtdong + 1;
	vtcot1 = vtcot - 1;
	while (vtcot1 - 1 >= 0 && vtdong1 < dong)
	{
		if (a[vtcot1][vtdong1] > x)
			return false;
		// tăng trái
		vtdong1++;
		vtcot1--;
	}
	vtdong1 = vtdong - 1;
	vtcot1 = vtcot + 1;

	while (vtdong1 - 1 >= 0 && vtcot1 < cot)
	{
		if (a[vtcot1][vtdong1] > x)
			return false;
		// giảm phải
		vtdong1--;
		vtcot1++;
	}
	return true;
}



int DemSoLuongPhanTuHoangHau(int a[][MAX], int dong, int cot)
{
	int dem = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (KiemTraCoPhaiPhanTuHoangHau(a, i, j, dong, cot) == true)
			{
				cout << "a[" << i << "][" << j << "] la diem queen" << endl;
				dem++;
			}
		}
	}
	return dem;
}

int main()
{
	int dong = 5, cot = 4;
	int a[][MAX] = {{100, 10, 10, 11}, {7, -3, 1, 70}, {7, 8, -3, -300}, {7, 3, 10, -7}, {7, -5, -4, 9}};

	//NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);

	// int dem = DemSoLuongPhanTuHoangHau(a, dong, cot);
	// printf("\nSo luong phan tu hoang hau = %d", dem);
	//getch();

	cout << KiemTraCoPhaiPhanTuHoangHau(a, 1, 3, dong, cot);
	return 0;
}