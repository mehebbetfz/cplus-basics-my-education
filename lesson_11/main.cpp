
#include <iostream>
#include <ctime>
using namespace std;


// random
int main() {
	srand(time(NULL)); // используем время для seed 

	int a = rand() % 10 + 5; // от 5 -> 10

	cout << a << endl;
}