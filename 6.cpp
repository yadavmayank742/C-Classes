//@Author MAYANK YADAV
//C++ code to print table of user's choice

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a number : ";
	float num;
	cin >> num;

	int loopVar;

	//while loop:
	cout << "Table of " << num << " is :\n";
	loopVar = 1;
	while(loopVar <= 10)
	{
		cout << loopVar * num << endl;
		loopVar ++ ;
	}

	//do-while loop:
	cout << "Table of " << num << " is :\n";
	loopVar = 1;
	do
	{
		cout << loopVar * num << endl;
		loopVar ++ ;
	}while(loopVar <= 10);

	//for loop
	cout << "Table of " << num << " is :\n";
	for(loopVar = 1; loopVar <= 10; loopVar++)
	{
		cout << loopVar * num << endl;
	}

	return 0;
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
