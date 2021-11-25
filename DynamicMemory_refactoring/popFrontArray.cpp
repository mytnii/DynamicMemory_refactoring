#include"popFrontArray.h"

void popFrontArray(int*& arr, int num)
{
	int* arr2 = new int[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i + 1];
	}

	delete[] arr;

	arr = arr2;
}
void popFrontArray(double*& arr, int num)
{
	double* arr2 = new double[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i + 1];
	}

	delete[] arr;

	arr = arr2;
}
void popFrontArray(char*& arr, int num)
{
	char* arr2 = new char[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i + 1];
	}

	delete[] arr;

	arr = arr2;
}