#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 1000//���� 
int main()
{
	char *a;
	int i;//ѭ������ 
	int len;//�ַ�����
	int s=0;//���ֵĺ�
	int s1,s2;//���� 
	a=(char*)calloc(N,sizeof(char));
	
	
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
		s+=a[i]-'0';
	if(s<10)
		printf("%d",s);
	else
	{
		s1=s/100+s/10%10+s%10;
		if(s1<10)
		printf("%d",s1);
		else
		{
			s2=s1/100+s1/10%10+s1%10;
			printf("%d",s2);
		}
		
	}
	free(a);
	return 0;
}






