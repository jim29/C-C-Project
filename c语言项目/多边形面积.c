#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double dis(double a1, double a2, double b1, double b2);
double s(double a, double b, double c);

int main()
{
	int n;
	double sum = 0;
	double nx1, ny1, nx2, ny2, nx3,ny3, nx4, ny4;

	scanf("%d",&n);
	scanf("%lf%lf",&nx1,&ny1);
	scanf("%lf%lf", &nx2, &ny2);
	scanf("%lf%lf", &nx3, &ny3);
	sum += s(dis(nx1,ny1,nx2,ny2), dis(nx2,ny2,nx3,ny3), dis(nx3,ny3,nx1,ny1));
	n -= 3;
	while (n--) {
		scanf("%lf%lf", &nx4, &ny4);
		sum+= s(dis(nx1, ny1, nx3, ny3), dis(nx3, ny3, nx4, ny4), dis(nx4, ny4, nx1, ny1));	
		nx3 = nx4, ny3 = ny4;
	}
	printf("%.3f",sum);
	system("pause");
	return 0;
}
double dis(double a1,double a2,double b1, double b2)//¾àÀë
{
	double s;
	
	s = sqrt(pow(a1-b1, 2) + pow(a2-b2, 2));
	return s;
}
double s(double a, double b, double c)//º£Â×
{
	double s;

	double p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	return s;
}


