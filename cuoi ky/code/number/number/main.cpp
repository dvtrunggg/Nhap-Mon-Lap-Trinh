#include"number.h"

int main()
{
	int a[100], n;
	ifstream fileIn;
	fileIn.open("input.txt", ios_base::in);
	readFile(fileIn, a, n);
	fileIn.close();
	Print(a, n);
	cout << "\nTrung binh cong cac so nguyen duong cua mang: "<< setprecision(3)<<trungBinhCong(a, n);

	ofstream fileOut;
	fileOut.open("output.json", ios_base::out);
	writeFile(fileOut, a, n);
	fileOut.close();
	return 0;
}