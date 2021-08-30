//@Author MAYANK YADAV
//C++ code to check if a given number is prime or not

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a number : ";
	int num;
	cin >> num;

	int loopVar;
	int remainder;

	//while loop:
	loopVar = 2;
	remainder = 1;

	while(loopVar < num)
	{
		remainder = num % loopVar;
		if(remainder == 0)
		{
			cout << "It is not a Prime Number\n";
			break;
		}
		loopVar ++ ;
	}
	if(remainder != 0)
		cout << "It is Prime Number\n";

	//do-while loop:
	loopVar = 2;
	remainder = 1;

	do
	{
		remainder = num % loopVar;
		if(num !=2 and remainder == 0)
		{
			cout << "It is not a Prime Number\n";
			break;
		}
		loopVar++;
	}while(loopVar < num);

	if(num==2 or remainder != 0)
		cout << "It is Prime Number\n";

	//for loop:
	for(loopVar=2, remainder=1; loopVar < num; loopVar++)
	{
		remainder = num % loopVar;
		if(remainder == 0)
		{
			cout << "It is not a Prime Number\n";
			break;
		}
	}

	if(remainder != 0)
 		cout << "It is Prime Number\n";


	return 0;
}
