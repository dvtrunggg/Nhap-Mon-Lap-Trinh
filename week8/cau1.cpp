#include <iostream>
using namespace std;

/*

tiền ban đầu: x
quán 0: x <5
quán 1: x+x=10 => x = 5
quán 2: ((x+x-10)*2)*1 -10
quán 3: (((x+x-10)*2)-10)*2 - 10 
quán n: (((x+x-10)*2)-10)*(n-1) - 10

*/

int tienBanDau(int n)
{
    int x;
    if(n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        x = 5;
        return x;
    }
    return tienBanDau((((x+x-10)-10)*(n-1)-10));
    
}

int main()
{
    cout << tienBanDau(10);
}