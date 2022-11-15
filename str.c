#include<stdio.h>
void main()
{
	char str[50];
	int i;
	printf("enter string :- ");
   //scanf("%s",&str);
	// scanf("%[^\n]s",str);
   gets(str);
	printf("your string :- %s",str);
	// puts(str);
   
	for(i=0; str[i] != '\0'; i++)
   {}
	printf("\n your string length :- %d",i);
   
}