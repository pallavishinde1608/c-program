#include<stdio.h>
int main()
{
	int a[5],len,i,temp,start,mid,end;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display array value\n");
	start=0;
	mid=len/2;
	end=len-1;
	for(start=0;start<mid;start++)
	{
			
       temp=a[start];
       a[start]=a[end];
       a[end]=temp;
       end--;
  	}
  
  	for(i=0;i<len;i++)    
  	{
	  
        	printf("%d\t",a[i]);
     }
}


