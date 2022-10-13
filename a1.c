#include<stdio.h>
void main()
{
	int arr[4],i;
	for(i=0; i<=4; i++)
	{ 
	printf("a[%d]:",i);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<=4;i++)
	{
	printf("\t arr [%d] : %d",i,arr[i]);
	}
}
	 																