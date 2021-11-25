#include"allocateMatrix.h"

int** allocateMatrix(int row, int column)
{
	int** matrix = new int* [row];

	for (int i = 0; i < row; ++i)
	{
		matrix[i] = new int[column];
	}

	return matrix;
}
double** allocateMatrix(double arr[], int row, int column)
{
	double** matrix = new double* [row];

	for (int i = 0; i < row; ++i)
	{
		matrix[i] = new double[column];
	}

	return matrix;
}
char** allocateMatrix(char arr[], int row, int column)
{
	char** matrix = new char* [row];

	for (int i = 0; i < row; ++i)
	{
		matrix[i] = new char[column];
	}

	return matrix;
}
