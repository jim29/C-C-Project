#include <stdio.h>
int main()
{
	printf("请输入月份:\n");
	int  month;		//月份month 
	scanf("%d",&month);
	switch (month)
	{case 1:
		printf("一月份有31天");
		break;
	case 2:
		printf("二月份有28天");
		break;
	case 3:
		printf("三月份有31天");
		break;
	case 4:
		printf("四月份有30天");
		break;
	default:
		printf("抱歉，现在只能表示1~4月份"); 
	}
	return 0;
	
}
