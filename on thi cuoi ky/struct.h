#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct Fraction
{
    //numérateur et dénominateur
    float num, deno;
};

void Input(Fraction &);
void Output(Fraction);
Fraction Addition(Fraction ps1, Fraction ps2);
Fraction Soustraction(Fraction ps1, Fraction ps2);
Fraction Multiplication(Fraction ps1, Fraction ps2);
Fraction Division(Fraction ps1, Fraction ps2);

int UCLN(int a, int b);

Fraction rutGon(Fraction &ps);

void inputArray(Fraction ps[], int &n);
void outputArray(Fraction ps[], int n);
void writeFile(ofstream &fileOut, Fraction ps[], int n);
void readFile(ifstream &fileIn, Fraction ps[], int& n);