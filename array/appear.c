#include<stdio.h>
int main()
{
	int a[8],len,i,count=0,x;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter values\n");           // 1 3 3 5 3 2 3 3 
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
  }
   
       printf("enter given element");   //3
	   scanf("%d",&x); 	
	 for(i=0;i<len;i++)
    	{
    	
		 if(x==a[i])     //  3==3
		   {
				count++;    // count =5
			}
		}

		if(count>len/2)         //5>8/2 = 5>4
		{
			printf("%d appears more than %d time element in the given array",x,len/2);  
		}
		
		else
		{
			printf("%d is not appear more than %d time element in the array",x,len/2); 
	    }
	
}
	

