#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,i,c;
	clrscr();
	printf("%d ",b);
	for(i=1; i<=10; i++)
	{
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
	}
	getch();
}