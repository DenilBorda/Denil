#include<stdio.h>
int main()
{
    int a,b,c,*d,*s;
    printf("Enter The value of a and b :");
    scanf("%d %d",&a,&b);
    printf("first swapping values \nd = %d \ns = %d\n",a,b);
    
    d = &a;
    s = &b;

    c = *s;
    *s = *d;
    *d = c;
    printf("final swapping values \nd = %d \ns = %d \n",a,b);  
}