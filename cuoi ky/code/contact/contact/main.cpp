#include"contact.h"

int main()
{
	ifstream fileIn;
	contact inf;
	fileIn.open("input.txt", ios_base::in);
	readFile(fileIn, inf);
	fileIn.close();
	//Print(inf);

	return 0;
}