#include"matrix.h"

int main()
{
	int a[MAX][MAX];
	int N;
	ifstream file;
	//inputMatrix(a,N);   

	file.open("data.txt", ios_base::in);
	readFile(a, N, file);
	file.close();
	
	cout << "------------------Ma tran--------------------" << endl;
	outputMatrix(a,N);
	if (isMagicSquare(a, N, N))
		cout << "Day la magic square --> xoay 180 do" << endl;
	else
		cout << "Day khong phai la magic square --> xoay 90 do" << endl;

	XoayMaTran(a, N);
	outputMatrix(a, N);


	cout << "\nCac diem yen ngua 2 tren ma tran da xoay: Lon nhat tren dong và nho nhat tren cot: " << endl;
	diemYenNgua2(a, N, N);
	return 0;
}