#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ", cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "Tong so le: " << sum << endl;
    return 0;
}