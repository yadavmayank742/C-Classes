//@Author MAYANK YADAV
//C++ code to print first N natural numbers;

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter N : ";
	int N;
	cin >> N;

	//while loop :

	int i=1;
	while(i<=N)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;

	//do-while loop

	int j = 1;
	do
	{
		cout << j << " ";
		j++;
	}while(j<=N);
	cout << endl;

	//for loop

	for(int k=1; k<=N; k++)
		cout << k << " ";
	cout << endl;
	
	return 0;
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
