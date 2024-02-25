#include<stdio.h>
#include<stdlib.h>
		void main(){
		   int *ptr,size,i;
		   printf("\n\n\n");
		   printf("\nEnter size\n");
		   scanf("%d",&size);
		   ptr=(int*)malloc(sizeof(int)*size);
		   printf("\nEnter values in array\n");
		   for(i=0;i<size;i++)
		   { scanf("%d",&ptr[i]);
		   }
		   printf("\nDisplay array values\n");
		   for(i=0;i<size;i++)
		   { printf("%d\n",ptr[i]);
		   }
		}

