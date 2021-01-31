/*Tính diện tích bề mặt và thể tích các hình sau:

    Khối hộp chu nhat: nhập vào chiều cao, chiều dai và chiều rộng
    Khối lập phương: nhập vào cạnh
    Khối trụ tròn: nhập vào bán kính và chiều cao
*/

#include <iostream>
using namespace std;
#define pi 3.14
int main()
{
    float chieuCao, chieuDai, chieuRong;
    cout << "Hinh Hop: " << endl;
    cout << "Nhap chieu cao: ", cin >> chieuCao;
    cout << "Nhap chieu dai day: ", cin >> chieuDai;
    cout << "Nhap chieu rong day: ", cin >> chieuRong;

    float Sxq = 2 * chieuCao * (chieuDai + chieuRong);
    cout << "Dien tich xung quanh hinh hop chu nhat: " << Sxq << endl;
    cout << "Dien tich toan phan hinh hop chu nhat: " << Sxq + 2 * (chieuDai * chieuRong) << endl;
    cout << "Dien tich toan phan hinh hop chu nhat: " << chieuDai * chieuRong * chieuCao;

    float canh;
    cout << "\nHinh Lap Phuong"<<endl;
    cout << "Nhap canh:", cin >> canh;
    cout << "Dien tich xung quanh hinh lap phuong: " << 4 * canh * canh << endl;
    cout << "Dien tich toan phan hinh lap phuong: " << 6 * canh << endl;
    cout << "Dien tich toan phan hinh lap phuong: " << canh * canh * canh;

    float banKinh;
    cout << "\nHinh Tru Tron"<<endl;
    cout << "Nhap canh:", cin >> banKinh;
    cout << "Nhap chieu cao: ", cin >> chieuCao;
    cout << "Dien tich xung quanh hinh lap phuong: " << 2 * pi * banKinh * chieuCao << endl;
    cout << "Dien tich toan phan hinh lap phuong: " << 2 * pi * banKinh * (banKinh + chieuCao) << endl;
    cout << "Dien tich toan phan hinh lap phuong: " << pi * banKinh * banKinh * chieuCao;
    return 0;
}