#include"PrintArray.h"

void printArray(int arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}
void printArray(double arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}
void printArray(char arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i];
	}
	cout << endl << endl;
}