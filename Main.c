/*
Write a program which accept one number from user and print that number of
even numbers on screen.
*/

#include<stdio.h>

void PrintEven(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iCnt = 1;

	while(iNo >= 1)
	{
		if(iCnt % 2 == 0)
		{
			printf("%d\t",iCnt);
			iNo -= 1;
		}
		iCnt += 1;
	}
	printf("\n");
}

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;
}