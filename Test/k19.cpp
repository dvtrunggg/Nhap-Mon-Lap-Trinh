// #include <iostream>
// #include <string.h>
// #include <stdio.h>
// using namespace std;

// // câu 1: tìm vị trí i xuất hiện trong mảng thỏa: a0 + á+...+ai-1 = ai+1 + ai+2 +...+an-1, ko tìm thấy return -1
// //vd a = [7,1,2,3,5], hàm trả về 2 vì 7+1 = 3+5

// int Find(int a[], int n)
// {
//     int i;
//     for (int i = 1; i <= n - 2; i++)
//     {
//         int sum1 = 0;
//         for (int j = 0; j < i - 1; j++)
//             sum1 += a[j];
//         int sum2 = 0;
//         for (int k = i + 1; k < n; k++)
//             sum2 += a[k];
//         if (sum1 == sum2)
//             return i;
//     }
//     return -1;
// }

// //input: mảng 2 chiều gồm rows và cols
// //output: chuỗi gồmcác phần tử theo quy tắc sau
// /*
// input
// 12 12 2019
// 11 11 2020
// -1 -2 -3
// 45 67 89
// =>output: "12 12 2019\n 11 11 2020\n -1 -2 -3\n 45 67 89\n"
// */

// // int matrix(int a[][100], int rows, int cols, char s[])
// // {
// //     s[0] = 0; //s = ""
// //     for (int i = 0; i < rows; i++)
// //     {
// //         for (int j = 0; j < cols; j++)
// //         {
// //             strcat(s, itoa(a[i][j]));
// //             strcat(s, " ");
// //         }
// //         strcat(s, "\n")
// //     }
// // }


// //tìm chu vi của da giác có 5 đỉnh

// struct DIEM
// {
//     float x,y;
// };
// struct DAGIAC
// {
//     DIEM a[100]; // mảng điểm 2D
//     int n; // số đỉnh
// };

// float distance(DIEM A, DIEM B)
// {
//     //tính khoảng cách = công thức căn bình phương gì gì đó:))
// }



// int main()
// {
//     int a[] = {7, 1, 2, 3, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     //cout << Find(a, n);
//     char s[] = "10";
//     return 0;
// }