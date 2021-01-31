#include <iostream>
using namespace std;
#define MAX 100
#define Max(a, b) ((a) > (b) ? (a) : (b))

//rows là số dòng, cols là số cột của ma trận
void Input(int a[][MAX], int &rows, int &cols)
{
    cout << "Nhap so dong: ", cin >> rows;
    cout << "Nhap so cot: ", cin >> cols;
    if (rows > MAX || rows < 1 || cols > MAX || cols < 1)
    {
        cout << "Kich thuoc ma tran khong hop le" << endl;
        return;
    }
    cout << "Them phan tu ma tran" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
//xuất ma trận
void Print(int a[][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

//bài 2: tìm phần tử x trong ma trận
//index_row và index_col là vị trí tìm thấy x trong ma trận
//trả về 1 vị trí của x nếu tồn tại
bool Search(int a[][MAX], int rows, int cols, int x, int &index_row, int &index_col)
{
    for (index_row = 0; index_row < rows; index_row++)
    {
        for (index_col = 0; index_col < cols; index_col++)
        {
            if (a[index_row][index_col] == x)
            {
                return true;
            }
        }
    }
    return false;
}

//bài 2: tìm phần tử x trong ma trận (show ra nếu tồn tại nhiều x trong ma trận)
void Search_x(int a[][MAX], int rows, int cols, int x)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] == x)
            {
                cout << "a[" << i << "][" << j << "]"
                     << "\t";
            }
        }
    }
    cout << endl; // cho hàm main đẹp thôi ạ:)
}

//câu 3: tìm max của matrix
int maxMatrix(int a[][MAX], int rows, int cols)
{
    int max = a[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            max = Max(max, a[i][j]); //hàm Max được define ở phía trên của file
        }
    }
    return max;
}
// hàm Max được define ở phía trên của file
//cẩu: tìm max của biên trong matrix
int maxBien(int a[][MAX], int rows, int cols)
{
    int max = a[0][0];

    // dòng 0
    for (int i = 1; i < cols; i++)
    {
        max = Max(max, a[0][i]);
    }

    //dòng rows - 1 (dòng cuối)
    for (int i = 0; i < cols; i++)
    {
        max = Max(max, a[rows - 1][i]);
    }

    //cột thứ 0
    for (int i = 0; i < rows; i++)
    {
        max = Max(max, a[i][0]);
    }

    //cột thứ cols - 1
    for (int i = 0; i < rows; i++)
    {
        max = Max(max, a[i][cols - 1]);
    }
    return max;
}

//câu 4: tổng phần tử ma trận
int sumMatrix(int a[][MAX], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}

// câu 4: các phần tử > tổng ma trận
void greaterSum(int a[][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] > sumMatrix(a, rows, cols))
                cout << "a[" << i << "][" << j << "] > sumMatrix (" << a[i][j] << " > " << sumMatrix(a, rows, cols) << " )" << endl;
        }
    }
}

//câu 5: tổng của dòng matrix
// hàm Max được define ở phía trên của file
void sum_maxEachRow(int a[][MAX], int rows, int cols)
{
    int sum = 0;
    int max = a[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += a[i][j];
            max = Max(max, a[i][j]);
        }
        cout << "Sum of row " << i << ": " << sum << ", max is: " << max << endl;
        max = a[i + 1][0]; //gán lại max = giá trị đầu của mỗi dòng
        sum = 0;           // gán lại sum = 0 để tính sum mỗi dòng
    }
}

//câu 5: tổng của cột matrix
// hàm Max được define ở phía trên của file
void sum_maxEachCol(int a[][MAX], int rows, int cols)
{
    int sum = 0;
    int max = a[0][0];
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            sum += a[i][j];
            max = Max(max, a[i][j]);
        }
        cout << "Sum of col " << j << ": " << sum << ", max is: " << max << endl;
        max = a[0][j + 1]; //gán lại max = giá trị đầu của mỗi cột
        sum = 0;           // gán lại sum = 0 để tính sum mỗi cột
    }
}

//câu 6: check ma phương
bool isMagicSquare(int a[][MAX], int rows, int cols)
{
    // nếu là ma trận hình chữ nhật
    if (rows != cols)
        return false;

    else
    {
        // khi này, rows = cols = n (gọi n cho tiện :)))
        int n = rows;

        //ma phương: ma trận vuông có tổng mỗi dòng = tổng mỗi cột = tổng 2 đường chéo
        int sumDig1 = 0, sumDig2 = 0;

        //tổng ptu đường chéo chính
        for (int i = 0; i < n; i++)
        {
            sumDig1 += a[i][i];
        }

        //tổng ptu đường chéo phụ
        for (int i = 0; i < n; i++)
        {
            sumDig2 += a[i][n - i - 1];
        }

        //return false nếu tổng chéo chính != tổng chéo phụ
        if (sumDig1 != sumDig2)
            return false;

        //check tổng mỗi dòng
        for (int i = 0; i < n; i++)
        {
            int sumRow = 0;
            for (int j = 0; j < n; j++)
            {
                sumRow += a[i][j];
            }
            if (sumRow != sumDig1)
                return false;
        }

        //check tổng mỗi cột
        for (int i = 0; i < n; i++)
        {
            int sumCol = 0;
            for (int j = 0; j < n; j++)
            {
                sumCol += a[j][i];
            }
            if (sumCol != sumDig1)
                return false;
        }
        return true;
    }
}

