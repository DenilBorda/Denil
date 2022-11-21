#include<stdio.h>
#define n 5
void dis(int a[])
{
    for(int i=0;i<n; i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int a[n],i;
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] :",i);
        scanf("%d",&a[i]);
    }
    dis(a);
}