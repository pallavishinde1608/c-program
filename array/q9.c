/*Example9: WAP to input five values in array and find missing values from array?
Note: Array element should be input in ascending order.
Input:  1   5   9   12    15 
Output: 2 3 4 6 7 8   10 11 13 14*/
#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	int len=sizeof(a)/sizeof(a[0]);
	printf("enter values");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
     {
	printf("%d\t",a[i]);
     }
     printf("\ndisplay ascending order");
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
			
		
		     printf("a[%d]=%d\n",i,a[i]);   //
		 
	}
   
		printf("\n missing  element is \n");
	for(i=0;i<len;i++)                    //
	{
		for(j=a[i];j<a[i+1]-1;)     // 
		{
			printf("%d\t",++j);                      
             
	 	}
    } 

 }

