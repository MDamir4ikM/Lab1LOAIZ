//Задание 5
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

struct Student
{
	char lastName[30];
	char firstName[30];
	char zachetka[30];
};

void searchStudent(struct Student students[], int N, char lastName[], char firstName[], char zachetka[])
{
	int flag = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(students[i].lastName, lastName) == 0 && strcmp(students[i].firstName, firstName) == 0 && strcmp(students[i].zachetka, zachetka) == 0)
		{
			printf("Найдено: %s %s %s\n", students[i].lastName, students[i].firstName, students[i].zachetka);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("Такого студента нет");
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	struct Student students[] =
	{
	{"Иванов", "Иван", "12345"},
	{"Петров", "Петр", "22222"},
	{"Сидоров", "Сергей", "01010"},
	};

	char lastName[] = "Петров";
	char firstName[] = "Петр";
	char zachetka[] = "2222";

	searchStudent(students, 3, lastName, firstName, zachetka);

	return 0;
}