
#include <iostream>
using namespace std;

// GOTO
int main()
{
	cout << "Hello 1" << endl;

	goto link; // код перескочит 12, 14 строки кода

	cout << "Hello 2" << endl;

	cout << "Hello 3" << endl;

	link: 

	cout << "Hello 4" << endl;

	cout << "Hello 5" << endl;
}