#include<stdio.h>
int fun(int n)
{
    printf("\n inside function : %d",n);
    if(n<5)
    {
        n++;
        fun(n);
    }
    else
    {
        return 0;
    }
    printf("\n outside function : %d",n);
}

int main()
{
    fun(1);
}