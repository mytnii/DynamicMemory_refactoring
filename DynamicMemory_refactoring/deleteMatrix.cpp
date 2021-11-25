#include"deleteMatrix.h"

void deleteMatrix(int** matrix, int row)
{
	for (int i = 0; i < row; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}
void deleteMatrix(double** matrix, int row)
{
	for (int i = 0; i < row; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}
void deleteMatrix(char** matrix, int row)
{
	for (int i = 0; i < row; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}
