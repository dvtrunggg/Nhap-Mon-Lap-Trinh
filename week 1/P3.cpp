//Viết chương trình nhập vào bán kính của hình tròn. Tính và in ra chu vi, diện tích của hình tròn đó.

#include <iostream>
#define pi 3.14
using namespace std;
int main()
{
    float bankinh;
    cout << "Nhap ban kinh: ", cin >> bankinh;
    cout << "Chu vi hinh tron: " << 2 * bankinh * pi<<endl;
    cout << "Dien tich hinh tron: " << bankinh * bankinh * pi;
    return 0;
}