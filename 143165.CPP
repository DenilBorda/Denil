#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter n :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	if (i%2==1)
	{
	printf("%d",i);
	}
	else
	{
	j=i*i;
	printf("%d ",j);
	}
	}
	getch();
}