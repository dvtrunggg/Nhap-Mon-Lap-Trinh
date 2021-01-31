//Nhập vào 1 ký tự. Xuất ra màn hình ký tự đó và mã ASCII của nó.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Nhap 1 ky tu:", cin >> ch;
    cout << "Ma ASCII cua " << ch << " la: " << (int)ch;
    return 0;
}