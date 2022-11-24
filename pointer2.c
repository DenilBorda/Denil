#include<stdio.h>
int main()
{
    int a,b,c,*p,*q;
    printf("Enter The value of p and q :\n ");
    scanf("%d %d",&a,&b);
    printf("first swapping values \np = %d \nq= %d\n",a,b);
    
    p = &a;
    q = &b;

    c = *q;
    *q = *p;
    *p = c;
    printf("final swapping values \np = %d \nq=%d \n",a,b);  
}