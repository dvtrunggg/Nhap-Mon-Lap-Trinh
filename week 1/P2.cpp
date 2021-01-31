//    Hoán đổi giá trị của ba số nguyên dương a, b và c mà không dùng thêm biến tạm.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap a: ", cin >> a;
    cout << "Nhap b: ", cin >> b;
    cout << "Nhap c: ", cin >> c;

    //a = 1 b = 2 c = 3
    a = (a + b + c); //atemp = 1 + 2 + 3 = 6
    b = a - b - c;   // b' = 6 - 2 - 3
    c = a - b - c;   //c' = 6 - 1 - 3
    a = a - b - c;   // a' = 6 - 1 - 3

    cout << "Da Swap: " << endl;
    cout << "a = " << a << endl<< "b = " << b << endl<< "c = " << c << endl;
    return 0;
}