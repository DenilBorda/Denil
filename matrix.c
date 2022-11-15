#include<stdio.h>
int main()
{
	int a[10],i,j;
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			if(i==j)
			{
			printf("\t 1");
			}		
			else
			{
			printf("\t 0");
			}
		}
			printf("\n");
	}
}