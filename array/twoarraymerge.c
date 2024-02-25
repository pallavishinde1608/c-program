#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],len1,len2,len3,i,temp,j,k;
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
    
	printf("enter  first array values\n");
	for(i=0;i<len1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len1;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	
    }
    printf("\nenter second arry values\n");
	for(i=0;i<len2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<len2;i++)
	{
		printf("a[%d]=%d\t",i,b[i]);
	
    }
    len3=len1+len2;
   for(i=0;i<len1;i++)
    {
		 c[i]=a[i];     //1 2 3 
	}
	for(i=0;i<len2;i++)

		{
			c[i]=b[i];  //1 2 3 
	    }
	    for(i=0;i<len3;i++)
	    {
	    	
		  for(j=0;j<len3;j++)
			{ 
					if(c[j]<=c[j+1]) //1<=2 T  
					{
						temp=c[j+1]; //=2       //
						c[j+1]=c[j];  //c[1]=1
						c[j]=temp;   //c[0]=2
					}
			}
		}
printf("\nmerge array\n");
for(i=0;i<len3;i++)
{
	printf("%d\t",c[i]);
}
printf("\n\n");
}
