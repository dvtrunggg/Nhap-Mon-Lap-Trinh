#include "matrix.h"

int main()
{
    //int a[MAX][MAX];
    int rows, cols;
    rows = 5;
    cols = 4;
    int a[][MAX] = {{100, 10, 0, 11}, {2, -3, 1, 41}, {5, 8, -3, -300}, {7, 3, 10, -4}, {1, -5, -4, 9}};
    ////câu 1: input matrix
    //Input(a, rows, cols);

    ////câu 1: print matrix
    Print(a, rows, cols);

    //cau 2: search phần tử
    int index_row, index_col;
    int x; // x là phần tử cần tìm
    cout << "Nhap phan tu ban can tim: ", cin >> x;
    if (Search(a, rows, cols, x) == 0)
    {
        cout << "Khong tim thay" << endl;
    }
    else{
        cout<< "Tim thay "<<x<<"tai: "<<endl;
    }
    //câu 3: tìm max của matrix
    cout << "Max cua matrix: "<<maxMatrix(a, rows, cols)<<endl;
    //câu 3: tìm max của bien matrix
    cout << "Max cua bien trong ma tran: " << maxBien(a, rows, cols) << endl;

    //câu 4: tổng phần tử matrix
    cout << "Sum of matrix: " << sumMatrix(a, rows, cols)<<endl;
    //câu 4: các phần tử matrix > tổng
    greaterSum(a, rows, cols);

    //câu 5: sum và max mỗi dòng và cột
    sum_maxEachRow(a, rows, cols);
    cout << endl;
    sum_maxEachCol(a, rows, cols);

    //câu 6: check ma phương
    int n = 3;
    //em cho sẵn 1 cái magic square ạ:))
    int b[][MAX] = {{2, 7, 6},
                    {9, 5, 1},
                    {4, 3, 8}};
    Print(b, n, n);
    if (isMagicSquare(b, n, n))
        cout << "\nDay la ma phuong" << endl;
    else
        cout << "Day khong phai la ma phuong" << endl;

    //câu 7: xuất các điểm yên ngựa
    diemYenNgua(a, rows, cols);

    //câu 8: so điểm queen
    cout << "\nSo diem hoang hau trong ma tran: " << countQueen(a, rows, cols) << endl;

    //câu 9: sort các phần tử ở biên tăng dần theo chiều kim đồng hồ
    cout << "Mang sau khi sort cac phan tu tai bien theo chieu kim dong ho: " << endl;
    sortBien(a, rows, cols);
    Print(a, rows, cols);

    return 0;
}