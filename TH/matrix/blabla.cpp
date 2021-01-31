#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char str[20];
    cout << "Nhap chuoi: ", cin >> str;
    cout << "chuoi ban dau: " << str << endl;
    cout << "chuoi dao nguoc: " << strrev(str) << endl;

    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= '0' && str[i] <= '9')
            count++;
    cout << "so ky tu la so: " << count << endl;

    return 0;
}