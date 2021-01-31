#include <iostream>
using namespace std;
#define MAX 100

void Print(int a[], int n)
{
    cout << "Votre tableau est: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
//check cac chữ số chẵn
bool toanchan(int n)
{
    if (n == 0)
    {
        return true;
    }
    else
    {
        int chuso = n % 10;
        if (chuso % 2 != 0)
        {
            return false;
        }
        return toanchan(n / 10);
    }
}
int Search(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (toanchan(a[i]))
            return i;
    }
    return -1;
}

//liệt kê nó ra
void lietKe(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (toanchan(a[i]))
        {
            cout << a[i] << " vi tri: " << i << endl;
        }
    }
}

void Delete(int a[], int &n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;
}

bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int searchOdd(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            return i;
    }
    return -1;
}

//thêm vào sau mỗi ptu lẻ = 1ptu có giá trị = số ngto kế tiếp
// void Insert(int a[], int &n, int pos, int key)
// {
//     for (int i = n, i > pos, i--)
//     {
//         a[i] = a[i-1];
//     }
//     a[pos] = key;
//     n++;
// }

// void Inser_prime(int a[], int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         if(a[i] != )
//     }
// }

int main()
{
    int a[] = {44, 33, 26, 36, 3, 42, 43};
    int n;
    n = sizeof(a) / sizeof(a[0]);

    //lietKe(a, n);
    for (int i = 0; i < n; i++)
    {
        int pos = Search(a, n);
        Delete(a, n, pos);
    }
    Print(a, n);
    return 0;
}