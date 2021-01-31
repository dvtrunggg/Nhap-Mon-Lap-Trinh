#include "struct.h"

void Input(Fraction &ps)
{
    cout << "Entrez le numerateur de fration: ", cin >> ps.num;
    cout << "Entrez le denominateur de fraction: ", cin >> ps.deno;
}
void Output(Fraction ps)
{
    cout << ps.num << "/" << ps.deno << endl;
}

Fraction Addition(Fraction ps1, Fraction ps2)
{
    Fraction resultat;
    resultat.num = ps1.num * ps2.deno + ps2.num * ps1.deno;
    resultat.deno = ps1.deno * ps2.deno;
    return resultat;
}

Fraction Soustraction(Fraction ps1, Fraction ps2)
{
    Fraction resultat;
    resultat.num = ps1.num * ps2.deno - ps2.num * ps1.deno;
    resultat.deno = ps1.deno * ps2.deno;
    return resultat;
}

Fraction Multiplication(Fraction ps1, Fraction ps2)
{
    Fraction resultat;
    resultat.num = ps1.num * ps2.num;
    resultat.deno = ps1.deno * ps2.deno;
    return resultat;
}
Fraction Division(Fraction ps1, Fraction ps2)
{
    Fraction resultat;
    resultat.num = ps1.num * ps2.deno;
    resultat.deno = ps1.deno * ps2.num;
    return resultat;
}
int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

Fraction rutGon(Fraction &ps)
{
    float temp = UCLN(ps.deno, ps.num);
    ps.num = ps.num / temp;
    ps.deno = ps.deno / temp;
    return ps;
}

// void inputArray(Fraction ps[], int &n)
// {
//     cout << "Nhap so luong phan tu mang: ", cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         Fraction psTemp;
//         Input(psTemp);
//         ps[i] = psTemp;
//     }
// }

// void outputArray(Fraction ps[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         Output(ps[i]);
//     }
// }

// void writeFile(ofstream &fileOut, Fraction ps[], int n)
// {

//     fileOut.open("output.txt", ios_base::out);
//     for (int i = 0; i < n; i++)
//     {
//         rutGon(ps[i]);
//     }
//     fileOut << n << endl;
//     for (int i = 0; i < n; i++)
//     {
//         fileOut << ps[i].num;
//         char buff = '/';
//         fileOut << buff;
//         fileOut << ps[i].deno << " ";
//     }
//     fileOut.close();
// }

// void outputArray2(Fraction ps[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         Output(ps[i]);
//     }
// }

// void readFile(ifstream &fileIn, Fraction ps[], int& n)
// {
//     fileIn.open("ouput.txt", ios_base::in);
//     fileIn >> n;
//     for(int i = 0; i<n; i++)
//     {
//         fileIn>>ps[i].num;
//         char x;
//         fileIn>>x;
//         fileIn>>ps[i].deno;
//     }
//     fileIn.close();
// }