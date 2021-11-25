#include"insertRowMatrix.h"

void insertRowMatrix(int**& matrix, int& row, int column, int index)
{

	int** matrix2 = new int* [row + 1];

	for (int i = 0; i < index; i++)
	{
		matrix2[i] = matrix[i];
	}


	for (int i = row; i > index; i--)
	{
		matrix2[i] = matrix[i - 1];
	}

	delete[] matrix;

	matrix = matrix2;

	matrix[index] = new int[column];

	for (int i = 0; i < column; i++)
	{
		matrix[index][i] = i;
	}

	row++;
}
void insertRowMatrix(double**& matrix, int& row, int column, int index)
{
	row--;

	double** matrix2 = new double* [row + 1];

	for (int i = 0; i < index; i++)
	{
		matrix2[i] = matrix[i];
	}


	for (int i = row; i > index; i--)
	{
		matrix2[i] = matrix[i - 1];
	}

	delete[] matrix;

	matrix = matrix2;

	matrix[index] = new double[column];

	for (int i = 0; i < column; i++)
	{
		matrix[index][i] = i;
	}

	row++;
}
void insertRowMatrix(char**& matrix, int& row, int column, int index)
{
	row--;

	char** matrix2 = new char* [row + 1];

	for (int i = 0; i < index; i++)
	{
		matrix2[i] = matrix[i];
	}


	for (int i = row; i > index; i--)
	{
		matrix2[i] = matrix[i - 1];
	}

	delete[] matrix;

	matrix = matrix2;

	matrix[index] = new char[column];

	for (int i = 0; i < column; i++)
	{
		matrix2[index][i] = i;
	}

	row++;
}
