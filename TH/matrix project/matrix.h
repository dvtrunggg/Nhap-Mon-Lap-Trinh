#include <iostream>
using namespace std;
#define MAX 100
#define Max(a, b) ((a) > (b) ? (a) : (b))


//rows là số dòng, cols là số cột của ma trận

//câu 1 Nhập và xuất ma trận
void Input(int a[][MAX], int &rows, int &cols);
void Print(int a[][MAX], int rows, int cols);

//câu 2: tìm phần tử trong ma trận
int Search(int a[][MAX], int rows, int cols, int x);

//câu 3
//phần tử lớn nhất trong ma trận
int maxMatrix(int a[][MAX], int rows, int cols);
//phần tử lớn nhất tại biên ma trận
int maxBien(int a[][MAX], int rows, int cols);

//câu 4
//tổng phần tử trong ma trận
int sumMatrix(int a[][MAX], int rows, int cols);
//các phần tử có giá trị lớn hơn tổng phần tử trong ma trận
void greaterSum(int a[][MAX], int rows, int cols);

//câu 5: 
// tổng và max của mỗi dòng trong ma trận
void sum_maxEachRow(int a[][MAX], int rows, int cols);
// tổng và max của mỗi cột trong ma trận
void sum_maxEachCol(int a[][MAX], int rows, int cols);

//câu 6:
//hàm kiểm tra ma trận có phải là ma phương hay không
bool isMagicSquare(int a[][MAX], int rows, int cols);

//câu 7:
//chỉ ra điểm yên ngựa (nhỏ nhất trên dòng và lớn nhất trên cột)
// i_row và i_col là vị trí của phần tử min trên dòng (a[i_row][i_col])
bool isMinRow(int a[][MAX], int rows, int cols, int i_row, int i_col);

//i_row và i_col là vị trí của phần tử max trên cột (a[i_row][i_col])
bool isMaxCol(int a[][MAX], int rows, int cols, int i_row, int i_col);

//hàm in ra điểm yên ngựa
void diemYenNgua(int a[][MAX], int rows, int cols);

//câu 8:
//hàm check điểm a[i_row][i_col] có phải là điểm queen hay không
bool isQueen(int a[][MAX], int rows, int cols, int i_row, int i_col);
//hàm đếm số lượng điểm queen trong ma trận
int countQueen(int a[][MAX], int rows, int cols);

//câu 9
//hàm hoán vị 2 phần tử
void Swap(int &a, int &b);
//hàm sort theo chiều tăng dần
void interchangeSort(int a[], int n);

//hàm lấy các phần tử trên biên ma trận vào mảng 1 chiều
// mảng 1 chiều này là temp[], với kích thước là index
void getElement(int a[][MAX], int temp[], int rows, int cols, int &index);

//hàm gán các phần tử từ mảng temp[] sang biên của ma trận a
void setElement(int a[][MAX], int rows, int cols, int temp[]);

//sắp xếp các phần tử ở biên tăng dần theo chiều kim đồng hồ
void sortBien(int a[][MAX], int rows, int cols);



