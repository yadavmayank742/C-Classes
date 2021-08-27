//@author MAYANK YADAV
//C++ code to find factorial of a number

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter Number : ";
	int num;
	cin >> num;

	int loopVar;
	double fact;

	//while loop
	loopVar = 1;
	fact = 1;

	while(loopVar <= num)
	{
		fact = fact * loopVar;
		loopVar ++ ;
	}
	cout << "Factorial == " << fact << endl;

	//do-while loop
	loopVar = 1;
	fact = 1;

	do
	{
		fact = fact * loopVar;
		loopVar ++ ;
	}while(loopVar <= num);

	cout << "Factorial == " << fact << endl;

	//for loop
	fact = 1;

	for(loopVar = 1; loopVar <= num; loopVar++)
		fact *= loopVar;

	cout << "Factorial == " << fact << endl;


	return 0;
	
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
