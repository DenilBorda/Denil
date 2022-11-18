#include<stdio.h>
int perfect (int n)
{
    int b=0;
    for (int i=1; i<n ;i++)
    {
        if (n%i==0)
        b=b+i;
    }
    return b;
}
int main()
{
    int a,n;
    printf("Enterno :");
    scanf("%d",&n);
    a = perfect(n);
    if (n==a)
    {
        printf("%d is perfect number",n);
    }
    else
    {
        printf("%d is not perfect number",n);
    }
}