#pragma once
#include <iostream>
#include<fstream>
using namespace std;
#define MAX 100


//input matrix vuông từ bàn phím
void inputMatrix(int a[][MAX], int& N);

//input matrix = file txt (với dòng đầu là ma trận cấp N*N, các dòng tiếp là ma trận)
void readFile(int a[][MAX], int& N, ifstream& file);

//hàm xuất matrix vuông
void outputMatrix(int a[][MAX], int N);

//check xem ma trận này có phải là magic square hay ko
bool isMagicSquare(int a[][MAX], int rows, int cols);

//hàm xoay matrix 90 độ theo ngước chiều kim đồng hồ
void Xoay90(int A[][MAX], int N);
void XoayMaTran(int A[][MAX], int N);

bool isMaxRow(int a[][MAX], int rows, int cols, int i_row, int i_col);
bool isMinCol(int a[][MAX], int rows, int cols, int i_row, int i_col);
void diemYenNgua2(int a[][MAX], int rows, int cols);