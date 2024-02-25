#include<stdio.h>
int main()
{
	int a[5],len,i,temp,j;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter values\n");
	for(i=0;i<len;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	
    }
    printf("display dissending order");
   for(i=0;i<len;i++)
    {
		 
		for(j=i+1;j<len;j++)
		{
		 if(a[j]>a[i])
		 {
		 	temp=a[i];
		 	a[i]=a[j];
		 	a[j]=temp;
		 }
      	}
	}
			for(i=0;i<len;i++)
			{
			
		
		     printf("a[%d]=%d\n",i,a[i]);
		 
	}
}
