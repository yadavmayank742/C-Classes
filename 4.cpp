//@Author MAYANK YADAV
//C++ code to calculate area of a circle

#include<iostream>
using namespace std;

//There are 2 approaches to do it:
//First Method [without including math library] :

// #define PI 3.1428

int main()
{
    cout << "Enter Radius of the Circle : ";
    float rad;
    cin >> rad;
    
    float area = PI*rad*rad;

    cout << "Area == " << area << endl;

    return 0;
}

//Second Method [by including math library]:

#include<math.h>

int main()
{
	cout << "Enter Radius : ";
	float rad;
	cin >> rad;

	float area = M_PI * pow(rad, 2); //Documentation : https://www.gnu.org/software/libc/manual/html_node/Mathematical-Constants.html
	cout << "Area == " << area << endl;

    return 0;
}


//Connect with me @yadavmayank742 over all social media [IG, Twitter, LinkedIn etc...]
