#include <stdio.h>

void hano(int n,char from ,char to, char via)
{
	if(n==1)//��1����c
	{
	printf("%c to %c\n",from,to);return;
	}
	else
	//n-1����b
	{
	hano(n-1,from,via,to);
	//��n����c
	printf("%c to %c\n",from,to);
	// n-1��c 
	hano(n-1,via,to,from);

	}
	 
	
}
int main()
{
	 int m;
	while(scanf("%d",&m)!=EOF)
	{
		
		hano(m,'A','C','B');
		printf("\n");
		 
	}
	return 0;
}
