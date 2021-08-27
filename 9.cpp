//@Author MAYANK YADAV
//C++ code to count digits of a number

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a number : ";
	int num;
	cin >> num;

	int loopVar;
	int numOfDigits;

	//while loop:
	numOfDigits = 0;
	loopVar = num;
	
	while(loopVar > 0)
	{
		loopVar /= 10; // loopVar = loopVar/10;
		numOfDigits++; // numOfDigits = numOfDigits + 1;
	}
	
	cout << "Number of digits == " << numOfDigits << endl;

	//do-while loop:
	numOfDigits = 0;
	loopVar = num;
	
	do
	{
		loopVar /= 10; // loopVar = loopVar/10;
		numOfDigits++; // numOfDigits = numOfDigits + 1;
	}while(loopVar > 0);

	cout << "Number of digits == " << numOfDigits << endl;

	//for loop
	numOfDigits = 0;
	
	for(loopVar = num; loopVar > 0; loopVar /= 10)
	{
		numOfDigits++;
	}

	cout << "Number of digits == " << numOfDigits << endl;

	return 0;

}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
