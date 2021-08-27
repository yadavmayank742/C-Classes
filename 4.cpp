//@Author MAYANK YADAV
//C++ code to find nature of roots of a quadratic equation.

#include<iostream>
using namespace std;

int main()
{
	cout << "A quadratic equation has the form : ax² + bx +c\n";
	cout << "enter a : ";
	float a;
	cin >> a;
	
	cout << "enter b : ";
	float b;
	cin >> b;
	
	cout << "enter c : ";
	float c;
	cin >> c;

	//nature of root depends on (b² - 4ac) aka discriminant;

	float discriminant = b*b - 4*a*c;

	if(discriminant >= 0)
		cout << "The equation has real roots\n";
	else
		cout << "The equation has imaginary roots\n";

	return 0;
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
