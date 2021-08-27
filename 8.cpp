//@Author MAYANK YADAV
//C++ code to swap value of two int variables

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a Nuber : ";
	int num1;
	cin >> num1;

	cout << "Enter another Nuber : ";
	int num2;
	cin >> num2;

	cout << "variables before swap :\t" << num1 << "\t" << num2 << endl;

	//Swap code
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "variables after swap :\t" << num1 << "\t" << num2 << endl;

	return 0;

}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
