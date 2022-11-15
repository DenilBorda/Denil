#include<stdio.h>
int rev()
{
    int a,b,c,d,e;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d"&b);
    printf("enter c :");
    scanf("%d",c);
    printf("enter d :");
    scanf("%d",d);
    a=b;
    b=c;
    c=d;
    d=e;
    e=a;

}
void main()
{
   rev();
   printf("reverce value of : %d",rev);
}

