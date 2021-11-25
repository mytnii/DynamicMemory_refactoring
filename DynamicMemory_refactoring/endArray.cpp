#include"endArray.h"

void endArray(int*& arr, int& num)
{
	int* arr2 = new int[num];



	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i] = arr[i];
	}

	arr2[num - 1] = 0;


	delete[] arr;

	arr = arr2;

}
void endArray(double*& arr, int& num)
{
	double* arr2 = new double[num];



	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i] = arr[i];
	}

	arr2[num - 1] = num + 0.1;


	delete[] arr;

	arr = arr2;

}
void endArray(char*& arr, int& num)
{
	char* arr2 = new char[num];



	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i] = arr[i];
	}

	arr2[num - 1] = 'a';


	delete[] arr;

	arr = arr2;

}