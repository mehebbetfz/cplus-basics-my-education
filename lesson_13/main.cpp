
#include <iostream>
#include <ctime>
using namespace std;

// functions передача по значению
void sum(int a) {
	a++; // увеличивает переменную которая находится в функции sum
}

int main() {
	int a = 4; // эта не меняется
	
	sum(a); 

	return 0;
}