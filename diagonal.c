#include<stdio.h>

void main()
{
    int a[12][12];
    int i,j,row,col,b=0;

	printf(" matrix rows \n");
	printf("your matrix row= ");
	scanf("%d",&row);
	printf("\n matrix columm= ");
	scanf("%d",&col);

    printf("matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
	    printf("\n a[%d][%d]=",i,j);	
            scanf("%d",&a[i][j]);
        }
    }

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t ",a[i][j]);
        }
        printf("\n");
    }
  
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                b=b+a[i][j];
            }
        }
    }

    printf("b = %d\n",b);
}