#include<stdio.h>
int main()
{
	int a[11],i,len,count=1,j,x=-1,k,b[8],max;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");          // 2 3 3 5 3 4 1 7 7 7 7
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    } 
	for(i=0;i<len;i++)
	{
			count=1;
  	       for(j=i+1;j<len;j++)
  	          {
  	            	if(a[i]==a[j])  //2==3   3==3    5==3   4==1    7==7
  		              {
		  
  	                    	count++;  //1    3       1       1       4
  		                      b[j]=x;     //-1
	                      }
               }
           
            if(b[i]!=x)            //
             {
             	b[i]=count;
             	if(b[i]>0)
                   printf("%d==>%d\n",a[i],b[i]);	//1    3       1       1       4
				
		      }
		    
		     	if(max<b[i])
		     	{
		     		max=b[i];
		     	  k=i;
		     	}
		     }
		     		printf("The maximum repeating number %d is %d times",a[i],max);	
}
