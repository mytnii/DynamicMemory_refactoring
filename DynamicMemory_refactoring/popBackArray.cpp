#include"popBackArray.h"

void popBackArray(int*& arr, int num)
{
	int* arr2 = new int[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i];
	}

	delete[] arr;

	arr = arr2;
}
void popBackArray(double*& arr, int num)
{
	double* arr2 = new double[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i];
	}

	delete[] arr;

	arr = arr2;
}
void popBackArray(char*& arr, int num)
{
	char* arr2 = new char[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i];
	}

	delete[] arr;

	arr = arr2;
}