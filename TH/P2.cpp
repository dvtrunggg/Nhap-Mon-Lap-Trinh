// liệt kê các số hoàn hảo < n
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

//print perfect numbers < n
void printPerfect(int n)
{
    cout << "Cac so hoan hao < " << n << " la: " << endl;
    for (int i = 2; i <= n; i++)
    {
        if (checkPerfect(i))
            cout << i << "\t";
    }
}
int main()
{
    int n;
    cout << "Nhap so N: ", cin >> n;
    printPerfect(n);
    return 0;
}