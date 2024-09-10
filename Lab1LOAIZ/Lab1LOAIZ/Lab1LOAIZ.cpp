//Задание 1
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 10;

	int Arr[SIZE];
	int Max = INT_MIN;
	int Min = INT_MAX;
	int Razn;

	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = i;
	}

	cout << "Массив: ";

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << " ";
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (Max < Arr[i])
		{
			Max = Arr[i];
		}
	}

	cout << "\nМаксимальный элемент: " << Max;

	for (int i = 0; i < SIZE; i++)
	{
		if (Min > Arr[i])
		{
			Min = Arr[i];
		}
	}

	cout << "\nМинимальный элемент: " << Min;

	Razn = Max - Min;

	cout << "\nРазница между максимальным и минимальным элементом: " << Razn;

	return 0;
}