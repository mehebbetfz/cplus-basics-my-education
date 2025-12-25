
#include <iostream>
using namespace std;


// sizeof - определяет обьем занимаемый в памяти
int main() {
	const int SIZE = 10;

    cout << sizeof(SIZE) << endl;

    int[] array = {1, 3, 4};

    cout << sizeof(arr) << endl; // не количество а обьем который он занимает
    cout << sizeof(arr)/sizeof(int) << endl; // покажет уже количество
}