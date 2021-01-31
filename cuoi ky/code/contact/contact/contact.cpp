#include"contact.h"
void readFile(ifstream& fileIn, contact& inf)
{
    if (fileIn.fail())
    {
        cout << "File is now exist!. Please check again" << endl;
        exit(0);
    }
    char* buf = new char[MAX];
    fileIn.get(buf, MAX, ")");


}

void Print(contact inf)
{
    cout << inf.hoTen << "(" << inf.diaChi << ")" << inf.soDienThoai << endl;
}