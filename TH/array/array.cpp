// #include <iostream>
// using namespace std;
// #define MAX 100
// void inputSize(int a[], int &n)
// {
//     cout << "Entrez la taille du tableau: ", cin >> n;
//     if (n > MAX)
//     {
//         cout << "Tableau est portee" << endl;
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << "a[" << i << "] = ";
//         cin >> a[i];
//     }
// }

// // void input_0_Size(int a[], int &n)
// // {
// //     n = 0;
// //     char choose = 'y';
// //     do
// //     {

// //         cout << "a[" << n << "] = ";
// //         cin >> a[n];
// //         n++;
// //         if (n == MAX)
// //         {
// //             cout << "La limite du tableau est atteinte";
// //             return;
// //         }

// //         cout << "Continuez? (Y ou N)";
// //         choose = getchar();

// //     } while (choose == 'Y' || choose == 'y');
// // }

// // void Input(int a[], int n)
// // {
// //     int choose;
// //     cout << "Entrez votre option: " << endl;
// //     cout << "\tAppuyez sur 1 si vous souhaitez choisir vous-meme la taille du tableau" << endl;
// //     cout << "\t            2 si vous ne connaissez pas la taille du tableau a l'avance" << endl;
// //     cout << "Votre option: ", cin >> choose;

// //     if (choose == 1)
// //         inputSize(a, n);
// // }

// void Print(int a[], int n)
// {
//     cout << "Votre tableau est: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << "\t";
//     }
// }

// int tongKhongAm(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] >= 0)
//             sum += a[i];
//     }
//     return sum;
// }

// int tongChia3(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 3 == 0)
//             sum += a[i];
//     }
//     return sum;
// }
// int soDau(int n)
// {
//     int temp;
//     do
//     {
//         temp = n % 10;
//         n /= 10;
//     } while (n > 0);
//     return temp;
// }
// int tongSoDauLe(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (soDau(a[i]) % 2 != 0)
//         {
//             sum += a[i];
//         }
//     }
//     return sum;
// }

// bool checkChinhPhuong(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         if (i * i == n)
//             return true;
//     }
//     return false;
// }

// int tongChinhPhuong(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (checkChinhPhuong(a[i]))
//         {
//             sum += a[i];
//         }
//     }
//     return sum;
// }

// int binarySearch(int a[], int n, int key)
// {
//     int left = 0, right = n - 1;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;

//         if (a[mid] == key)
//             return mid;
//         if (a[mid] < key)
//             left = mid + 1;
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }

// int binary2(int a, int l, int m, int x)
// {
//     int l = 0, r = n - 1, m = (l + r)/2;
//     if (a[m] == x)
//         return m;
//     if (a[m] > x)
//         return binary2(a, l, m - 1, x);
//     else
//     {
//         return binary2(a, m + 1, r, x);
//     }
// }
// int main()
// {
//     int n = 11;
//     int a[MAX] = {5, 2, 7, 1, 8, 10, 20, -5, 2, 55, 4};
//     //inputSize(a, n);
//     Print(a, n);
//     //cout << "Tong cac so ko am: " << tongKhongAm(a, n);
//     //cout << "Tong cac so chia het cho 3: " << tongChia3(a, n);
//     cout << "\nTong cac so co so dau chia het cho 3: " << tongSoDauLe(a, n);
//     cout << "\nTong cac so co chinh phuong: " << tongChinhPhuong(a, n);
//     int b[] = {1, 2, 3, 4};
//     cout << binary2(b, 4, 2);
//     return 0;
// }