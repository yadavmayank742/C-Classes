//@Author MAYANK YADAV
//C++ code to print N natural numbers in reverse order

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter N : ";
	int N;
	cin >> N;

	int loopVar;

	//while loop:
	loopVar = N;
	
	while(loopVar > 0)
	{
		cout << loopVar << " ";
		loopVar = loopVar - 1;
	}
	
	cout << endl;

	//do-while loop:
	loopVar = N;
	
	do
	{
		cout << loopVar << " ";
		loopVar = loopVar - 1;
	}while(loopVar > 0);

	cout << endl;

	//for loop:
	for(loopVar=N; loopVar > 0; loopVar = loopVar - 1)
	{
		cout << loopVar << " ";
	}
	
	cout << endl;


	return 0;
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
