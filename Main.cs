/*
Write a program which accept one number from user and print that number of
even numbers on screen.
*/

using System;

class ArithmeticX
{
	public

	void PrintEven(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		for(int i = 1; i <= iNo; i++)
		{
			Console.Write(i*2+"\t");
		}
		Console.WriteLine();
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		aobj.PrintEven(iValue);
	}
}