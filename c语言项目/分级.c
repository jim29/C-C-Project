#include <stdio.h>
#include <stdlib.h>
/*90<=X<=100 A
80<=X<90	B
70<=X<80	C
60<=X<70	D
X<60	E
对于那些不合法的成绩，
输出wrong就可以啦！（不合法是指低于0分或者高于100分）*/
int main()
{
	double c;
	while (scanf("%lf", &c) != EOF)
	{
		if (c >= 90 && c <= 100)
			printf("A\n");
		else if (c >= 80 && c < 90)
			printf("B\n");
		else if (c >= 70 && c < 80)
			printf("C\n");
		else if (c >= 60 && c < 70)
			printf("D\n");
		else if (c >= 0 && c < 60)
			printf("E\n");
		else
			printf("wrong\n");
	}
	

	system("pause");
	return 0;
}