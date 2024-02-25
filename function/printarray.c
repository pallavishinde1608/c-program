#include<stdio.h>
//#define max_size 100
void printarray(int array[],int start,int len);
int main()
{ 
int i,n,array[10];
printf("enter size of array");
scanf("%d",&n);
printf("enter element in array");
for(i=0;i<n;i++)
{
	scanf("%d",&array[i]);
}
printarray(array,0,n);
return 0;
	
}
void printarray(int array[],int start,int len)
{ 
	if(start>=len)
	return;
	printf("%d\t",array[start]);
	printarray(array,start+1,len);
}
