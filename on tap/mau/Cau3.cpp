#include <iostream>
using namespace std;

//--------Thi chi viet phan nay ----------------------------
// Kiem tra ma tran vuong A cap N co la ma phuong
bool LaMaPhuong(int A[100][100], int N)
{
	// Tinh tong tat ca cac phan tu cua A
	int sum = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			sum += A[i][j];
	int S = sum / N;	// tong chung
	
	// Kiem tra cac dong
	for (int i = 0; i < N; i++)
	{
		// Tinh tong dong i
		sum = 0;
		for (int j = 0; j < N; j++)
			sum += A[i][j];
		if (sum != S)
			return false;
	}
	
	// Kiem tra cac cot
	for (int j = 0; j < N; j++)
	{
		// Tinh tong cot j
		sum = 0;
		for (int i = 0; i < N; i++)
			sum += A[i][j];
		if (sum != S)
			return false;
	}
	
	// Kiem tra duong cheo chinh
	sum = 0;
	for (int i = 0; i < N; i++)
		sum += A[i][i];
	if (sum != S)
		return false;
		
	// Kiem tra duong cheo phu
	sum = 0;
	for (int i = 0; i < N; i++)
		sum += A[i][N - 1 -i];
	if (sum != S)
		return false;
}

// Xoay ma tran vuong A cap N 90 do nguoc chieu kim dong ho
void Xoay90(int A[100][100], int N)
{
	// Chep ma tran A vao B
	int B[100][100];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			B[i][j] = A[i][j];
			
	// Lay B xoay vao A
	// Ve hinh se thay: dong thanh cot, cot thanh dong nguoc
	for (int i = 0; i < N; i ++)
		for (int j = 0; j < N; j++)
			A[N - 1 - j][i] = B[i][j];
}

void XoayMaTran(int A[100][100], int N)
{
	if (LaMaPhuong(A, N))
	{
		Xoay90(A, N);
		Xoay90(A, N);
	}
	else
		Xoay90(A, N);
}
//----------------------------------------------------------------------

// Xuat ma tran (khong viet ham nay khi thi)
void XuatMaTran(int A[100][100], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}	
}

int main()
{
//	int A[100][100] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
//	int N = 3;
//	XoayMaTran(A, N);
//	XuatMaTran(A, N);	
	
	int A[100][100] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int N = 3;
	XoayMaTran(A, N);
	XuatMaTran(A, N);

//	int A[100][100] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//	int N = 4;
//	XoayMaTran(A, N);
//	XuatMaTran(A, N);
}
