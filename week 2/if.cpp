#include <iostream>
using namespace std;

int main()
{

    float a, b;

    cout << "Phuong trinh bac nhat: ax + b = 0";
    cout << "\nNhap a: ", cin >> a;
    cout << "Nhap b: ", cin >> b;
    if (a == 0)
    {
        cout << "Phuong trinh luon dung voi moi x" << endl;
        return 0;
    }
    if (a != 0)
    {
        cout << "Nghiem phuong trinh x = " << -b / a;
    }
    return 0;
}