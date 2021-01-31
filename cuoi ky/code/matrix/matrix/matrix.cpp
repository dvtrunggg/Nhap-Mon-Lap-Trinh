#include"matrix.h"

//hàm input matrix = bàn phím
void inputMatrix(int a[][MAX], int& N)
{
    cout << "Nhap kich thuoc ma tran vuong N*N: N = ", cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ",cin >> a[i][j];
        }
    }
}

//hàm input matrix  = file txt
//dòng đầu là kích thước ma trận N
//các dòng tiếp là ma trận
void readFile(int a[][MAX], int& N, ifstream& file)
{
    if (file.fail())
    {
        cout << "File is now exist!. Please check again" << endl;
        exit(0);
    }
    file >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            file >> a[i][j];
        }
    }
}


//xuất matrix
//matrix A có kích thước N*N
void outputMatrix(int a[][MAX], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}




//check xem ma trận này có phải là magic square hay ko
bool isMagicSquare(int a[][MAX], int rows, int cols)
{
    // nếu là ma trận hình chữ nhật
    //thật ra đề đã yêu cầu sẵn matrix input là matrix vuông nhưng em làm như vậy cho tổng quát:)
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



// Xoay ma tran vuong A cap N 90 do nguoc chieu kim dong ho
//matrix A với kích thước là N*N
void Xoay90(int A[][MAX], int N)
{
    // Chep ma tran A vao B
    int B[100][100];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            B[i][j] = A[i][j];

    // Lay B xoay vao A
    // Ve hinh se thay: dong thanh cot, cot thanh dong nguoc
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            A[N - 1 - j][i] = B[i][j];
}

// xoay ma trận ngược chiều kim đồng hồ theo yêu cầu của đề bài:
//nếu là ma phương thì xoay 180 độ
//nếu là ma trận vuông bình thường thì xoay 90 độ
void XoayMaTran(int A[][MAX], int N)
{
    //là ma phương thì xoay 180 độ (xoay 2 lần 90 độ)
    if (isMagicSquare(A, N, N))
    {
        Xoay90(A, N);
        Xoay90(A, N);
    }
    //là ma trận vuông bình thường thì xoay 90 độ
    else
        Xoay90(A, N);
}


//câu 7: chỉ ra các vị trí “yên ngựa 2” trên ma trận. (lớn nhất trên dòng và nhỏ nhất trên cột)

//điểm lớn nhất trên dòng
//i_row và i_col là vị trí của phần tử max trên dòng (a[i_row][i_col])
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



//điểm nhỏ nhất trên cột
//i_row và i_col là vị trí của phần tử min trên cột (a[i_row][i_col])
bool isMinCol(int a[][MAX], int rows, int cols, int i_row, int i_col)
{
    int min = a[i_row][i_col];
    for (int i = 0; i < rows; i++)
    {
        if (a[i][i_col] < min)
            return false;
    }
    return true;
}

//xuất các điểm yên ngựa 2 (lớn nhất trên dòng và nhỏ nhất trên cột)
void diemYenNgua2(int a[][MAX], int rows, int cols)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){
      
            if (isMaxRow(a, rows, cols, i, j) && isMinCol(a, rows, cols, i, j))
            {
                cout << "a[" << i << "][" << j << "] la diem yen ngua 2" << endl;
                count++;
            }
        }
    }
    
    if (count == 0)
    {
        cout << "Khong co diem yen ngua 2 nao" << endl;
        return;
    }
    cout << "So diem yen ngua: " << count;
}
