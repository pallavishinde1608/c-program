#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *ptr,i,start,end,temp,mid;
	ptr=a;
	printf("display array\n");
	for(i=0;i<5;i++)
      {
      	printf("%d\t",ptr[i]);
	 
     }
     end=5-1;
     mid=5/2;
     start=0;
     for(start=0;start<mid;start++)
     {
     temp=*(ptr+start);
     *(ptr+start)=*(ptr+end);
     *(ptr+end)=temp;
     end--;
 }
 printf("\nreverse array\n");
 for(i=0;i<5;i++)
 {
 	
     printf("%d\t",ptr[i]);
 }
}
