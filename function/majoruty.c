#include<stdio.h>
void majorityElement(int a[],int n)
{
	int maxCount=0;
	int index=-1,i,j;
   
	for(i=0;i<n;i++)
	{
        int count=0;   	
	 for(j=0;i<n;j++)
    	{
    		 if(a[i]==a[j])  
				count++;
			}
			if(count>maxCount)
			{
				maxCount=count;
			}
	}
	if(maxCount>n/2)
	{
		return 1;
	}
	else
	{
	   return 0;
	}
	
}
void main()
{
	int a[]={1,1,2,1,3,5,1},i;
	int n=sizeof(a)/sizeof(a[0]);
	int x= majorityElement(a[i],n);
		if(x==1)
	{
		printf("%d",a[i]);
	}
	else
	{
		printf("no majority ");
	}
	majorityElement(a,n);
}
