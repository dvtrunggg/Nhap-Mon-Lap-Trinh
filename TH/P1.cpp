// kiểm tra 1 số có phải là số hoàn hảo.

#include <iostream>
using namespace std;

// check perfect number
bool checkPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) // chỉ cần xét tới n/2, không cần xét tới n
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
        return true;
    return false;
}

int main()
{
    int n;
    cout << "Nhap so: ", cin >> n;
    if (checkPerfect(n))
        cout << n << " la so hoan hao" << endl;
    else
        cout << n << " khong phai la so hoan hao" << endl;

    return 0;
}