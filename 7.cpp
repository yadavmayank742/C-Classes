//@Author MAYANK YADAV
//C++ code to find sum of square of first N natural Numbers

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter N : ";
	int N;
	cin >> N;

	float sum;
	int loopVar;

	//while loop:
	loopVar = 1;
	sum = 0;
	
	while(loopVar <= N)
	{
		sum += loopVar*loopVar;
		loopVar++;
	}
	cout << "Sum of squares == " << sum << endl;


	//do-while loop:
	loopVar = 1;
	sum = 0;
	
	do
	{
		sum += loopVar*loopVar;
		loopVar++;
	}while(loopVar <= N);
	
	cout << "Sum of squares == " << sum << endl;
	
	//for loop
	sum = 0;
	
	for(loopVar = 1; loopVar <= N; loopVar++)
	{
		sum += loopVar*loopVar;
	}

	cout << "Sum of squares == " << sum << endl;

	return 0;
	
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
