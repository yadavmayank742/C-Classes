//@Author MAYANK YADAV
//C++ code to find sum of first N natural Numbers

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter N : ";
	int N;
	cin >> N;

	int loopVar;
	float sum;

	//while loop:
	loopVar = 1;
	sum = 0;

	while(loopVar <= N)
	{
		sum = sum + loopVar;
		loopVar++;
	}
	cout << "Sum == " << sum << endl;

	//do-while loop:
	loopVar = 1;
	sum = 0;

	do
	{
		sum += loopVar; //sum = sum + loopVar;
		loopVar++ ;
	}while(loopVar <= N);
	cout << "Sum == " << sum << endl;

	//for loop:
	sum = 0;
	for(loopVar = 1; loopVar <= N; loopVar++)
	{
		sum += loopVar;
	}
	cout << "Sum == " << sum << endl;


	return 0;

}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
