#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void task1()
{
	setlocale(LC_ALL, "Russian");

	char c;
	printf("Введите символ: ");
	scanf(" %c", &c);

	switch (c)

	{
	case '0':
	case '1':
	case '2':
		printf("Это цифра\n");
		break;
	default:
		printf("Это не буква и не цифра\n");
		break;
	case 'a':
	case 'b':
	case 'с':
		printf("Это буква\n");
		break;
	}

	return 0;

}
int main() {

}