//câu 7: Chỉ ra các vị trí “yên ngựa” trên ma trận. (nhỏ nhất trên dòng và lớn nhất trên cột)

//điểm nhỏ nhất trên dòng
//i_row và i_col là vị trí của phần tử min trên dòng (a[i_row][i_col])
bool isMinRow(int a[][MAX], int rows, int cols, int i_row, int i_col)
{
    int min = a[i_row][i_col];
    for (int i = 0; i < cols; i++)
    {
        if (a[i_row][i] < min)
            return false;
    }
    return true;
}

//điểm lớn nhất trên cột
//i_row và i_col là vị trí của phần tử max trên cột (a[i_row][i_col])
bool isMaxCol(int a[][MAX], int rows, int cols, int i_row, int i_col)
{
    int max = a[i_row][i_col];
    for (int i = 0; i < rows; i++)
    {
        if (a[i][i_col] > max)
            return false;
    }
    return true;
}

//xuất các điểm yên ngựa
void diemYenNgua(int a[][MAX], int rows, int cols)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (isMinRow(a, rows, cols, i, j) && isMaxCol(a, rows, cols, i, j))
            {
                cout << "a[" << i << "][" << j << "] la diem yen ngua" << endl;
                count++;
            }
        }
    }
    cout << "So diem yen ngua: " << count;
}

//Bài 8. Đếm số “hoàng hậu” trên ma trận. (lớn nhất trên dòng, cột và 2 đường chéo đi qua nó)

//điểm lớn nhất trên dòng
//i_row và i_col là vị trí của phần tử max trên cột (a[i_row][i_col])
bool isMaxRow(int a[][MAX], int rows, int cols, int i_row, int i_col)
{
    int max = a[i_row][i_col];
    for (int i = 0; i < cols; i++)
    {
        if (a[i_row][i] > max)
            return false;
    }
    return true;
}

//điểm lớn nhất trên đường chéo 1
bool isMaxDia1(int a[][MAX], int rows, int cols, int i_row, int i_col)
{
    int max = a[i_row][i_col];
    int tempRow = i_row + 1;
    int tempCol = i_col + 1;
    while (tempCol + 1 < rows && tempRow < i_row)
    {
        if (a[tempCol][tempRow] > max)
            return false;

        //tăng phải lên
        tempCol++;
        tempRow++;
    }

    tempRow = i_row - 1;
    tempCol = i_col - 1;
    while (tempCol - 1 >= 0 && tempRow >= 0)
    {
        if (a[tempCol][tempRow] > max)
            return false;

        //tăng phải lên
        tempCol--;
        tempRow--;
    }
    return true;
}
int main()
{
    //int a[MAX][MAX];
    int rows, cols;
    rows = 5;
    cols = 4;
    int a[][MAX] = {{100, 10, 10, 11}, {7, -3, 1, 70}, {7, 8, -3, -300}, {7, 3, 10, -7}, {7, -5, -4, 9}};
    ////câu 1: input matrix
    //Input(a, rows, cols);

    ////câu 1: print matrix
    Print(a, rows, cols);

    // //cau 2: search phần tử
    // int index_row, index_col;
    // int x; // x là phần tử cần tìm
    // cout << "Nhap phan tu ban can tim: ", cin >> x;
    // Search_x(a, rows, cols, x);

    ////câu 3: tìm max của matrix
    //cout << "Max cua matrix: "<<maxMatrix(a, rows, cols);
    ////câu 3: tìm max của bien matrix
    //cout << "Max cua bien trong ma tran: " << maxBien(a, rows, cols) << endl;

    // //câu 4: tổng phần tử matrix
    // cout << "Sum of matrix: " << sumMatrix(a, rows, cols);
    // //câu 4: các phần tử matrix > tổng
    // greaterSum(a, rows, cols);

    //câu 5: sum và max mỗi dòng và cột
    //sum_maxEachRow(a, rows, cols);
    // cout << endl;
    // sum_maxEachCol(a, rows, cols);

    // //câu 6: check ma phương
    // int n = 3;
    // //em cho sẵn 1 cái magic square ạ:))
    // int b[][MAX] = {{2, 7, 6},
    //                 {9, 5, 1},
    //                 {4, 3, 8}};
    // Print(b, n, n);
    // if (isMagicSquare(b, n, n))
    //     cout << "\nDay la ma phuong" << endl;
    // else
    //     cout << "Day khong phai la ma phuong" << endl;

    //câu 7: xuất các điểm yên ngựa
    //diemYenNgua(a, rows, cols);

    //câu 8: điểm queen
     cout << isMaxDia1(a, rows, cols, 1, 1);


    return 0;
}