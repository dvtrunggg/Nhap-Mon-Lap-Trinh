#include <iostream>
using namespace std;

//--------Thi chi viet phan nay ----------------------------
void in_vitri(int a[], int N)
{
	if (N <= 1)
		return;
		
	// Xet vi tri bien trai (vi tri 0)
	if (a[0] < a[1])
		cout << 0 << " ";
		
	// Xet cac vi tri o giua (vi tri 1 den N - 2)
	for (int i = 1; i <= N - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << i << " ";
	
	// Xet vi tri bien phai (vi tri N - 1)
	if (a[N - 1] < a[N -2])
		 cout << N - 1 << " ";
}
//----------------------------------------------------------------------

int main()
{
	int a[] = {4, 5, -1, 3, 2, 7, -9};
	int N = 7;
	
	in_vitri(a, N);
}
