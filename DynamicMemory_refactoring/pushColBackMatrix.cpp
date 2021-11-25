#include"pushColBackMatrix.h"

void pushColBackMatrix(int**& matrix, int row, int& column)
{
	for (int i = 0; i < row; i++)
	{
		int* matrix2 = new int[column + 1];
		for (int j = 0; j < column; j++)
		{
			matrix2[j] = matrix[i][j];
		}
		delete[] matrix[i];

		matrix[i] = matrix2;

		for (int i = 0; i < row; i++)
		{
			matrix[i][column] = i;
		}

		column++;
	}
}
void pushColBackMatrix(double**& matrix, int row, int& column)
{
	column--;

	for (int i = 0; i < row; i++)
	{
		double* matrix2 = new double[column + 1];
		for (int j = 0; j < column; j++)
		{
			matrix2[j] = matrix[i][j];
		}
		delete[] matrix[i];

		matrix[i] = matrix2;
	}

	for (int i = 0; i < row; i++)
	{
		matrix[i][column] = i + 0.1;
	}

	column++;
}
void pushColBackMatrix(char**& matrix, int row, int& column)
{
	column--;

	for (int i = 0; i < row; i++)
	{
		char* matrix2 = new char[column + 1];
		for (int j = 0; j < column; j++)
		{
			matrix2[j] = matrix[i][j];
		}
		delete[] matrix[i];

		matrix[i] = matrix2;
	}

	for (int i = 0; i < row; i++)
	{
		matrix[i][column] = 'a' + i;
	}

	column++;
}
