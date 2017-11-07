#include <stdio.h>
/*已知 2000 年 1 月 1 日是星期六，现在告诉你一个日期，
要求你输出该天是星期几*/
/*①、普通年能被4整除且不能被100整除的为闰年.
②、世纪年能被400整除的是闰年
③、对于数值很大的年份,这年如果能整除3200,并
且能整除172800则是闰年.
如172800年是闰年,86400年不是闰年*/
int main()
{
	int T;
	scanf("%d",&T); 
	while(T>0)
	{
		int y,m,d;
		int i;
		int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		int year=0;
		int month=0;
		int day=0;
		scanf("%d%d%d",&y,&m,&d);
		for(i=2000;i<y;i++)
	    {
	    	if((i%4==0&&i%100!=0)||i%400==0)	
	    	year+=366;
	    	else
	    	year+=365;	
		}
		if((y%4==0&&y%100!=0)||y%400==0)
			for(i=2;i<=m;i++)
			month+=a[i-2];
		else
		{
			for(i=2;i<=m;i++)
			if(i==3)
			month+=28;
			else
			month+=a[i-2];
				}
		
		day=year+month+d-1;		
		if((day+6)%7==0)		
		printf("7\n");
		else
		printf("%d\n",(day+6)%7);		
		T--;					
	}
	return 0;
}
