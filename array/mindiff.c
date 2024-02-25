#include<stdio.h>
int main()
{
	int a[10],len,i,j,diff,min,a1,b1;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter values\n");       //7 9 5 11 7 4 12 6 2 11
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);        //7 9 5 11 7 4 12 6 2 11
	}
	printf("\n");
	min=a[1]-a[0];
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]<a[j])          
			{
				
				diff=a[j]-a[i];
		
		        printf("[%d %d]=%d\t",a[i],a[j],diff);
		      }
		
			 if(diff<min)
	         	{
                    min=diff;
                    a1=i;
                    b1=j;
                    
                }
     	}
   }
		printf("\nThe minimum distance between %d and %d is : %d\n",a[a1],a[b1],min);
}
            
            
           
			
            
	     	    

                	
     
    

