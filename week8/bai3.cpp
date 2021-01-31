#include <iostream>
using namespace std;
#define MAX 100
#include <vector>
#define Max(a, b) ((a > b) ? (a) : (b))






void Print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
}

//n là số cần tìm các ước
//a là mảng chứa các ước của n
void mangUoc(int a[], int &size, int n)
{
    size = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            a[size] = i;
            size++;
        }
    }
}

// void mangUoc(vector<int> a, int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             a.push_back(i);
//         }
//     }

//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << "\t";
//     }
// }

//xóa phần tử lớn nhất trong mảng
void deleteMax(int a[], int &size)
{

    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] = max)
        {
            cout << endl
                 << i;
            return;
        }
    }
}

void mangUocChung(int a[], int &size, int n1, int n2)
{
    size = 0;
    int array1[MAX], array2[MAX];
    int size1, size2;
    mangUoc(array1, size1, n1);
    mangUoc(array2, size2, n2);

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (array1[i] == array2[j])
            {
                a[size] = array1[i];
                size++;
            }
        }
    }
}

//mảng các ước dc sắp xếp theo thứ tự tăng dần
int uocChungLonNhi(int a[], int size)
{
    return a[size - 2];
}

//bội chung nhỏ nhì
int boiChungNhoNhi(int a[], int size, int n1, int n2)
{
    return (n1 * n2) / uocChungLonNhi(a, size);
}

int main()
{
    int a[MAX], size, n1, n2;
    cout << "Nhap so n1: ", cin >> n1;
    cout << "Nhap so n2: ", cin >> n2;
    mangUocChung(a, size, n1, n2);
    cout << "Cac uoc chung cua " << n1 << " va " << n2 << ": ";
    Print(a, size);
    cout << endl;
    cout << "Uoc chung nho nhi: " << uocChungLonNhi(a, size) << endl;
    cout << "Boi chung nho nhi" << boiChungNhoNhi(a, size, n1, n2);

    //  vector<int> arr;
    //  mangUoc(arr, 10);
}