#include "matrix.h"

//bài 1
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
int Search(int a[][MAX], int rows, int cols, int x)
{
    int flag = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] == x)
            {
                flag = 1;
                cout << "a[" << i << "][" << j << "]\t";
            }
        }
    }
    return flag;
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
//i_row và i_col là vị trí của phần tử queen trên matrix (a[i_row][i_col])
bool isQueen(int a[][MAX], int rows, int cols, int i_row, int i_col)
{
    int x = a[i_row][i_col];

    // check cột
    for (int j = 0; j < rows; j++)
    {
        if (a[j][i_col] > x)
        {
            return false;
        }
    }

    // check dòng
    for (int i = 0; i < cols; i++)
    {
        if (a[i_row][i] > x)
        {
            return false;
        }
    }

    //check duong cheo thu nhat
    int i_row1 = i_row + 1;
    int i_col1 = i_col + 1;
    while (i_col1 + 1 < cols && i_row1 < i_row)
    {
        if (a[i_col1][i_row1] > x)
            return false;
        // tăng phải lên
        i_col1++;
        i_row1++;
    }
    i_row1 = i_row - 1;
    i_col1 = i_col - 1;
    while (i_col1 - 1 >= 0 && i_row1 >= 0)
    {
        if (a[i_col1][i_row1] > x)
            return false;
        //giảm qua trái
        i_col1--;
        i_row1--;
    }
    // check đường chéo thứ 2
    i_row1 = i_row + 1;
    i_col1 = i_col - 1;
    while (i_col1 - 1 >= 0 && i_row1 < rows)
    {
        if (a[i_col1][i_row1] > x)
            return false;
        // tăng trái lên
        i_row1++;
        i_col1--;
    }
    i_row1 = i_row - 1;
    i_col1 = i_col + 1;

    while (i_row1 - 1 >= 0 && i_col1 < cols)
    {
        if (a[i_col1][i_row1] > x)
            return false;
        // giảm phải đi
        i_row1--;
        i_col1++;
    }
    return true;
}

//đếm số lượng điểm hoàng hậu trên ma trận
int countQueen(int a[][MAX], int rows, int cols)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (isQueen(a, rows, cols, i, j))
                count++;
        }
    }
    return count;
}

//Bài 9. Sắp xếp các giá trị nằm trên biên ma trận tăng dần theo chiều kim đồng hồ

//hàm hoán vị
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//hàm sort
void interchangeSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                Swap(a[i], a[j]);
            }
        }
    }
}

//lấy các phần tử trên biên ma trận vào mảng 1 chiều
// mảng 1 chiều này là temp[], với kích thước là index
void getElement(int a[][MAX], int temp[], int rows, int cols, int &index)
{
    //giả sử ma trận có kích thước 3x3
    int i = 0, j;
    // lấy biên hàng trên
    for (j = i; j < cols; j++)
    {
        temp[index++] = a[i][j]; //  i = 0, j chạy từ 0 đến 2
    }
    // lấy biên cột phải
    for (i++, j--; i < rows; i++) // i chạy từ 1 đến 2, j = 1
    {
        temp[index++] = a[i][j];
    }
    // lấy biên hàng dưới
    for (i--, j--; j >= 0; j--)
    {
        temp[index++] = a[i][j];
    }
    // lấy biên cột trái
    for (i--, j++; i > 0; i--)
    {
        temp[index++] = a[i][j];
    }
}

//hàm gán các phần tử từ mảng temp[] sang biên của ma trận a
void setElement(int a[][MAX], int rows, int cols, int temp[])
{
    // giả sử ma trận có kích thước 3x3
    int i = 0, j, index = 0;
    // biên hàng trên
    for (j = i; j < cols; j++)
    {
        a[i][j] = temp[index++]; //  i = 0, j chạy từ 0 đến 2
    }
    // biên cột phải
    for (i++, j--; i < rows; i++) // i chạy từ 1 đến 2, j = 1
    {
        a[i][j] = temp[index++];
    }
    // biên hàng dưới
    for (i--, j--; j >= 0; j--)
    {
        a[i][j] = temp[index++];
    }
    // biên cột trái
    for (i--, j++; i > 0; i--)
    {
        a[i][j] = temp[index++];
    }
}
//sắp xếp các phần tử ở biên tăng dần theo chiều kim đồng hồ
void sortBien(int a[][MAX], int rows, int cols)
{
    int temp[MAX], i = 0;
    //lấy các phần tử biên ra và lưu zô mảng 1 chiều
    getElement(a, temp, rows, cols, i);

    //sort mảng temp
    interchangeSort(temp, i);

    //gán các phần tử từ mảng temp vào lại biên của ma trận thep chiều kim đồng hồ
    setElement(a, rows, cols, temp);
}