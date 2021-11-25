#include"pushColFrontMatrix.h"

void pushColFrontMatrix(int**& matrix, int row, int& column)
{
	for (int i = 0; i < row; i++)
	{
		int* matrix2 = new int(column + 1);

		for (int j = 0; j < column; j++)
		{
			matrix2[j + 1] = matrix[i][j];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}


	for (int i = 0; i < row; i++)
	{
		matrix[i][0] = i;
	}
	column++;
}
void pushColFrontMatrix(double**& matrix, int row, int& column)
{
	column--;

	for (int i = 0; i < row; i++)
	{
		double* matrix2 = new double(column + 1);

		for (int j = 0; j < column; j++)
		{
			matrix2[j + 1] = matrix[i][j];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	for (int i = 0; i < row; i++)
	{
		matrix[i][0] = i + 0.1;
	}

	column++;
}
void pushColFrontMatrix(char**& matrix, int row, int& column)
{
	column--;

	for (int i = 0; i < row; i++)
	{
		char* matrix2 = new char(column + 1);

		for (int j = 0; j < column; j++)
		{
			matrix2[j + 1] = matrix[i][j];
		}

		delete[] matrix[i];

		*matrix[i] = matrix2[i];
	}

	for (int i = 0; i < row; i++)
	{
		matrix[i][0] = 'a' + i;
	}

	column++;
}
