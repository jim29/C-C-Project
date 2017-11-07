#include <stdio.h>

void hano(int n,char from ,char to, char via)
{
	if(n==1)//第1个到c
	{
	printf("%c to %c\n",from,to);return;
	}
	else
	//n-1个到b
	{
	hano(n-1,from,via,to);
	//第n个到c
	printf("%c to %c\n",from,to);
	// n-1到c 
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
