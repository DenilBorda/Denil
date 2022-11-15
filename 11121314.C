#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=11;
	clrscr();
	for(i=1; i<=5; i++)
	{
	for(j=1; j<=5; j++)
	{
	printf("%d ",n++);
	}

	printf("\n");
	n = n + 5;
	}
	getch();
}
