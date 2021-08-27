//@Author MAYANK YADAV
//C++ code to Calculate Simple Interest

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter Priciple Amount : ";
	float principle;
	cin >> principle;

	cout << "Enter Rate of Interest : ";
	float rate;
	cin >> rate;

	cout << "Enter Time Period : ";
	float time;
	cin >> time;

	float simple_interest = (principle * time * rate) / 100;

	cout << "Simple Interest == " << simple_interest << endl;

	return 0;

}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
