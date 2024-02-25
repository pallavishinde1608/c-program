//Example6: WAP to input 10 values in array and find occurrence of every element in array?
#include<stdio.h>
int main()
{
	int a[10],i,len,count=1,j,x=-1,b[10],max;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    } 
	for(i=0;i<len;i++)
	{
			count=1;
  	       for(j=i+1;j<len;j++)
  	          {
  	            	if(a[i]==a[j])
  		              {
		  
  	                    	count++;
  		                      b[j]=x;
	                      }
               }
           
            if(b[i]!=x)
             {
             	b[i]=count;
             	if(b[i]>0)
                   printf("%d==>%d\n",a[i],b[i]);
                   
				
				
		      }
	}
	
}
