#include"eraseArray.h"

void eraseArray(int*& arr, int num, int index)
{
	int* arr2 = new int[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	for (int i = index; i < num; ++i)
	{
		arr2[i - 1] = arr[i];
	}



	delete[] arr;

	arr = arr2;
}
void eraseArray(double*& arr, int num, int index)
{
	double* arr2 = new double[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	for (int i = index; i < num; ++i)
	{
		arr2[i - 1] = arr[i];
	}



	delete[] arr;

	arr = arr2;
}
void eraseArray(char*& arr, int num, int index)
{
	char* arr2 = new char[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	for (int i = index; i < num; ++i)
	{
		arr2[i - 1] = arr[i];
	}



	delete[] arr;

	arr = arr2;
}