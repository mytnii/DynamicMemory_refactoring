#include"beginningArray.h"

void beginningArray(int*& arr, int num)
{
	int* arr2 = new int[num];

	arr2[0] = 0;

	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i + 1] = arr[i];
	}


	delete[] arr;

	arr = arr2;
}
void beginningArray(double*& arr, int num)
{
	double* arr2 = new double[num];

	arr2[0] = num + 0.1;

	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i + 1] = arr[i];
	}


	delete[] arr;

	arr = arr2;
}
void beginningArray(char*& arr, int num)
{
	char* arr2 = new char[num];

	arr2[0] = 'a' + num;

	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i + 1] = arr[i];
	}


	delete[] arr;

	arr = arr2;
}