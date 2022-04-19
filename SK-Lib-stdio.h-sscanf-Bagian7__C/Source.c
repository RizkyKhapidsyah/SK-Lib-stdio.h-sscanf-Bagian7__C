#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char mystr[] = "Manusia  89  7000";
	char name[20];
	int age, salary;

	sscanf(mystr, "%s %i %i", name, &age, &salary);
	printf("%s is %i years old and earns %i dollars.\n", name, age, salary);

	_getch();
	return 0;
}

