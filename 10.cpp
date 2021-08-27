//@Author MAYANK YADAV
//C++ code to check if given character is uppercase letter, lowercase letter, digit, or special character.

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a character : ";
	char ch;
	cin >> ch;

	int ascii = int(ch);

	if(ascii >= 65 && ascii <= 90)
		cout << ch << " is uppercase letter\n";
	else if(ascii >= 97 && ascii <= 122)
		cout << ch << " is lowercase letter\n";
	else if(ascii >=48 && ascii <= 57 )
		cout << ch << " is a digit\n";
	else
		cout << ch << " is a special character\n";

	return 0;
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
