//@Author MAYANK YADAV
//C++ code to check if a triangle is right angled or not

#include<iostream>
#include<math.h>
//note that this can be done without math libraray, try that as homework.
using namespace std;

int main()
{
	cout << "Enter side 1 : ";
	float side1;
	cin >> side1;

	cout << "Enter side 2 : ";
	float side2;
	cin >> side2;
	
	cout << "Enter side 3 : ";
	float side3;
	cin >> side3;

	float hypotenus, base, height;

	if(side1 > side2 && side1 > side3)
	{
		hypotenus = side1;
		base = side2;
		height = side3;
	}

	else if(side2 > side1 && side2 > side3)
	{
		hypotenus = side2;
		base = side3;
		height = side1;
	}

	else
	{
		hypotenus = side3;
		base = side1;
		height = side2;
	}

	//now we know base, hypotenus, and height, so let's check Pythagorus Theorem

	if( pow(hypotenus, 2) == pow(base, 2) + pow(height, 2) )
		cout << "These are sides of a Right angled triangle\n";
	else
		cout << "These are not the sides of a Right angled triangle\n";

	return 0;
	
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
