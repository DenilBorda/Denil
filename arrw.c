#include<stdio.h>
void arr(int a[5])
{
    for(int i=0; i<=5; i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int a[5],i;
    {
        printf("Enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    arr(a);
}