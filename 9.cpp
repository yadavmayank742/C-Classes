//@Author MAYANK YADAV
//C++ code to find the greates of 3 numbers

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a number : ";
	int num1;
	cin >> num1;

	cout << "Enter second number : ";
	int num2;
	cin >> num2;

	cout << "Enter third number : ";
	int num3;
	cin >> num3;

	if(num1 > num2 and num1 > num3)
		cout << num1 << " is the greatest among all given numbers\n";
	else if(num2 > num1 and num2 > num3)
		cout << num2 << " is the greatest among all given numbers\n";
	else
		cout << num3 << " is the greatest among all given numbers\n";

	return 0;
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
