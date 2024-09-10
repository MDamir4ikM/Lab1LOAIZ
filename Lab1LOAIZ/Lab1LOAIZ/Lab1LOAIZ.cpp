//Задание 4
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int rows;
	cout << "Введите количество строчек: ";
	cin >> rows;
	int cols;
	cout << "Введите количество столбиков: ";
	cin >> cols;

	int** ptr_arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		ptr_arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			ptr_arr[i][j] = rand() % 10;
		}
	}


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << ptr_arr[i][j] << " ";
		}
		cout << endl;
	}

	int sum;
	for (int i = 0; i < rows; i++)
	{
		sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += ptr_arr[j][i];
		}
		cout << "Сумма значений стобца " << i + 1 << " : " << sum << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[]ptr_arr[i];
	}

	delete[]ptr_arr;

	return 0;
}