#include"pushRowBackMatrix.h"

void pushRowBackMatrix(int**& matrix, int& row, int column)
{
	int** matrix2 = new int* [row + 1];

	for (int i = 0; i < row; ++i)
	{
		matrix2[i] = matrix[i];
	}

	delete[] matrix;

	matrix = matrix2;

	matrix[row] = new int[column];

	for (int i = 0; i < column; i++)
	{
		matrix[row][i] = i;
	}

	row++;


}
void pushRowBackMatrix(double**& matrix, int& row, int column)
{
	row--;

	double** matrix2 = new double* [row + 1];

	for (int i = 0; i < row + 1; i++)
	{
		matrix2[i] = matrix[i];
	}

	delete[] matrix;

	matrix = matrix2;

	matrix[row] = new double[column];

	for (int i = 0; i < column; i++)
	{
		matrix[row][i] = i + 0.1;
	}
	row++;

}
void pushRowBackMatrix(char**& matrix, int& row, int column)
{
	row--;
	char** matrix2 = new char* [row + 1];



	for (int i = 0; i < row; ++i)
	{
		matrix2[i] = matrix[i];
	}

	delete[] matrix;

	matrix = matrix2;

	matrix[row] = new char[column];

	for (int i = 0; i < column; i++)
	{
		matrix[row][i] = 'a' + i;
	}
	row++;

}
