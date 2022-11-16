<<<<<<< HEAD
#include<stdio.h>
int main()
{

	int i,n,sum;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
	int odd =0, even = 0;
	for(int i=0;i<n;i++)
	{
	  if(a[i]%2==1)
	  odd++;
       	   else
		even++;
	}
		printf("\n Odd: %d",odd);
		printf("\n Even: %d",even);

		sum=odd + even;
		printf("\n sum :%d",sum);
		
		if(i%2==1)
	{
	  printf("\n odd total  : %d",odd);
	}
	else
	{
	printf("\n even total  : %d",even);
   	}

	
=======
#include<stdio.h>
int main()
{

	int i,n,sum;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
	int odd =0, even = 0;
	for(int i=0;i<n;i++)
	{
	  if(a[i]%2==1)
	  odd++;
       	   else
		even++;
	}
		printf("\n Odd: %d",odd);
		printf("\n Even: %d",even);

		sum=odd + even;
		printf("\n sum :%d",sum);
		
		if(i%2==1)
	{
	  printf("\n odd total  : %d",odd);
	}
	else
	{
	printf("\n even total  : %d",even);
   	}

	
>>>>>>> 423b6036f2aa5d4abdbf8a3a383fca9c2e32c5b0
}