#include<stdio.h>

void main()
{
    int a[12][12];
    int i,j,row,col,sum=0;

	printf("Enter the number of rows and columns for 1st matrix\n");
	printf("your matrix row= ");
	scanf("%d",&row);
	printf("\n your matrix columb= ");
	scanf("%d",&col);

    printf("Enter the elements of the matrix\n");
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
                sum=sum+a[i][j];
            }
        }
    }

    printf("sum = %d\n",sum);
}