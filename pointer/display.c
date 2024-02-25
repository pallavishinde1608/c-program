#include<stdio.h>
int main()
		{ 
		  int *ptr,size,i;       
		  printf("\n\n");
		  printf("\nhow  much memory u required\n");
		  scanf("%d",&size);
		  for(i=1;i<=size;i++)
		  { 
		     printf("\nEnter value on %u block\n",ptr);//10 20 30 40 50
		     scanf("%d",&ptr);
		     ptr++;
            }
		  ptr=ptr-size;
		  printf("\nDisplay all values\n");
		  for(i=1;i<=size;i++)
		  { 
		    printf(" %u---->%d\n",ptr,*ptr);
		    ptr++;
		  }
		    
		}


