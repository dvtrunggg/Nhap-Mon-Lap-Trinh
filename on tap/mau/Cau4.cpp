#include <iostream>
using namespace std;

//--------Thi chi viet phan nay ----------------------------
struct DaThuc
{
	int n;	// Bac cua da thuc
	double a[100];	// Cac he so cua da thuc, so luong phan tu la n + 1, a[i] la he so ung voi x^i
	
};

DaThuc tong(DaThuc p, DaThuc q)
{
	DaThuc r;
	
	// Dien bac va he so cho r tu p, q
	int m = (p.n >= q.n ? p.n : q.n);	// m la bac lon nhat cua p, q
	for (int i = 0; i <= m; i++)
	{
		double u = (i <= p.n ? p.a[i] : 0);
		double v = (i <= q.n ? q.a[i] : 0);
		r.a[i] = u + v;
	}
	
	// Bac cua r la so mu ung voi he so khac khong lon nhat
	while (r.a[m] == 0)
		m--;
	r.n = m;
	
	return r;
}

//----------------------------------------------------------------------

// Xuat da thuc (thi khong viet ham nay)
void XuatDaThuc(DaThuc p)
{
	cout << p.a[0];
	for (int i = 1; i <= p.n; i++)
		if (p.a[i] != 0)
			cout << " + " << p.a[i] << "x^" << i;
}

int main()
{
	DaThuc p = {3, {10, 0, 1, -1}};
	DaThuc q = {6, {10, 1, -1, 1, 0, 0, 2}};
	DaThuc r = tong(p, q);
	XuatDaThuc(r);	
}
