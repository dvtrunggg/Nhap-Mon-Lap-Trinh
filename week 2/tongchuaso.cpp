#include <iostream>
using namespace std;

int main()
{
    int n;
    int temp, temp2;
    int sum = 0;
    cout << "Nhap so nguyen: ", cin >> n;

    while (n != 0)
    {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }

    cout << sum << endl;
    int sum2 = 0;

    while (sum != 0)
    {
        int temp2 = sum % 10;
        sum2 += temp2;
        sum /= 10;
    }

    cout << sum2 << endl;
    return 0;
}