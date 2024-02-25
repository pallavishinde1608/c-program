#include<stdio.h>
int main()
{
 int a[10],i,j,temp,len,sum;
 len=sizeof(a)/sizeof(a[0]);
 printf("enter element");
 for(i=0;i<len;i++)
 {
 	scanf("%d",&a[i]);
	 }	
	 for(i=0;i<len;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
	 printf("\n");
	 for(i=0;i<len;i++)
	 {
	 	if(a[i]==a[i+1] && a[i]>0 && a[i+1]>0)
	 	{
	 		 printf("\n a[%d]=%d\t a[%d]=%d ",i,a[i],i+1,a[i+1]);
	 		sum=a[i]+a[i+1];
	 		 a[i]=sum;
			 a[i+1]=0;
	 		if(a[i]==a[i+2])
	 		{
	 		
	 			i=i+2;
			 }
			
		 }
	 }
	 
	 
	  printf("\n");
	  for(i=0;i<len;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
	 
	  printf("\n");
	 for(i=0;i<len;i++)
	 {
	 	if(a[i]==0)
	 	{
	 		temp=a[i];
	 	
	 		for(j=i;j<len;j++)
	 		{
	 			a[j]=a[j+1];
		}
			 a[len-1]=temp;
			 
      
	 }

    }
     printf("\n");
    
      for(i=0;i<len;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
}
