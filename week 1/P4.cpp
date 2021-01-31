//Một hình chữ nhật có đặc điểm chiều dài bằng 1.5 lần chiều rộng. Viết chương trình nhập chu vi của hình,
// tính và in ra diện tích của hình chữ nhật.

#include <iostream>
using namespace std;

int main()
{
    float chieuRong;
    float chieuDai;     // = 1.5 * chieuRong

    float chuVi;
    cout << "Nhap chu vi hinh chu nhat: ", cin >> chuVi;

    chieuRong = chuVi / 5;    //Rong = (chuVi / 2) - Dai;
    chieuDai = chieuRong * 1.5;

    cout << "\nchieu dai hinh chu nhat: " << chieuDai << endl;
    cout << "chieu rong hinh chu nhat: " << chieuRong << endl;
    cout << "chu vi hinh chu nhat: " << chuVi << endl;
    cout << "dien tich hinh chu nhat: " << chieuDai * chieuRong << endl;

    return 0;
}