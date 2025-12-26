
#include <iostream>
#include <ctime>
using namespace std;

void foo() {
	cout << "Iam function" << endl;
}

int sum(int a, int b) {
	return a + b;
}

// functions
int main() {
	foo();

	int result = sum(2, 3);

	cout << "Result: " << result << endl;

	return 0;
}