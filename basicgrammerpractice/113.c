#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	double D = b * b - 4 * a * c;
	if (D > 0)
	{
		double d, e;
		d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		e = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

		printf("%g %g", d, e);
	}
	else if (D == 0)
		printf("%g", b / -2 * a);
	else
		printf("none.");
}