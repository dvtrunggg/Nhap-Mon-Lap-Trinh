#include <queue>
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct NODE
{
    int key;
    NODE *p_left;
    NODE *p_right;
};

void readFile(ifstream &fileIn, vector<int> a)
{

    while (!fileIn.eof())
    {
        int temp;
        fileIn >> temp;
        a.push_back(temp);
    }
}
void Output(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }
}
// tao 1 cay
void CreateTree(NODE *&t)
{
    t = NULL;
}
NODE *CreateNode(int data)
{
    NODE *root = new NODE;
    root->key = data;
    root->p_left = root->p_right = NULL;
    return root;
}
void LRN(NODE *p_root)
{
    if (p_root == NULL)
        return;
    else
    {
        LRN(p_root->p_left);
        LRN(p_root->p_right);
        
    }
}
// them phan tu
void Insert(NODE *&p_root, int x)
{
    if (p_root == NULL)
        p_root = CreateNode(x);
    else
    {
        if (x > p_root->key) // x > root
            Insert(p_root->p_right, x);
        if (x < p_root->key) // x < root
            Insert(p_root->p_left, x);
    }
}
void insertVector(NODE *&p_root, vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        Insert(p_root, a[i]);
    }
}



void writeFile(NODE *&p_root, ofstream &fileOut, vector<int> a)
{
    LRN(p_root);
    for (int i = 0; i < a.size(); i++)
    {
        fileOut << a[i];
    }
}
int main(int argc, char const *argv[])
{
    ifstream fileIn;
    vector<int> a;
    fileIn.open("input.txt", ios_base::in);
    readFile(fileIn, a);

    fileIn.close();
    return 0;
}
