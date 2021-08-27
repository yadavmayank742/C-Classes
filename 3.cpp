//@Author MAYANK YADAV
// C++ code to print first N even natural numbers;

#include<iostream>

using namespace std;

int main()
{
	cout << "Enter N : ";
	int N;
	cin >> N;

	int loopVar;

	//while loop:
	loopVar = 1;

	while(loopVar <= N)
	{
		cout << loopVar*2 << " ";
		loopVar++ ; // loopVar = loopVar + 1; or loopVar += 1;
	}
	cout << endl;

	//do-while loop:
	loopVar = 1;
	do
	{
		cout << loopVar*2 << " ";
		loopVar++;
	}while(loopVar <= N);

	cout << endl;

	//for loop:

	for(loopVar = 1; loopVar <= N; loopVar++)
	{
		cout << loopVar*2 << " ";
	}
	cout << endl;

	return 0;

}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
