/*
Write a program which accept one number from user and print that number of
even numbers on screen.
*/

#include <iostream>

using namespace std;

class ArithmeticX
{
public:
	void PrintEven(int);
};

void ArithmeticX::PrintEven(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(int i = 1; i <= iNo; i++)
	{
		printf("%d\t",i*2);
	}
	printf("\n");
}

int main()
{
	int iValue = 0;

	cout<<"Enter Number"<<endl;
	cin>>iValue;

	ArithmeticX aobj;

	aobj.PrintEven(iValue);

	return 0;
}