#include <iostream>
using namespace std;

bool TimSoTrau(int &SoTD, int &SoTN, int &SoTG, int TongSoTrau = 100, int TongSoCo = 100, int min = 0)
{
    for (SoTD = min; SoTD <= TongSoCo/5; SoTD++)
    {
        int SoTN_TG = TongSoTrau - SoTD;
        for (SoTG = 0; SoTG <= SoTN_TG; SoTG += 3)
        {
            SoTN = SoTN_TG - SoTG;
            if (SoTD * 5 + SoTN * 3 + SoTG / 3 == TongSoCo)
                return true;
        }

        return false;
    }
}


// void TimSoTrau(int &SoTD, int &SoTN, int &SoTG, int TongSoTrau = 100, int TongSoCo = 100, int min = 0)
// {
//     for (SoTD = min; SoTD <= TongSoCo/5; SoTD++)
//     {
//         int SoTN_TG = TongSoTrau - SoTD;
//         for (SoTG = 0; SoTG <= SoTN_TG; SoTG += 3)
//         {
//             SoTN = SoTN_TG - SoTG;
//             if ((SoTD * 5 + SoTN * 3 + SoTG / 3) == TongSoCo)
//                 {
//                     cout<<"TD:"<<SoTD<<endl;
//                     cout<<"TN:"<<SoTN<<endl;
//                     cout<<"TG:"<<SoTG<<endl;
//                     break;
//                 }
//         }
//     }
// }

int main()
{
    int TongSoCo, TongSoTrau;
    int SoTD, SoTN, SoTG, min;
    // cout << "Nhap tong so trau: ", cin >> TongSoTrau;
    // cout << "Nhap tong so co: ", cin >> TongSoCo;

    if (TimSoTrau(SoTD, SoTN, SoTG, TongSoTrau, TongSoCo, min))
    {
        cout << "So trau dung: " << SoTD << endl;
        cout << "So trau nam: " << SoTN << endl;
        cout << "So trau gia: " << SoTG << endl;
    }
    else
    {
        cout << "Du lieu ko hop le";
    }

    //TimSoTrau(SoTD, SoTN, SoTG, TongSoTrau, TongSoCo, min);
    return 0;
}
