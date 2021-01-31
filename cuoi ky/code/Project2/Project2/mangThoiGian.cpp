#include "mangThoiGian.h"


//hàm nhập mảng cấu trúc thời gian
void inputArrayTime(arrayTime& a)
{
	cout << "Nhap so luong thoi gian: ", cin >> a.size;
	for (int i = 0; i < a.size; i++)
	{
		inputTime(a.arrTime[i]);
		cout << "\n----------------------------------------" << endl;
	}
}

//hàm xuất mảng cấu trúc thời gian
void outputArrayTime(arrayTime a)
{
	cout << "Mang thoi gian (day/month/year	hour:minutes:second):" << endl;
	for (int i = 0; i < a.size; i++)
	{
		outputTime(a.arrTime[i]);
	}
}



//vì struct da thức có cấu trúc là hệ số (float), bậc (int) nên không cần phải định nghĩa operator =
//bien dich sẽ tự hiểu gán float với float, int với int
void Swap(Time& a, Time& b)
{
	Time temp = a;
	a = b;
	b = temp;
}

//hàm sắp xếp thep thứ tự tăng dần
void selectionSort(arrayTime& a)
{
	int i, j, min, n = a.size;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (convertSecond(a.arrTime[j]) < convertSecond(a.arrTime[min]))
				min = j;
			Swap(a.arrTime[min], a.arrTime[i]);
		}
	}
}