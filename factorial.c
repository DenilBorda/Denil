#include<stdio.h>
int mul(int n)
{
    if(n>=1)
    
    return n*mul(n-1);
    

    else
    
    return 1;
    
}

int main()
{
    int n;
    printf("Enter a factorial :");
    scanf("%d",&n);
    printf("factorial is %d = %d",n,mul(n));
    return 0;

}