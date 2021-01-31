#include <iostream>
using namespace std;

int main()
{

    float a, b;

    cout << "Phuong trinh bac nhat: ax + b = 0";
    cout << "\nNhap a: ", cin >> a;
    cout << "Nhap b: ", cin >> b;

    while (a != 0)
    {
        cout << "phuong trinh co nghiem: " << -b/a << endl;
        break;
    }
    while (a == 0)
    {
        cout<<"Phuong trinh vo so nghiem nghiem"<<endl;
        break;
    }
        while (b == 0)
    {
        cout<<"Phuong trinh co nghiem x = 0"<<endl;
        break;
    }

    

    return 0;
}