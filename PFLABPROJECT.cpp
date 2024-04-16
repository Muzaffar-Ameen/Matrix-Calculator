#include<iostream>
#include<fstream>
using namespace std;
//<<<<<<<<<<prototypes of all funcations>>>>>> 
int** readfile(int**, int &, int &);
int** matrix_value(int**, int, int);
int** sumofmatrix(int**, int**, int, int, int, int, int);
int** productofmatrix(int**, int**, int, int, int, int, int);
int** Rowaverage(int**, int**, int, int, float, int, int);
void columnaverage(int**, int**, int, int, float, int, int);
void Wholeaverage(int**, int**, int, int, float, int, int);
int** Rowsort(int**, int**, int, int, int, int);
void Colsort(int**, int**, int, int, int, int, int**);
void addtwomatrix(int**, int**, int, int, int, int, int**);
void subtwomatrix(int**, int**, int, int, int, int, int**);
void transpose(int**, int**, int, int, int**, int**);
int main()
{
	cout << "--------------------------------------------------------------------------------------------------------" << endl;
	cout << "*        *       ********     *           * * * *       * * * * *     * *     * *    ********" << endl;
	cout << "*        *       *      *     *           *            *         *    *  *   *  *    *      *" << endl;
	cout << "*        *       ********     *           *            *         *    *   * *   *     * *****" << endl;
	cout << "*   *    *       *            *           *            *         *    *    *    *      *     " << endl;
	cout << "*  * *   *        *           *            *        *  *         *    *         *        ******" << endl;
	cout << "*  *  *  *         ******     **********    * * * *     * * * * *     *         *              " << endl;
	cout << "* *	* *																						 " << endl;
	cout << "---------------------------------------------------------------------------------------------------------" << endl;
	int row = 0, col = 0, sum1 = 0, choice = 0, row2 = 0, col2 = 0, prod1 = 0, option = 0;
	float avr = 0.0;
	int ** matrix1 = nullptr, ** matrix2 = nullptr, **matrix3 = nullptr, **matrix4 = nullptr, **matrix5 = nullptr;
	do
	{

		cout << "			University of Central Punjab (PF Project 2022)" << endl;
		cout << "			Student Name:Muzaffar Ameen" << endl;
		cout << "			Student Reg:L1f21bscs0897" << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "			=>Press 1. for Enter Data by Yourself" << endl;
		cout << "			=>Press 2. for Enter Data from File" << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "Enter your Choice: ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "-------------------------------------------------------------------------------------" << endl;
			cout << "Enter the the size of row for 1st Matrix: ";
			cin >> row;
			cout << "Enter the the size of col for 1st Matrix: ";
			cin >> col;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "-------------------------------------------------------------------------------------" << endl;
			cout << "Enter Data for 1st Matrix " << endl;
			cout << "-------------------------------------------------------------------------------------" << endl;
			matrix_value(matrix1, row, col);
			cout << "-------------------------------------------------------------------------------------" << endl;
			cout << "Enter the the size of row for 2nd Matrix: ";
			cin >> row2;
			cout << "Enter the the size of col for 2nd Matrix: ";
			cin >> col2;
			matrix2 = new int*[row2];
			for (int i = 0; i < row2; i++)
			{
				matrix2[i] = new int[col2];
			}
			cout << "-------------------------------------------------------------------------------------" << endl;
			cout << "Enter Data for 2nd Matrix " << endl;
			cout << "-------------------------------------------------------------------------------------" << endl;
			matrix_value(matrix2, row2, col2);
		}
		else if (choice == 2)
		{
			cout << "Enter the information for 1st matrix" << endl;
			cin.ignore();
			matrix1 = readfile(matrix1, row, col);
			cout << "-------------------------------------------------------------------------------------" << endl;
			cout << "Enter the information for 2nd matrix" << endl;
			matrix2 = readfile(matrix2, row2, col2);
		}
		matrix3 = new int*[row];
		for (int i = 0; i < row; i++)
		{
			matrix3[i] = new int[row];
		}
		matrix4 = new int*[col];
		for (int i = 0; i < col; i++)
		{
			matrix4[i] = new int[row];
		}
		matrix5 = new int*[col2];
		for (int i = 0; i < col2; i++)
		{
			matrix5[i] = new int[row2];
		}
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "	      	Funcation Panel						                                      " << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "	=> Press 1. for Sum of Matrix (sum of all values)" << endl;
		cout << "	=> Press 2. for Product of Matrix (product of all values)" << endl;
		cout << "	=> Press 3. for Row-wise Average" << endl;
		cout << "	=> Press 4. for Column-wise Average" << endl;
		cout << "	=> Press 5. for Average or whole Matrixe" << endl;
		cout << "	=> Press 6. for Row-wise sorting of Matrix" << endl;
		cout << "	=> Press 7. for Column-wise sorting of Matrix" << endl;
		cout << "	=> Press 8. Addition of two Matrices" << endl;
		cout << "	=> Press 9. Subtraction of two Matrices" << endl;
		cout << "	=> Press 10. Matrix transpose" << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "Enter your option that you want perfom on matrixs: ";
		cin >> option;
		if (option == 1)
		{
			sumofmatrix(matrix1, matrix2, row, col, sum1, row2, col2);
		}
		else if (option == 2)
		{
			productofmatrix(matrix1, matrix2, row, col, prod1, row2, col2);
		}
		else if (option == 3)
		{
			Rowaverage(matrix1, matrix2, row, col, avr, row2, col2);
		}
		else if (option == 4)
		{
			columnaverage(matrix1, matrix2, row, col, avr, row2, col2);
		}
		else if (option == 5)
		{
			Wholeaverage(matrix1, matrix2, row, col, avr, row2, col2);
		}
		else  if (option == 6)
		{
			Rowsort(matrix1, matrix2, row, col, row2, col2);
		}
		else if (option == 7)
		{
			Colsort(matrix1, matrix2, row, col, row2, col2, matrix4);
		}
		else if (option == 8)
		{
			addtwomatrix(matrix1, matrix2, row, col, row2, col2, matrix3);
		}
		else if (option == 9)
		{
			subtwomatrix(matrix1, matrix2, row, col, row2, col2, matrix3);
		}
		else if (option == 10)
		{
			transpose(matrix1, matrix2, row, col, matrix4, matrix5);
		}
		else
		{
			cout << "-------------------------------------------------------------------------------------" << endl;
			cout << "Sorry....! You enter a wrong input" << endl;
			cout << "-------------------------------------------------------------------------------------" << endl;
		}
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "Do you want to run again this task => (1) for yes and => (0) for no....???: ";
		cin >> option;
	} while (option == 1);
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "			End Program....Thanks For Running Matrix OPeration                        " << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	system("pause");
	return 0;
}
//Funcation for  read data from file....!!!
int** readfile(int** matrix, int& row, int& col)
{
	ifstream fin, fin2;
	char file_name[50] = { '\0' };
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "Enter the file file name for get size of row and col(wit extion.txt): ";
	cin.getline(file_name, 49);
	fin.open(file_name);
	if (!fin.is_open())
	{
		cout << "Sorry..! File is not found" << endl;
	}
	else
	{
		fin >> row >> col;
		matrix = new int*[row];
		for (int i = 0; i < row; i++)
		{
			matrix[i] = new int[col];
		}
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "Enter the file file name for get data for matrix(wit extion.txt: ";
		cin.getline(file_name, 49);
		fin2.open(file_name);
		if (!fin2.is_open())
		{
			cout << "Sorry..! File is not found" << endl;
		}
		else
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					fin2 >> matrix[i][j];
				}
			}
		}
	}
	return matrix;
}
//Funcation for  read data from User....!!!
int** matrix_value(int** arr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter a number: ";
			cin >> arr[i][j];
		}
	}
	return 0;
}
//Funcation for Sum of matrix....!!!
int** sumofmatrix(int** arr, int** arr2, int row, int col, int sum, int row2, int col2)
{
	sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	cout << "Sum of MATRIX	1: " << sum << endl;
	sum = 0;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			sum = sum + arr2[i][j];
		}
	}
	cout << "Sum of Mtrix 2 " << " is: " << sum << endl;
	return 0;
}
//Funcation for Product of matrix....!!!
int** productofmatrix(int** arr, int** arr2, int row, int col, int prod1, int row2, int col2)
{
	prod1 = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			prod1 = prod1*arr[i][j];
		}
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Product of matrix 1 is: " << prod1 << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	prod1 = 1;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			prod1 = prod1*arr2[i][j];
		}
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Product of matrix 2 is: " << prod1 << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	return 0;
}
//Funcation for Rowaverage of matrix....!!!
int** Rowaverage(int** arr, int** arr2, int row, int col, float avr, int row2, int col2)
{
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Average of matrix row wise of matrix 1" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum = sum + arr[i][j];
		}
		avr = (float)sum / col;
		sum = 0;
		cout << "The average of row " << i + 1 << " is " << avr << endl;
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Average of matrix row wise of matrix 2" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	sum = 0;
	avr = 0.0;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			sum = sum + arr2[i][j];
		}
		avr = (float)sum / col2;
		sum = 0;
		cout << "The average of row " << i + 1 << " is " << avr << endl;
	}
	return 0;
}
//Funcation for columnaverage of matrix....!!!
void columnaverage(int** arr, int** arr2, int row, int col, float avr, int row2, int col2)
{
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Average of matrix 1 Column wise" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	int sum1 = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum1 = sum1 + arr[j][i];
		}
		avr = (float)sum1 / col;
		sum1 = 0;
		cout << "The average of col " << i + 1 << " is " << avr << endl;
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Average of matrix 2 Column wise" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	sum1 = 0;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			sum1 = sum1 + arr2[j][i];
		}
		avr = (float)sum1 / col2;
		sum1 = 0;
		cout << "The average of col " << i + 1 << " is " << avr << endl;
	}
}
//Funcation for Wholeaverage of matrix....!!!
void Wholeaverage(int** arr, int** arr2, int row, int col, float avr, int row2, int col2)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	avr = (float)sum / (row* col);
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		The whole average of matrix 1 is: " << avr << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	sum = 0;
	avr = 0.0;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			sum = sum + arr2[i][j];
		}
	}
	avr = (float)sum / (row2* col2);
	cout << "T		he whole average of matrix 2 is: " << avr << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
}
//Funcation for Rowsort of matrix....!!!
int** Rowsort(int** arr, int** arr2, int row, int col, int row2, int col2)
{
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Sort of matrix 1 row wise in Asscending order " << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < col - j - 1; k++)
			{
				if (arr[i][k] > arr[i][k + 1])
				{
					swap(arr[i][k], arr[i][k + 1]);

				}
			}

		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Sort of matrix 2 row wise in Asscending order " << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			for (int k = 0; k < col2 - j - 1; k++)
			{
				if (arr2[i][k] > arr2[i][k + 1])
				{
					swap(arr2[i][k], arr2[i][k + 1]);

				}
			}

		}
	}
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
//Funcation for Colsort of matrix....!!!
void Colsort(int** arr, int** arr2, int row, int col, int row2, int col2, int** arr3)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr3[i][j] = arr[i][j];
		}
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Sort of matrix 1 col wise in Asscending Order " << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	for (int x = 0; x < row; x++)
	{
		for (int i = 0; i < col; i++)
		{
			for (int j = i; j < col; j++)
			{
				if (arr3[i][x] > arr3[j][x])
				{
					swap(arr3[i][x], arr3[j][x]);
				}
			}
		}
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Sort of matrix 2 col wise in Asscending Order " << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			arr3[i][j] = arr2[i][j];
		}
	}
	for (int x = 0; x < row2; x++)
	{
		for (int i = 0; i < col2; i++)
		{
			for (int j = i; j < col2; j++)
			{
				if (arr3[i][x] > arr3[j][x])
				{
					swap(arr3[i][x], arr3[j][x]);
				}
			}
		}
	}
	for (int i = 0; i < col2; i++)
	{
		for (int j = 0; j < row2; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

}
//Funcation for addtwomatrix of matrix....!!!
void addtwomatrix(int** matrix1, int** matrix2, int row, int col, int row2, int col2, int** matrix3)
{
	int check1 = 0, check2 = 0;
	check1 = row*col;
	check2 = row2*col2;
	if (check1 == check2)
	{
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "		Sum of two matrix are" << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				matrix3[i][j] = 0;
			}
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << matrix3[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "	Sorry can't take sum of Two Matrixes..Because the size of two matrixes is different." << endl;
	}

}
//Funcation for subtwomatrix of matrix....!!!
void subtwomatrix(int** matrix1, int** matrix2, int row, int col, int row2, int col2, int** matrix3)
{
	int check1 = 0, check2 = 0;
	check1 = row*col;
	check2 = row2*col2;
	if (check1 == check2)
	{
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "		Subtraction of two matrix are" << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				matrix3[i][j] = 0;
			}
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
			}
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << matrix3[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "Sorry can't take subtraction of Two Matrixes..Because the size of two matrixes is different." << endl;
	}
}
//Funcation for transpose of matrix....!!!
void transpose(int** matrix1, int** matrix2, int row, int col, int** matrix3, int** matrix4)
{
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Orignal Matrix 1 is:" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix3[j][i] = matrix1[i][j];
		}
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Transpose of Matrix 1:" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Orignal Matrix 2 is:" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix4[j][i] = matrix2[i][j];
		}
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Transpose of Matrix 2:" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << matrix4[i][j] << " ";
		}
		cout << endl;
	}
}