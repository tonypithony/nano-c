#include <stdio.h>

int main()
{
	char c;
	int d;

	printf("Введите символ: ");
	scanf("%c", &c);
	printf("ASCII-код %c = %d\n", c, c);

	printf("Введите ASCII-код: ");
	scanf("%d", &d);
	printf("Символ ASCII-кода  %d = %c\n", d, d);
	return 0;
}


