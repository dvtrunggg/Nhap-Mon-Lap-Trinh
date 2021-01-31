#include <iostream>
#include <math.h>
using namespace std;

//giải phương trình bậc 2: ax^2 + bx + c = 0 với nghiệm là x1, x2
int pTrinhBac2(float a, float b, float c, float &x1, float &x2)
{

    // TH1: a = 0 (=> trở thành phuong trinh bac 1)
    if (a == 0)
    {
        // vô số nghiệm
        if (c == 0)
            return 1;

        // vô nghiệm
        else if (b == 0)
            return -1;

        else
            x1 = x2 = -c / b;
        return 0;
    }
    else
    {
        float delta = b * b - 4 * a * c;

        //vô nghiệm
        if (delta < 0)
            return -1;

        //nghiệm kép
        else if (delta == 0)
        {
            x1 = x2 = -b / 2 * a;
            return 0;
        }
        else
        {
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            return 0;
        }
    }
}

int main()
{
    float a, b, c, x1, x2;
    cout << "Phuong trinh: Ax^2 + Bx + C = 0" << endl;
    cout << "Nhap A: ", cin >> a;
    cout << "Nhap B: ", cin >> b;
    cout << "Nhap C: ", cin >> c;

    int check = pTrinhBac2(a, b, c, x1, x2);

    if (check == -1)
        cout << "Phuong trinh vo nghiem" << endl;

    else if (check == 1)
        cout << "Phuong trinh vo so nghiem" << endl;

    else if (check == 0)
    {
        //trường hợp x1 = x2 => nghiệm kép
        if(x1 == x2)
        {
            cout<<"Phuong trinh co nghiem kep: x1 = x2 = "<<x1<<endl;
        }

        //trường hợp có 2 nghiệm x1 x2 phân biệt
        else{
        cout << "Phuong trinh co nghiem: " << endl;
        cout << "\t x1 = " << x1 << endl;
        cout << "\t x2 = " << x2 << endl;
        }
    }
    return 0;
}