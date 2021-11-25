#include"insertArray.h"

void insertArray(int*& arr, int num, int index)
{
	int* arr2 = new int[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	arr2[index - 1] = 0;

	for (int i = num - 1; i >= index; --i)
	{
		arr2[i] = arr[i - 1];
	}

	delete[] arr;

	arr = arr2;
}
void insertArray(double*& arr, int num, int index)
{
	double* arr2 = new double[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	arr2[index - 1] = index + 0.1;

	for (int i = num - 1; i >= index; --i)
	{
		arr2[i] = arr[i - 1];
	}

	delete[] arr;

	arr = arr2;
}
void insertArray(char*& arr, int num, int index)
{
	char* arr2 = new char[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	arr2[index - 1] = 'a' + index;

	for (int i = num - 1; i >= index; --i)
	{
		arr2[i] = arr[i - 1];
	}

	delete[] arr;

	arr = arr2;
}