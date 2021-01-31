#include <iostream>
#include <fstream>
#include<math.h>
using namespace std;
struct Fraction
{
    //numérateur et dénominateur
    int num, deno;
};
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

void inputArray(Fraction ps[], int &n)
{
    cout << "Nhap so luong phan tu mang: ", cin >> n;
    for (int i = 0; i < n; i++)
    {
        Fraction psTemp;
        Input(psTemp);
        ps[i] = psTemp;
    }
}

void outputArray(Fraction ps[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Output(ps[i]);
    }
}

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

Fraction Sum(Fraction ps[], int n)
{
    Fraction sum;
    sum.num = 0;
    sum.deno = 1;
    for (int i = 0; i < n; i++)
    {
        sum = Addition(sum, ps[i]);
    }
    return sum;
}

void swap(Fraction &ps1, Fraction &ps2)
{
    Fraction temp = ps1;
    ps1 = ps2;
    ps2 = temp;
}

void selectionSort(Fraction ps[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (Soustraction(ps[j], ps[min_idx]).num < 0 || Soustraction(ps[j], ps[min_idx]).deno < 0) //ps[j] < ps[min_idx]
                min_idx = j;

        swap(ps[min_idx], ps[i]);
    }
}
Fraction Min(Fraction ps1, Fraction ps2)
{
    if(Soustraction(ps1, ps2).num < 0 || Soustraction(ps1, ps2).deno < 0)
        return ps1;
    else
    {
        return ps2;
    }
    
}


Fraction ganNhat(Fraction ps[], int n, Fraction x)
{
    //Input(x);
    Fraction psTemp[100];
    for(int i = 0; i<n; i++)
    {
        Fraction temp = Soustraction(ps[i], x);
        psTemp[i] = temp;
        
    }
    Fraction min;
    for(int i = 0; i<n-1; i++)
    {
        min = Min(psTemp[i], psTemp[i+1]);
    }
    return min;
}

// void dayCon()

int main(int argc, char const *argv[])
{
    // Fraction ps1, ps2;
    // Input(ps1);
    // Output(ps1);
    // Input(ps2);
    // Output(ps2);
    // cout << "ps1 + ps2 = ";
    // Output(Addition(ps1, ps2));
    // Fraction ps3 = Addition(ps1, ps2);
    // rutGon(ps3);
    // Output(ps3);
    // cout << "ps1 - ps2 = ";
    // Output(Soustraction(ps1, ps2));

    // cout << "ps1 * ps2 = ";
    // Output(Multiplication(ps1, ps2));

    // cout << "ps1 * ps2 = ";
    // Output(Division(ps1, ps2));

    Fraction ps[100];
    int n;
    inputArray(ps, n);
    // selectionSort(ps, n);
    // outputArray(ps, n);

    Fraction t;
    t.num = 2;
    t.deno = 3;
    Fraction temp = ganNhat(ps, n, t);
    Output(temp);

    // cout << endl;
    // Fraction s = Sum(ps, n);
    // Output(s);
    return 0;
}