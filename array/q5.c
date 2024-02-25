//Example5: WAP to input five values in array and delete value from specified index and shift array elements at left hand side?
#include<stdio.h>
int main()
{
	int a[5],i,x,index;
	int len=sizeof(a)/sizeof(a[0]);
	printf("enter values");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
     {
	printf("%d\t",a[i]);
     }
     printf("\ndeleted index");
     scanf("%d",&x);
     if(index>=len+1)
     {
     	printf("array not deleted");
     	
	 }
	 else{
	 	for(i=index;i<len-1;i++)
	 	{
	 		a[i]=a[i+1];
		 }
	 	for(i=0;i<len-1;i++)
        {
	     printf("a[%d]=%d\n",i,a[i]);
        }
	 }
     
 }
