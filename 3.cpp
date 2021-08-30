//@Author MAYANK YADAV
//C++ code to print first N terms of a Fibonacci Series

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter Number of terms: ";
	int N;
	cin >> N;

	int loopVar;
	int currentTerm, lastTerm, secondLastTerm;

	cout << "Terms are :\n";

	//while loop;
	loopVar = 1;
	lastTerm = 1;
	secondLastTerm = -1;

	while(loopVar <= N)
	{
		currentTerm = lastTerm + secondLastTerm;
		cout << currentTerm << " ";
		secondLastTerm = lastTerm;
		lastTerm = currentTerm;
		loopVar++;
	}

	cout << endl;

	//do-while loop:
	loopVar = 1;
	lastTerm = 1;
	secondLastTerm = -1;

	do
	{
		currentTerm = lastTerm + secondLastTerm;
		cout << currentTerm << " ";
		secondLastTerm = lastTerm;
		lastTerm = currentTerm;
		loopVar++;
	}while(loopVar <= N);

	cout << endl;

	//for loop:
	lastTerm = 1;
	secondLastTerm = -1;

	for(loopVar = 1; loopVar <= N; loopVar++)
	{
		currentTerm = lastTerm + secondLastTerm;
		cout << currentTerm << " ";
		secondLastTerm = lastTerm;
		lastTerm = currentTerm;
	}

	cout << endl;
	return 0;
}