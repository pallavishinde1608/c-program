#include<stdio.h>
int main()
{
	int a[12],i,len,index;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value array\n");
	
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);         //0 3 6 9 12 14 18 20 22 25 27 22
		
	}
	printf("enter index\n");   //4
	scanf("%d",&index);
	printf("array after operation\n");
	for(i=index;i<len;i++) 
	{
	
	printf("%d\t",a[i]);   	      
	}
	
	for(i=0;i<index;i++)
	{
	printf("%d\t",a[i]);        // 12 14 18 20 22 25 27 22 0 3 6 9 
    }
			
	}
