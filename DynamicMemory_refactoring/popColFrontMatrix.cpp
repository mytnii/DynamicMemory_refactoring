#include"popColFrontMatrix.h"

void popColFrontMatrix(int**& matrix, int row, int& column)
{

	for (int i = 0; i < row; i++)
	{
		int* matrix2 = new int[column - 1];
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[j] = matrix[i][j + 1];
		}
		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	column--;
}
void popColFrontMatrix(double**& matrix, int row, int& column)
{
	column++;

	for (int i = 0; i < row; i++)
	{
		double* matrix2 = new double[column - 1];
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[j] = matrix[i][j + 1];
		}
		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	column--;
}
void popColFrontMatrix(char**& matrix, int row, int& column)
{
	column++;

	for (int i = 0; i < row; i++)
	{
		char* matrix2 = new char[column - 1];
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[j] = matrix[i][j + 1];
		}
		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	column--;
}
