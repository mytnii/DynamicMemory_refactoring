#include"insertColMatrix.h"

void insertColMatrix(int**& matrix, int row, int& column, int index)
{
	for (int i = 0; i < row; i++)
	{
		int* matrix2 = new int[column + 1];
		for (int j = 0; j < index; j++)
		{
			matrix2[j] = matrix[i][j];
		}
		for (int j = index; j < column; j++)
		{
			matrix2[j + 1] = matrix[i][j];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	for (int i = 0; i < row; i++)
	{
		matrix[i][index] = i;
	}

	column++;
}
void insertColMatrix(double**& matrix, int row, int& column, int index)
{
	--column;

	for (int i = 0; i < row; i++)
	{
		double* matrix2 = new double[column + 1];
		for (int j = 0; j < index; j++)
		{
			matrix2[j] = matrix[i][j];
		}
		for (int j = index; j < column; j++)
		{
			matrix2[j + 1] = matrix[i][j];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	for (int i = 0; i < row; i++)
	{
		matrix[i][index] = i;
	}

	column++;
}
void insertColMatrix(char**& matrix, int row, int& column, int index)
{
	column--;

	for (int i = 0; i < row; i++)
	{
		char* matrix2 = new char[column + 1];
		for (int j = 0; j < index; j++)
		{
			matrix2[j] = matrix[i][j];
		}
		for (int j = index; j < column; j++)
		{
			matrix2[j + 1] = matrix[i][j];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	for (int i = 0; i < row; i++)
	{
		matrix[i][index] = 'a' + i;
	}

	column++;
}
