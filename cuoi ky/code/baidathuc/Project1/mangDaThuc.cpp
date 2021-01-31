#include"mangDaThuc.h"

//hàm input 1 mảng đa thức
void inputArray(mangDaThuc& daThuc) {
	cout << "Nhap so luong da thuc: ", cin >> daThuc.size;
	for (int i = 0; i < daThuc.size; i++)
	{
		Input(daThuc.array[i]);
	}
}
void outputArray(mangDaThuc daThuc)
{
	for (int i = 0; i < daThuc.size; i++)
	{
		cout << "da thuc " << i << ": ";
		Output(daThuc.array[i]);
		cout << endl;
	}
}


//x là giá trị của truyền vào X trong đa thức
daThuc Maxx(mangDaThuc daThuc, float x, float& max)
{
	max = giaTriDaThuc(daThuc.array[0], x);
	for (int i = 1; i < daThuc.size; i++)
	{
		if (max < giaTriDaThuc(daThuc.array[i], x))
			max = giaTriDaThuc(daThuc.array[i], x);
	}


	for (int i = 0; i < daThuc.size; i++)
	{
		if (max == giaTriDaThuc(daThuc.array[i], x))
			return daThuc.array[i];
	}

}

