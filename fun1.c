#include<stdio.h>
int mul(int a,int b)
{
    int total;
    total = a * b ;
    printf("multiplication of a and b is : %d ",total);
}
int main()
{
    int x,y;
    printf("enter x :");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    mul(x,y);
}