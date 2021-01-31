#pragma once
#include <iostream>
#include <stdio.h>
#include<string>
#include <fstream>
using namespace std;
#define MAX 100

struct contact {
	char* hoTen;
	char* diaChi;
	char* soDienThoai;
};

// hàm đọc file
void readFile(ifstream& fileIn, contact& inf);

//hàm xuất ra màn hình
void Print(contact inf);
