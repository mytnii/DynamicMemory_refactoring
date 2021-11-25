#include"Stdafx.h"
#include"completionArray.h"
#include"PrintArray.h"
#include"endArray.h"
#include"beginningArray.h"
#include"insertArray.h"
#include"popBackArray.h"
#include"popFrontArray.h"
#include"eraseArray.h"
#include"allocateMatrix.h"
#include"completionMatrix.h"
#include"printMatrix.h"
#include"deleteMatrix.h"
#include"pushRowBackMatrix.h"
#include"pushRowFrontMatrix.h"
#include"insertRowMatrix.h"
#include"popRowBackMatrix.h"
#include"popRowFrontMatrix.h"
#include"eraseRowMatrix.h"
#include"pushColBackMatrix.h"
#include"pushColFrontMatrix.h"
#include"insertColMatrix.h"
#include"popColBackMatrix.h"
#include"popColFrontMatrix.h"
#include"eraseColMatrix.h"

int main()
{
	srand(time(NULL));

	int num;

	cout << "Enter number: ";
	cin >> num;
	int* arr = new int[num];
	double* arr2 = new double[num];
	char* arr3 = new char[num];


	completionArray(arr, num);
	printArray(arr, num);

	completionArray(arr2, num);
	printArray(arr2, num);

	completionArray(arr3, num);
	printArray(arr3, num);

	++num;

	endArray(arr, num);
	printArray(arr, num);

	endArray(arr2, num);
	printArray(arr2, num);

	endArray(arr3, num);
	printArray(arr3, num);

	++num;

	beginningArray(arr, num);
	printArray(arr, num);

	beginningArray(arr2, num);
	printArray(arr2, num);

	beginningArray(arr3, num);
	printArray(arr3, num);

	int index;

	cout << "Enter index:";
	cin >> index;

	++num;

	insertArray(arr, num, index);
	printArray(arr, num);

	insertArray(arr2, num, index);
	printArray(arr2, num);

	insertArray(arr3, num, index);
	printArray(arr3, num);



	--num;

	popBackArray(arr, num);
	printArray(arr, num);

	popBackArray(arr2, num);
	printArray(arr2, num);

	popBackArray(arr3, num);
	printArray(arr3, num);

	--num;

	popFrontArray(arr, num);
	printArray(arr, num);

	popFrontArray(arr2, num);
	printArray(arr2, num);

	popFrontArray(arr3, num);
	printArray(arr3, num);

	eraseArray(arr, num, index);
	eraseArray(arr2, num, index);
	eraseArray(arr3, num, index);

	--num;

	printArray(arr, num);
	printArray(arr2, num);
	printArray(arr3, num);

	int row,
		column;

	cout << "Enter row: ";
	cin >> row;

	cout << "Enter column:";
	cin >> column;

	int** matrix = allocateMatrix(row, column);
	double** matrix2 = allocateMatrix(arr2, row, column);
	char** matrix3 = allocateMatrix(arr3, row, column);

	completionMatrix(matrix, row, column);
	printMatrix(matrix, row, column);

	completionMatrix(matrix2, row, column);
	printMatrix(matrix2, row, column);

	completionMatrix(matrix3, row, column);
	printMatrix(matrix3, row, column);


	pushRowBackMatrix(matrix, row, column);
	pushRowBackMatrix(matrix2, row, column);
	pushRowBackMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	pushRowFrontMatrix(matrix, row, column);
	pushRowFrontMatrix(matrix2, row, column);
	pushRowFrontMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);


	insertRowMatrix(matrix, row, column, index);
	insertRowMatrix(matrix2, row, column, index);
	insertRowMatrix(matrix3, row, column, index);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	popRowBackMatrix(matrix, row, column);
	popRowBackMatrix(matrix2, row, column);
	popRowBackMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	popRowFrontMatrix(matrix, row, column);
	popRowFrontMatrix(matrix2, row, column);
	popRowFrontMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	eraseRowMatrix(matrix, row, column, index);
	eraseRowMatrix(matrix2, row, column, index);
	eraseRowMatrix(matrix3, row, column, index);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	pushColBackMatrix(matrix, row, column);
	pushColBackMatrix(matrix2, row, column);
	pushColBackMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	pushColFrontMatrix(matrix, row, column);
	pushColFrontMatrix(matrix2, row, column);
	pushColFrontMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	insertColMatrix(matrix, row, column, index);
	insertColMatrix(matrix2, row, column, index);
	insertColMatrix(matrix3, row, column, index);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	popColBackMatrix(matrix, row, column);
	popColBackMatrix(matrix, row, column);
	popColBackMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	popColFrontMatrix(matrix, row, column);
	popColFrontMatrix(matrix2, row, column);
	popColFrontMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	eraseColMatrix(matrix, row, column, index);
	eraseColMatrix(matrix2, row, column, index);
	eraseColMatrix(matrix3, row, column, index);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	deleteMatrix(matrix, row);
	deleteMatrix(matrix2, row);
	deleteMatrix(matrix3, row);

	delete[] arr3;
	delete[] arr2;
	delete[] arr;

	return 0;
}