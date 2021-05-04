#include <stdio.h>

int main()
{
	double A, B;

	printf("Введите А: ");
	scanf("%lf", &A);

	printf("Введите В: ");
	scanf("%lf", &B);

	A = A - B;
	B = A + B;
	A = B - A;

	printf("\nПосле замены, A = %.2lf\n", A);
	printf("После замены, B = %.2lf\n", B);

	return 0;
}
