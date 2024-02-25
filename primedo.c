#include<stdio.h>
int main()
{
	int j=1,no=2,limit,count=0;
	printf("enter limit");
	scanf("%d",&limit);
	do
	{
		count=0;
		for(j=1;j<=no;j++)
		{
		
		if(no%j==0)
          {
          	count++;
          	
		  }
	}
		  if(count==2)
		  {
		  	printf("%d\t",no);
		  }
		  no++;
	
		
			
	}while(j<=limit);
	

}
