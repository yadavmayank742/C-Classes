//@Author MAYANK YADAV
//C++ code to check if a given number is Octal number or not

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a number : ";
	int num;
	cin >> num;

	//all the digits shall be in range [0, 7] for octal number

	int isOctal = 1; //true

	while(num > 0)
	{
		if(num%10 > 7)
		{
			isOctal = 0; //flase;
			break;
		}

		num = num/10;
	}

	if(isOctal)
		cout << "given number is octal\n";
	else
		cout << "given number is not octal\n";

	return 0;
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
