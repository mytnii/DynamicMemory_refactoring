#include"eraseColMatrix.h"

void eraseColMatrix(int**& matrix, int row, int& column, int index)
{

	for (int i = 0; i < row; i++)
	{
		int* matrix2 = new int[column - 1];

		for (int j = 0; j < index; j++)
		{
			matrix2[j] = matrix[i][j];
		}

		for (int j = index; j < column - 1; j++)
		{
			matrix2[j] = matrix[i][j + 1];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	column--;
}
void eraseColMatrix(double**& matrix, int row, int& column, int index)
{
	column++;

	for (int i = 0; i < row; i++)
	{
		double* matrix2 = new double[column - 1];

		for (int j = 0; j < index; j++)
		{
			matrix2[j] = matrix[i][j];
		}

		for (int j = index; j < column - 1; j++)
		{
			matrix2[j] = matrix[i][j + 1];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	column--;
}
void eraseColMatrix(char**& matrix, int row, int& column, int index)
{
	column++;

	for (int i = 0; i < row; i++)
	{
		char* matrix2 = new char[column - 1];

		for (int j = 0; j < index; j++)
		{
			matrix2[j] = matrix[i][j];
		}

		for (int j = index; j < column - 1; j++)
		{
			matrix2[j] = matrix[i][j + 1];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	column--;
}