#include<stdio.h>
struct student
{
    int id;
    char name[50];
    int a,b,c,total;
    float per;
};
int main()
{
    struct student a[5],b;
    int i;
    for(i=0; i<5; i++)
    {
        printf("Enter id :");
        scanf("%d",&a[i].id);
        printf("Enter name :");
        scanf("%s",&a[i].name);
        printf("Enter maths :");
        scanf("%d",&a[i].a);
        printf("Enter sci :");
        scanf("%d",&a[i].b);
        printf("Enter eng :");
        scanf("%d",&a[i].c);

    }
    printf("id \tname \tmaths \tsci \teng \ttotal \tper");
    for(i=0; i<5; i++)
    {
       a[i].total = a[i].a + a[i].b + a[i].c;
        a[i].per = a[i].total / 3;
        printf("\n%d \t%s \t%d \t%d \t%d \t%d \t%.2f",a[i].id,a[i].name,a[i].a,a[i].b,a[i].c,a[i].total,a[i].per);
    }
}
