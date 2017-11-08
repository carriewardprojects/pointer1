// pointer1.cpp : A simple program that uses a pointer to return the memory address of a variable
//

#include <iostream>
using namespace std;


int main()
{
	int x = 25;
	cout << "The address of x is " << &x << endl;
	cout << "The size of x is " << sizeof(x) << " bytes" << endl;
	cout << "The value stored in x is " << x << endl;

	cin.ignore();
	cin.get();

    return 0;
}
