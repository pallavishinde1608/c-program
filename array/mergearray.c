#include<stdio.h>
int main()
{
	int a[6],b[6],i,j=0,len1,len2,len3,k;
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
	len3=len1+len2;
	int c[len3];
	printf("enter value array first\n");
	
	for(i=0;i<len1;i++)
	{
	scanf("%d",&a[i]);
		
	}
	printf("enter value array second");
	for(i=0;i<len2;i++)
	{
	scanf("%d",&b[i]);	
	}
	for(i=0;i<len3;i++)
	{
	
	
	if(i>=len1)
	{
		c[i]=b[j++];

		}
		else
		{
			c[i]=a[i];
			}
	}
				printf("display merge array ");
				for(i=0;i<len3;i++)
				{
					printf("%d\t",c[i]);
				}
				
				
			
	}
