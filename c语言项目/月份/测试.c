#include <stdio.h>
int main()
{
	printf("�������·�:\n");
	int  month;		//�·�month 
	scanf("%d",&month);
	switch (month)
	{case 1:
		printf("һ�·���31��");
		break;
	case 2:
		printf("���·���28��");
		break;
	case 3:
		printf("���·���31��");
		break;
	case 4:
		printf("���·���30��");
		break;
	default:
		printf("��Ǹ������ֻ�ܱ�ʾ1~4�·�"); 
	}
	return 0;
	
}
