#include<stdio.h>
int main()
{
	int no,i,rem,sum=0,temp,square;
	printf("enter number");
	scanf("%d",&no);
	temp=no;
	square=temp*temp;
	printf("\nsquare is %d",square);
		
	for(i=1;i<=no;i++)
	{
		rem=square%10;
		sum=sum+rem;
		square=square/10;
		
	}
		printf("\nsum is %d",sum);
		
	
	if(sum==no)
	{
		printf("\nnumber is neon");
	}
	else
	{
		printf("\nnumber is not neon");
	}
}
