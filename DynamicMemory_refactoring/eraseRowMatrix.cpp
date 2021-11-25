#include"eraseRowMatrix.h"

void eraseRowMatrix(int**& matrix, int& row, int column, int index)
{

	int** matrix2 = new int* [row - 1];

	for (int i = 0; i < index; i++)
	{
		matrix2[i] = matrix[i];
	}

	for (int i = index; i < row - 1;)
	{
		matrix2[i] = matrix[i + 1];
	}

	delete[] matrix;

	row--;

	matrix = matrix2;
}
void eraseRowMatrix(double**& matrix, int& row, int column, int index)
{
	row++;

	double** matrix2 = new double* [row - 1];

	for (int i = 0; i < index; i++)
	{
		matrix2[i] = matrix[i];
	}

	for (int i = index; i < row - 1;)
	{
		matrix2[i] = matrix[i + 1];
	}

	delete[] matrix;

	row--;

	matrix = matrix2;
}
void eraseRowMatrix(char**& matrix, int& row, int column, int index)
{
	row++;

	char** matrix2 = new char* [row - 1];

	for (int i = 0; i < index; i++)
	{
		matrix2[i] = matrix[i];
	}

	for (int i = index; i < row - 1;)
	{
		matrix2[i] = matrix[i + 1];
	}

	delete[] matrix;

	row--;

	matrix = matrix2;
}
