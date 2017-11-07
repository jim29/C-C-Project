#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Asin(x)+Bsin(2x)+Csin(3x)+(x-D)^2-E = 0
double cal(double a);
int A, B, C, D, E;
double half(double a, double b, double c);

int main()
{
	int T;
	
	double L, R;
	double x;
	double s;

	scanf("%d", &T);
	while (T--) {

		scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
		scanf("%lf%lf", &L, &R);
		x = (R + L) / 2;
		printf("%.2f\n", half(L, x, R));
	}
	system("pause");
	return 0;
}
double cal(double a)
{
	double result;
	result = A*sin(a) + B*sin(2 * a) + C*sin(3 * a) + pow((a - D), 2) - E;
	return result;
}
double half(double a, double b, double c)
{
	if (fabs(c - b) <= 0.0001)
		return b;
	if (cal(c)*cal(b) <= 0)
		a = b, b = (c + b) / 2;
	else
		c = b, b = (a + b) / 2;
	half(a, b, c);
}