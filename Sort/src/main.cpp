#include <iostream>
#include "MergeSort.h"

using namespace std;

int main() {
	cout << "Sorting Algorithm" << endl; // prints Sorting Algorithm
	int A[10] = { 38, 23, 1 , 2, 11, 8, 4, 9, 1, 10};
	mergesort(A, 0, 9);

	for(int i=0 ; i<10 ; i++)
		cout << A[i] << ",";
	cout << endl;
	return 0;
}
