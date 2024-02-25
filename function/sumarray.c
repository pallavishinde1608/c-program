#include<stdio.h>
int sumArray(int array[],int start,int end)
{ 
if(start>=end)
return 0;
return(array[start]+sumArray(array,start+1,end));
}
  
int main()
{ 
int i,n,array[5];
n=sizeof(array)/sizeof(array[0]);	
printf("enter element in array");
for(i=0;i<n;i++)
{

scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}

int result=sumArray(array,0,n);
	printf("\nsum array is %d\n",result);
}
		
