#include"completionArray.h"

void completionArray(int arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = rand() % 20 - 10;
	}
}
void completionArray(double arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = i + 0.1;
	}
}
void completionArray(char arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = 'a' + i;
	}
}