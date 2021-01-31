//Nhập vào số nguyên dương n và số thực x. Tính (x^2 + 1)^n. (sử dụng hàm thư viện)

#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n;
    float x;
    cout << "(x^2 + 1)^n" << endl;
    cout << "Nhap x: ", cin >> x;
    cout << "Nhap n: ", cin >> n;
    cout << "(x^2 + 1)^n = " << pow((x * x + 1), n);
    return 0;
}