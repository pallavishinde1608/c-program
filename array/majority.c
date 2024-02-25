#include<stdio.h>
int main()
{
	int a[8],len,i,temp,j=0,count=1,flag;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter values\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
  }
    printf("display ascending order");
   for(i=0;i<len;i++)
    {
		for(j=i+1;j<len;j++)
		{
			 if(a[j]<a[i])
			 {
			 	temp=a[i];
			 	a[i]=a[j];
			 	a[j]=temp;
			 }
      	}
	}
	for(i=0;i<len;i++)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
        count=1;   	
	 for(i=0;i<len;i++)
    	{
    		 if(a[i]==a[i+1])  
		   {
				count++;
			if(count>(len)/2)
			{
				flag=1;
				break;
			}
	}
		else
		{
			count=1;
			flag=0;
		}
	}
		if(flag)
		{
			printf("majority element in the given array %d",a[i]);
		}
		
		else
		{
			printf("majority element is not found");
		}
	
}
