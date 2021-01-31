#include <iostream>
#include <fstream>
using namespace std;

void Print(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << arr[i];
    }
}
void readFile(ifstream &file, int arr[])
{
    file.open("data.txt", ios_base::in);
    int i = 0;
    while (!file.eof())
    {
        file >> arr[i];   
        //cout<<arr[i];
        i++;
    }
}

int main()
{
    ifstream file;
    int arr[10];
    int n;
    readFile(file, arr);
    n = arr[0];
    Print(arr,n+1);

    return 0;
}