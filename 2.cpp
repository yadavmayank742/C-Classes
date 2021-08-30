//@author MAYANK YADAV
//C++ code to print all prime numbers between two numbers

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter First Number : ";
	int num1;
	cin >> num1;
	
	cout << "Enter Second Number : ";
	int num2;
	cin >> num2;

	int outerLoopVar, innerLoopVar;
	int remainder;

	cout << "Primes between the given numbers are :\n";
	//while loop:
	outerLoopVar = num1;

	while(outerLoopVar <= num2)
	{
		innerLoopVar = 2;
		while(innerLoopVar < outerLoopVar)
		{
			remainder = outerLoopVar % innerLoopVar;
			if(remainder == 0)
				break;

			innerLoopVar++;
		}
		if(remainder != 0)
			cout << outerLoopVar << " ";

		outerLoopVar++;
	}

	cout << endl;
	
	//do-while loop:
	outerLoopVar = num1;
	do
	{
		innerLoopVar = 2;
		remainder = 1;

		do
		{
			remainder = outerLoopVar % innerLoopVar;
			if(outerLoopVar !=2 and remainder == 0)
				break;

			innerLoopVar++;
		}while(innerLoopVar < outerLoopVar);

		if(outerLoopVar==2 or remainder != 0)
			cout << outerLoopVar << " ";

		outerLoopVar++;
	}while(outerLoopVar <= num2);

	cout << endl;

	//for loop:
	remainder = 1;

	for(outerLoopVar=num1; outerLoopVar <= num2; outerLoopVar++)
	{
		for(innerLoopVar=2; innerLoopVar < outerLoopVar; innerLoopVar++)
		{
			remainder = outerLoopVar % innerLoopVar;
			if(remainder == 0)
				break;
		}
		if(remainder != 0)
			cout << outerLoopVar << " ";
	}

	cout << endl;
	return 0;
	
}