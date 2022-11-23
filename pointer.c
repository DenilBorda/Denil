#include<stdio.h>
int main()
{
    int a = 20,*p,**x;
    p = &a;
    x = &p;
    printf("value of a is : %d",a);
    printf("\n Address of a is : %u",&a);
    printf("\n Address of using p is : %d",p);
    printf("\n Address of p is : %u",&p);
    printf("\n value of using p is : %d",*p);
    printf("\n value of a using x is : %d",**x);
    
}