// gcc rootSqrEq.c -o 13 -lm && ./13

#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,det,root1,root2,realPart,imagPart;

	printf("Введите коэффициенты a,b,c: ");
	scanf("%lf %lf %lf", &a,&b,&c);

	det = b*b - 4*a*c;

	if (det > 0)
	{
		root1 = (-b+sqrt(det))/(2*a);
		root2 = (-b-sqrt(det))/(2*a);

		printf("root1 = %.2lf root2 = %.2lf\n", root1,root2);
	}
	else if (det == 0)
	{
		root1=root2=-b/(2*a);
		printf("root1 = root2 = %.2lf\n", root1);
	}
	else
	{
		realPart = -b/(2*a);
		imagPart = sqrt(-det)/(2*a);

		printf("root1 = %.2lf+%.2lfi root2 = %.2lf-%.2lfi\n",
			realPart,imagPart,realPart,imagPart );
	}
	
	return 0;
}
