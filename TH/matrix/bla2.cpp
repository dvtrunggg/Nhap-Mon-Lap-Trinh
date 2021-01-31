#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void noiChuoi(char str[])
{
    char temp[100];
    
    char s1[10] = "_o0o_";
    strcpy(temp, strrev(str));
    cout<<str<<s1<<temp;

}

int main()
{
    char str[100];
    cin >> str;
    noiChuoi(str);
    return 0;
}