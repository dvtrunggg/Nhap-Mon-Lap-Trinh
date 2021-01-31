#include "mangDaThuc.h"

int main()
{
	mangDaThuc a;
	inputArray(a);
	cout << "-----------------------------------------------\n";
	outputArray(a);
	cout << "-----------------------------------------------\n";

	float x, max;
	cout << "\tDa thuc co dang: a0 + a1X + a2X^2 + .... +anX^n" << endl;
	cout << "Nhap gia tri cua x: ", cin >> x;
	cout << "Da thuc co gia tri lon nhat voi x = " << x << ": \n";
	Output(Maxx(a, x, max));
	cout << "\nGia tri cua da thuc nay la: " << max;


	cout << "\n--------------Tinh tong 2 da thuc p va q: -----------------" << endl;
	daThuc p, q;
	Input(p);
	Input(q);
	cout << "da thuc p: ";
	Output(p);
	cout << "\nda thuc q: ";
	Output(q);
	cout << "\nTong cua da thuc p va q: ";
	Output(tong(p, q));
	return 0;
}