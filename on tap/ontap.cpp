#include <iostream>
using namespace std;
#define MAX 100;
void inputArr(int a[], int &n)
{
    n = 0;
    do
    {
        cout << "element[" << n << "]=";
        cin >> a[n];
        n++;
        if (n == MAX)
            return;
        cout << "input another?(y/n)";
        char ans = getchar();
    } while (ans == 'Y' || ans == 'y');
}
int main()
{
    int a, b, c;
    a = 5;
    b = 10;
    //c = ++a;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
}