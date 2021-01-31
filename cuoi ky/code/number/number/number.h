#pragma once
#include<iostream>
#include<fstream>
#include <iomanip>
using namespace std;

//hàm đọc file
void readFile(ifstream& fileIn, int a[], int& n);

//in ra màn hình
void Print(int a[], int n);

//tính trung bình cộng
float trungBinhCong(int a[], int n);

//ghi file theo định dạng
void writeFile(ofstream& fileOut, int a[], int n);
