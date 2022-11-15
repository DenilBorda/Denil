#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=1,n;
	clrscr();
	printf("Enter n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	 printf("%d ",i*j);
	 j = j + j;
	}
	getch();
}