#include"popRowFrontMatrix.h"

void popRowFrontMatrix(int**& matrix, int& row, int column)
{

	int** matrix2 = new int* [row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = matrix[i + 1];
	}

	delete[] matrix;

	--row;

	matrix = matrix2;
}
void popRowFrontMatrix(double**& matrix, int& row, int column)
{
	++row;

	double** matrix2 = new double* [row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = matrix[i + 1];
	}

	delete[] matrix;

	--row;

	matrix = matrix2;
}
void popRowFrontMatrix(char**& matrix, int& row, int column)
{
	++row;

	char** matrix2 = new char* [row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = matrix[i + 1];
	}

	delete[] matrix;

	--row;

	matrix = matrix2;
}
