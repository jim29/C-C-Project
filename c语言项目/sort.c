void sort(int a[],int n)
{
	int i,j,min,index;
	
	for(i=0;i<n-1;i++)
	{
		min=a[i],index=i;
		for(j=i+1;j<n;j++)
		if(a[j]<min)
		min=a[j],index=j;
		if(i!=index)
		a[index]=a[i],a[i]=min;
	}
}	
