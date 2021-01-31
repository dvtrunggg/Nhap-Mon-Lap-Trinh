#include"daThuc.h"

////hàm input 1 đa thức
void Input(daThuc& t)
{
	cout << "Nhap so bac cao nhat cua da thuc: ", cin >> t.bacCaoNhat;
	for (int i = 0; i <= t.bacCaoNhat; i++)
	{
		cout << "he so a" << i << " : ", cin >> t.heSo[i];
	}
}

//xuất ra theo định dạng a0 + a1X + a2X^2 + .... +anX^n.
void Output(daThuc t)
{
	for (int i = 0; i <= t.bacCaoNhat; i++)
	{
		cout << t.heSo[i] << "X^" << i;
		if (i == t.bacCaoNhat)  // khi duyệt tới phần tử cuối thì break để ko xuất ra dấu +
			break;
		cout << " + ";
	}
}

//x là giá trị của truyền vào X trong đa thức
float giaTriDaThuc(daThuc t, float x)
{
	float sum = t.heSo[0];   //vì a0X^0 = a0 nên gán luôn vào sum
	for (int i = 1; i <= t.bacCaoNhat; i++)
	{
		sum += t.heSo[i] * pow(x, i);    //tính giá trị của a0 + a1X + a2X^2 + .... +anX^n.
	}
	return sum;
}

//tính tổng đa thức
daThuc tong(daThuc p, daThuc q)
{
	daThuc r;
	// điền bậc và hệ số cho p và q
	int m = (p.bacCaoNhat >= q.bacCaoNhat ? p.bacCaoNhat : q.bacCaoNhat); // m là bậc lớn nhất của p và q
	for (int i = 0; i <= m; i++)
	{
		float u = (i <= p.bacCaoNhat ? p.heSo[i] : 0);
		float v = (i <= q.bacCaoNhat ? q.heSo[i] : 0);
		r.heSo[i] = u + v;
	}

	//Bậc của r là so mũ ứng với hệ số khác không lớn nhất
	while (r.heSo[m] == 0)
		m--;
	r.bacCaoNhat = m;

	return r;
}
