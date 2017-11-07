#include <stdio.h>
int main() 
{
	printf("请输入字母"); 
	char ch;
	scanf("%c",&ch);
	printf("%c的大写字母是%c",ch,ch-32) ;
	return 0;
}
