//@Author MAYANK YADAV
//C++ code to find sum of digits in a number

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a number : ";
	int num;
	cin >> num;

	int loopVar;
	int sumOfDigits;

	//while loop:
	sumOfDigits = 0;
	loopVar = num;
	
	while(loopVar > 0)
	{
		sumOfDigits += loopVar % 10; // sumOfDigits = sumOfDigits + loopVar%10;
		loopVar /= 10; // loopVar = loopVar/10;
	}
	
	cout << "Sum of digits == " << sumOfDigits << endl;

	//do-while loop:
	sumOfDigits = 0;
	loopVar = num;
	
	do
	{
		sumOfDigits += loopVar % 10; // sumOfDigits = sumOfDigits + loopVar%10;
		loopVar /= 10; // loopVar = loopVar/10;
	}while(loopVar > 0);

	cout << "Sum of digits == " << sumOfDigits << endl;

	//for loop
	sumOfDigits = 0;
	
	for(loopVar = num; loopVar > 0; loopVar /= 10)
	{
		sumOfDigits += loopVar % 10; // sumOfDigits = sumOfDigits + loopVar%10;
	}

	cout << "Sum of digits == " << sumOfDigits << endl;

	return 0;

}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
