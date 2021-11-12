#include<stdio.h>
void main()
{
	int m,h;
	printf("enter the total minutes");
	scanf("%d",&m);
	h=m/60;
	m=m%60;
	printf("%d hours is %d minutes\n",h,m);
}

