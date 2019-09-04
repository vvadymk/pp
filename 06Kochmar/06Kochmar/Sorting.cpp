#include<iostream>
#include<cassert>
#include <ctime>

/*
	Developed by Kochmar Vadym
*/

bool checkElements(int arr[], int *arr2, size_t size)
{
	unsigned int k = 0;
	for (int i = 0; i < size; i++) {
	
		for (int j = 0; j < size; j++) {
			if (arr[i] == arr2[j]) {
				k++;
				break;
			}
		}
		
	}
	
	if (k == size) {
		return true;
	}
	else {
		return false;
	}

}

void copyArr(int arr[], int *arr2, size_t size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}
}

void insertionSort(int arr[], size_t size)
{
	int* arrCop = new int[size];
	copyArr(arr, arrCop, size);
	int key, j;
	for (int i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;

	
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}

	assert(checkElements(arr, arrCop, size));
}

void fillArray(int  arr[], size_t size)
{

	int num;
	for (unsigned int i = 0; i < size; i++)
	{
		num = -10000 + rand() % 1000000;
		arr[i] = num;
	}
}

void printArray(int arr[], size_t size)
{

	for (unsigned int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}


