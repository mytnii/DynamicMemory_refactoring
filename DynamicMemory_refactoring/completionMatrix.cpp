#include"completionMatrix.h"

void completionMatrix(int** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			matrix[i][j] = rand() % 20 - 10;
		}
	}
}
void completionMatrix(double** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			matrix[i][j] = i + j + 0.1;
		}
	}
}
void completionMatrix(char** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			matrix[i][j] = 'a' + i + j;
		}
	}
}
