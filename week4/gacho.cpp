#include <iostream>
using namespace std;

int Ga(int chan, int tong)
{
    int a = 0;
    for (int i = 0; i < tong; i++)
    {
        if ((2 * a + ((36 - a) * 4)) == 100)
        {
            return a;
        }
        else
        {
            a++;
        }
    }
}

int main()
{
    int chan, tong, a;
    cout << "Nhap so luong con ";
    cin >> tong;
    cout << "Nhap so luong chan:";
    cin >> chan;
    cout << "So ga: " << Ga(chan, tong) << endl;
    cout << "So cho: " << tong - Ga(chan, tong);
    return 0;
}