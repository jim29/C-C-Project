#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int n;
		int c=0;
		
		scanf("%lld",&n);
		int b=n;
		while(b>=2)
		{
			if(b%2==0)
			b>>=1;
			else
			break;
		}
		if(b==1)
		printf("222\n");
		else
	{
			
			while(n>=1)
		{
			if(n%2==0)
				n/=2;	
			else 
			{	
				c++;
				if(n==1)
				break;
				n/=2;
			}	
		}
			printf("%d\n",c);
	}
		
		
	
	
	}
	
	return 0;
}















