#include<stdio.h>
int main()

    {
		int a[5][5],i,j;
		for(i=0; i<3; i++)
    {
		for(j=0; j<3; j++)
    {
		printf("a[%d][%d] :",i,j);
		scanf("%d",&a[i][j]);
	}

	}
		for(i=0; i<3; i++)
    {
		for(j=0; j<3; j++)
    {
		printf("%d \t ",a[i][j]);
        }
		printf("\n");
        }

        }