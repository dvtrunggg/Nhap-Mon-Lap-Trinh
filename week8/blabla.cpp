#include <iostream>
using namespace std;
#define MAX 100
void Print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
}
void Insert(int arr[], int &size, int pos, int key)
{
    if (pos < 0 || pos >= MAX)
        return;
    for (int i = size; i > pos; --i)

        arr[i] = arr[i - 1];
    arr[pos] = key;
    size++;
}

int binSearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;
    do
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            right = mid - 1;
        else
            left = mid + 1;
    } while (left <= right);
    return -1;
}

void binInsert(int arr[], int &size, int key)
{
    if (key < arr[0])
    {
        Insert(arr, size, 0, key);
    }
    else if (key > arr[size - 1])

    {
        Insert(arr, size, size, key);
    }

    int left = 0, right = size - 1;
    do
    {
        int mid = (left + right) / 2;
        if (arr[mid] < key && arr[mid + 1] > key)
            Insert(arr, size, mid + 1, key);
        if (arr[mid] < key)
            right = mid - 1;
        else
            left = mid + 1;
    } while (left <= right);
    return;
}

void insertAscending(int a[], int &size, int key)
{
    if (key < a[0])
    {
        Insert(a, size, 0, key);
    }
    else if (key > a[size - 1])

    {
        Insert(a, size, size, key);
    }
    for (int i = 0; i < size; i++)
    {

        if (a[i] < key && a[i + 1] > key)
        {
            Insert(a, size, i + 1, key);
        }
    }

    // for(int i = 0; i<size; i++)
    // {
    //     if(a[i] < key && a[i + 1] > key)
    //     {
    //         Insert(a, size, i+1, key);
    //     }
    // }
}

void Input(int a[], int &n)
{
    int b[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        insertAscending(a, n, b[i]);
    }
}

void Merge(int a[], int b[], int size_b, int &size_a)
{
    for (int i = 0; i < size_b; i++)
    {
        insertAscending(a, size_a, b[i]);
    }
}
// void Ghep(int A[], int n, int B[], int m, int C[], int &h)
// {
//     h = m + n;
//     for (int i = 0; i < h; i++)
//         if (i < n)
//             C[i] = A[i];
//         else
//             C[i] = B[i - n];
// }
void Merge2(int a[], int b[], int c[], int size_b, int size_a, int &size_c)
{
    size_c = size_a + size_b;
    for (int i = 0; i < size_c; i++)
    {
        if (i < size_a)
            c[i] = c[i];
        else
            c[i] = b[i - size_a];
    }
}
int main()
{
    //int a[] = {1};
    //int size = sizeof(a) / sizeof(a[0]);
    //int pos;
    //insertAscending(a, size, -110);
    // binInsert(a, size, 55);
    // cout << endl;
    //int a[MAX];
    // int n;
    // Input(a, 5);
    // Print(a, 5);

    int a[] = {1, 5, 7, 8, 11};
    int b[] = {-5, 2, 3, 6, 9};
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    int size_c;
    int c[MAX];
    //Merge(a,b,size_b, size_a);
    Merge2(a, b, c, size_b, size_a, size_c);
    Print(c, size_c);

    // int arr[MAX];
    // Input(arr, 5);
    // Print(arr, 5);
    return 0;
}