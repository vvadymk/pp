#include<iostream>
using namespace std;

#include "Sorting.h"

/*
Developed by Kochmar Vadym
*/

int main(void)
{
	cout << "First test:" << endl;
	cout << endl;
	const size_t size = 20;
	int arr[size];

	fillArray(arr, size);
	printArray(arr, size);
	insertionSort(arr, size);
	printArray(arr, size);

	cout << endl;
	cout<<"Second test:" << endl;
	cout << endl;

	const size_t size2 = 10;
	int arr2[size2];
	
	fillArray(arr2, size2);
	printArray(arr2, size2);
	insertionSort(arr2, size2);
	printArray(arr2, size2);
	
	cout << endl;
	cout<<"Third test:" << endl;
	cout << endl;

	const size_t size3 = 5;
	int arr3[size3];

	fillArray(arr3, size3);
	printArray(arr3, size3);
	insertionSort(arr3, size3);
	printArray(arr3, size3);

	cout << endl;
	cout << "Fourth test:" << endl;
	cout << endl;

	const size_t size4 = 3;
	int arr4[size4];

	fillArray(arr4, size4);
	printArray(arr4, size4);
	insertionSort(arr4, size4);
	printArray(arr4, size4);

	return 0;
}