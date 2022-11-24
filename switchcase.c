#include<stdio.h>

    int main()
{
    int a,b,ch;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
  do
  { 
    printf("\nEnter choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
            printf("\nAddition of a and b: %d",a+b);
        break;
    case 2: 
            printf("\nSubstraction of a and b: %d",a-b);
        break;
    case 3:
            printf("\nMultiplication of a and b: %d",a*b);
        break;
    case 4:
            printf("\nDivision of a and b: %d",a/b);
        break;
    
    default:
            printf("\nWrong choice....");

        break;
    }
   } 
   while (ch != 0);

}