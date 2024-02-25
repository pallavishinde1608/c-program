#include<stdio.h>
void reverseArray(int array[],int start,int end)
{ 
   int temp;
   for(start=0;start<end;start++)
   {
    temp=array[start];
    array[start]=array[end];
    array[end]=temp;
    end--;
   }

}
/*void printArray(int array[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
 }
}*/
int main()
{ 
int i,n,array[5]={1,2,3,4,5};
n=sizeof(array)/sizeof(array[0]);
//printArray(array,n);	
//printf("enter element in array");
//scanf("%d",&array[i]);
for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}

	reverseArray(array,0,n-1);
	printf("\narray in reverse order \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	
//	printArray(array,n);	
}
