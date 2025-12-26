
#include <iostream>
#include <ctime>
using namespace std;

// прототип фунции место расположения самой функции теперь может быть как до так и после main
void sum(int a);

int main() {

	sum(5);

	return 0;
}

void sum(int a) {
	a++; 
}