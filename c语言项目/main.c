#include <stdio.h>


int main()
{
	FILE *fin, *fout;
	fin = fopen("data.in","rb");
	fout = fopen("data.out","wb");
	
	int min, max, n, s, count = 1;
	fscanf(fin,"%d",&n);
	s = min = max = n;
	while(fscanf(fin, "%d", &n) != EOF){
		if(n < min)
			min = n;
		if(n > max)
			max = n;
		s += n;
		count++;
	}
	fprintf(fout,"Min: %d Max: %d Average: %.2f\n",min, max, (double)s / count);
	fclose(fin);
	return 0;
}
