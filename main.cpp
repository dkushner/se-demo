#include "arrays.h"

int main()

	const int size = 100;
	int array[size];
	fill_array(array, size);
	cout << "array:" << endl;
	print_array(array, size);
	cout << endl;
	cout << "found primes in array:" << endl;
	print_primes(array, size);
	cout << endl;
	squares(array, size);
	print_array(array, size);
	cout << endl;
	int total = sum(array, size);
	cout << "sum of squares of elements: " << total << endl;
	return 0;
}
