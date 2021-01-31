#include"number.h"

void readFile(ifstream& fileIn, int a[], int& n)
{
    if (fileIn.fail())
    {
        cout << "File is not exist!. Please check again" << endl;
        exit(0);
    }
    fileIn >> n;
    for (int i = 0; i < n; i++)
    {
        fileIn >> a[i];
    }
}

void Print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

float trungBinhCong(int a[], int n)
{
    float sum = 0; 
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
            sum += a[i];
        }
    }
    if (count == 0)
        return 0;
    else
        return sum / count;
}


// đọc file theo định dạng kiểu JSON
void writeFile(ofstream& fileOut, int a[], int n)
{

    fileOut << "{";
    fileOut << endl;
    fileOut << "\t";
    char str[] = "\"DanhSach\": [";
    fileOut << str;

    for (int i = 0; i < n; i++)
    {
        fileOut << a[i];
        if (i == n - 1)
            break;
        fileOut << ", ";
    }

    fileOut << "]";

    fileOut << ",";
    fileOut << endl << "\t";
    char str2[] = "\"TrungBinhCong\": ";
    fileOut << str2;
    fileOut << setprecision(3)<<trungBinhCong(a, n);  //hàm setprecision là làm tròn số thập phân
    fileOut << endl;

    fileOut << "}";
}