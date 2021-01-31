#include "struct.h"

int main(int argc, char const *argv[])
{
    Fraction ps1, ps2;
    Input(ps1);
    Output(ps1);
    Input(ps2);
    Output(ps2);
    cout << "ps1 + ps2 = ";
    Output(Addition(ps1, ps2));
    Fraction ps3 = Addition(ps1, ps2);
    rutGon(ps3);
    Output(ps3);
    cout << "ps1 - ps2 = ";
    Output(Soustraction(ps1, ps2));

    cout << "ps1 * ps2 = ";
    Output(Multiplication(ps1, ps2));

    cout << "ps1 * ps2 = ";
    Output(Division(ps1, ps2));

    // Fraction a[100];
    // ofstream file;
    // ifstream fileIn;
    // int n;
    //inputArray(a, n);
    //outputArray(a, n);
    
    //writeFile(file, a, n);
    // readFile(fileIn, a, n);
    // outputArray(a, n);
    // system("pause");
    return 0;
}