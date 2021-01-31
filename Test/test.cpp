#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Employee
{
    string name;
    string position;
    int sales;
};



struct NODE
{
    Employee data;
    NODE *pNext;
};

struct LIST
{
    NODE *pHead;
    NODE *pTail;
};

void readEmployee(ifstream &fileIn, Employee &nv)
{
    getline(fileIn, nv.name, ',');
    getline(fileIn, nv.position, ',');
    fileIn >> nv.sales;
}

void readFile(ifstream &fileIn, vector<Employee> &dsnv, int &n)
{
    fileIn>>n;
    for(int i = 0; i<n; i++)
    {
        Employee nv;
        readEmployee(fileIn, nv);
        dsnv.push_back(nv);
    }    
}

void Init(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

NODE *createNode(Employee data)
{
    NODE *p = new NODE;
    if (p == NULL)
        return NULL; // khong du bo nho de cap phat
    p->data = data;
    p->pNext = NULL;
    return p;
}
NODE* addTail(LIST& l, Employee data)
{
	NODE* p = createNode(data);
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
	return p;
}

void addList(LIST L, vector <Employee> dsnv, int n)
{
    for(int i = 0; i<n; i++)
    {
        addTail(L, dsnv[i]);
    }
}
void outputList(LIST l)
{
    for (NODE *i = l.pHead; i != NULL; i = i->pNext)
    {
        cout<<i->data.name<<endl;
        cout<<"position: "<<i->data.position<<endl;
        cout<<"sales: "<<i->data.sales<<endl;
    }
}

void topSales(LIST L, int n)
{
    for(int i = 0; i<n; i++)
    {
        
    }
}

int main(int argc, char const *argv[])
{
    ifstream fileIn;
    LIST l;
	Init(l);
    vector<Employee> dsnv;
    int n;
    fileIn.open("data.txt", ios_base::in);
    readFile(fileIn, dsnv, n);
    addList(l, dsnv, n);
    outputList(l);
    
    fileIn.close();
    return 0;
}


