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
     Largest(a[i]);
     
     printf("max=%d\n",max);
     
 }
 int Largest(int a[])
 {
 	int size,j,max,i;
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
		return Largest(a[i]);
	
}
