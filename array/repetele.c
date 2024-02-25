//Example8: WAP to input 10 values in array and find repetitive elements from array?
#include<stdio.h>
int main()
{
int a[8],i,j;
int len=sizeof(a)/sizeof(a[0]);
printf("enter element")	;
for(i=0;i<len;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<len;i++)
{
	printf("%d\t",a[i]);
}
printf("\nrepeted number\n");
  for(i=0;i<len;i++)
  {
  	for(j=i+1;j<len;j++)
  	{
  		if(a[i]==a[j])
  		{
  			printf("%d\t",a[i]);
		  }
	}
 }	
  
}
