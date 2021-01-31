#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Nhap a va b: ";
    cin >> a >> b;
    float result;
    switch (a){
        case 0:
            cout << "Phuong trinh vo so nghiem";
            break;
        default:
            result = - (b * 1.0) / a;
            cout << "Result: " << result << endl;
            break;
    }

    system("pause");
    return 0;
}