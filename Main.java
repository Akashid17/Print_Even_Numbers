/*
Write a program which accept one number from user and print that number of
even numbers on screen.
*/

import java.lang.*;
import java.util.*;

class ArithmeticX
{
	void PrintEven(int iNo)
	{
		if(iNo < 0)
			iNo = -iNo;
		
		int iCnt = 1;

		while(iNo != 0)
		{
			if(iCnt % 2 == 0)
			{
				System.out.print(iCnt+"\t");
				iNo--;
			}

			iCnt++;
		}
		System.out.println();
	}
}


class Main
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number");

		int iValue = sobj.nextInt();

		ArithmeticX aobj = new ArithmeticX();
		aobj.PrintEven(iValue);

	}
}