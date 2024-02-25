#include<stdio.h>
int main()
{
	int a[10],size,i,j,len,max=0;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter element\n");
     for(i=0;i<len;i++)
     {
      	scanf("%d",&a[i]);
     }
     printf("\n");
    printf("enter size of array");
	scanf("%d",&size);
     printf("array after sorting\n");
	for(i=0;i<len-(size-1);i++)
	{
		if(a[j]>0)
		{
			max=0;
			int count=0;
		}
		for(j=i;j<size+i;j++)
		{
		printf("%d\t",a[j]);
	      if(max<a[j])
		    {
			max=a[j];
		    }
		}
	printf("max=%d\n",max);
}
}

