//Example7: WAP to input 10 values in array and remove the duplicated values from array?
#include<stdio.h>
int main()
{
int a[10],i,j,k;
int len=sizeof(a)/sizeof(a[0]);
printf("enter element\n")	;
for(i=0;i<len;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<len;i++)
{
	printf("%d\t",a[i]);
}
	
  for(i=0;i<len;i++)
  {
  	for(j=i+1;j<len;j++)
  	{
  		if(a[i]==a[j])
  		{
  			for(k=j;k<len;k++)
  			{
  				a[k]=a[k+1];
			  }
			  len--;
			  j--;
		  }
	}
 }	
printf("\narray after deletion\n");
for(i=0;i<len;i++)
{
	printf("%d\t",a[i]);
}
  
}
