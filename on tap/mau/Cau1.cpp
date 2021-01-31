#include <iostream>
using namespace std;

//--------Thi chi viet phan nay ----------------------------
// Kiem tra n co la so nguyen to
bool la_nguyento(int n)
{
	if (n <= 1)
		return false;
		
	for (int i = 2; i < n; i++)
		if (n % i == 0)	// n chia het cho i
			return false;
	return true;
}

void in_nguyento(int N)
{
	bool found = false;
	
	for (int i = 2; i <= N; i++)
		for (int j = i; j <= N; j++)
			if (i + j == N && la_nguyento(i) && la_nguyento(j))
			{
				cout << "(" << i << ", " << j << ") ";
				found = true;
			}
			
	if (!found)
		cout << "Khong tim thay";
}
//----------------------------------------------------------------------

int main()
{
	// in_nguyento(16);
	in_nguyento(11);
}
