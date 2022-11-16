#include <stdio.h>
int reverse(int n) 
{
  int b = 0, d;
  
  while (n != 0) 
  {
    d = n % 10;
    b = b * 10 + d;
    n = n/10;
  }
  return b;
}
int main()
{
    int n,a;
    printf("Enter Number :");
    scanf("%d",&n);
    a = reverse (n);
    printf("reverse number is %d",a);
}
