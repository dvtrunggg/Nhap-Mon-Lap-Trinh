//Giả sử lãi suất mỗi tháng của ngân hàng là q (ví dụ nếu lãi suất 1% thì q = 0.01) với hình thức gửi tiết kiệm lãi nhập vốn (lãi kép).
//Hãy nhập vào số tiền gửi M, số tháng gửi n và lãi suất q, tính số tiền lãi.

#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    double laiSuat;
    double tienGui;
    int thang;

    cout << "Nhap so tien gui M: ", cin >> tienGui;
    cout << "Nhap lai suat q: ", cin >> laiSuat;
    cout << "Nhap so thang gui: ", cin >> thang;

    double total = tienGui * pow((1 + laiSuat), thang);
    cout << "Tong tien nhan duoc sau " << thang << " thang, lai suat: " << laiSuat << " voi tien goc: " << tienGui << " la: " << total << endl;
    cout << "Tien lai: " << total - tienGui;

    return 0;
}