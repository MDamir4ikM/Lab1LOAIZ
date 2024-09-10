//Задание 5
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

struct Student
{
	char lastName[30];
	char firstName[30];
};

void searchStudent(struct Student students[], int N, char lastName[], char firstName[])
{
	for (int i = 0; i < N; i++) {
		if (strcmp(students[i].lastName, lastName) == 0 && strcmp(students[i].firstName, firstName) == 0)
		{
			printf("Найдено: %s %s\n", students[i].lastName, students[i].firstName);
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	struct Student students[] =
	{
	{"Иванов", "Иван"},
	{"Петров", "Петр"},
	{"Сидоров", "Сергей"},
	};

	char lastName[] = "Петров";
	char firstName[] = "Петр";

	searchStudent(students, 3, lastName, firstName);

	return 0;
}