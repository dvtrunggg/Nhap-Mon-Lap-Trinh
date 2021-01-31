//Nhập chiều dài cạnh hình vuông. Tính và in ra chu vi, diện tích hình vuông đó.

#include <iostream>
using namespace std;

int main()
{
    float canh;
    cout << "Nhap canh hinh vuong: ", cin >> canh;
    if (canh < 0)
    {
        cout << "Ko hop le";
        exit(0);
    }
    cout << "Chu vi hinh vuong: " << canh * 4 << endl;
    cout << "Dien tich hinh vuong: " << canh * canh;
    return 0;
}