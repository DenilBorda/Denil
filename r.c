#include<stdio.h>
void main()
	{
		int maths[5],science[5],english[5];
		int i,total;
		float per;
 		for(i=0; i<5; i++)
	{
		printf("maths[%d] :",i);
		scanf("%d",&maths[i]);
	}
		printf("\n");
		for(i=0;i<5;i++)
	{
		printf("science[%d] :",i);
		scanf("%d",&science[i]);
	}
		printf("\n");
		for(i=0;i<5;i++)
	{
		printf("english[%d] :",i);
		scanf("%d",&english[i]);
	}

		printf("maths \t science \t english \t total \t per \t grade");

		for(i=0;i<5;i++)
	{
		printf("\n %d",maths[i]);
		printf("\t %d",science[i]);
		printf("\t\t %d",english[i]);

		total=maths[i]+science[i]+english[i];
		printf("\t\t %d",total);

		per=(maths[i]+science[i]+english[i])/3;
		printf("\t %.2f",per);
	
		if(maths[i]<35||science[i]<35||english[i]<35||per<35)
	{
		printf("\t fail");
	}

		else if(per>=90)
	{
		printf("\t A");
	}

		else if(per>80)
	{	
		printf("\t B");
	}

		else if(per>60)
	{
		printf("\t C");
	}

		else if(per>35)
	{
		printf("\t D");
	}	
	}
	}








