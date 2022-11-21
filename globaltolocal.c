#include<stdio.h>
void dis(int m,int s,int e,int total, float per)
{
    printf("maths\tscience\tenglish\ttotal\tper");

    printf("\n %d \t%d \t%d \t%d \t%.2f ",m,s,e,total,per);
}
void calculation(int m,int s,int e)
{
   int total;
   float per;
   total = m+s+e;
   per = total / 3;
   dis(m,s,e,total,per);
}
void setdata()
{
    int m,s,e;
    printf("Enter maths marks :");
    scanf("%d",&m);
    printf("Enter science marks :");
    scanf("%d",&s);
    printf("Enter english marks :");
    scanf("%d",&e);
    calculation(m,s,e);
}
int main()
{
    setdata();
}