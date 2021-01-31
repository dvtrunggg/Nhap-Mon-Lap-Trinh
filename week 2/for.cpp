#include <iostream>
using namespace std;

int main()
{

    float a, b;

    cout << "Phuong trinh bac nhat: ax + b = 0";
    cout << "\nNhap a: ", cin >> a;
    cout << "Nhap b: ", cin >> b;

    for (; a != 0;)
    {
        cout << "phuong trinh co nghiem: " << -b/a << endl;
        break;
    }
    for (; a == 0;)
    {
        cout<<"Phuong trinh vo nghiem"<<endl;
        break;
    }

        for (; b == 0;)
    {
        cout<<"Phuong trinh nghiem x = 0"<<endl;
        break;
    }
    

    return 0;
}