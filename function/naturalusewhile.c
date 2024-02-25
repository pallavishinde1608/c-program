#include<stdio.h>
int i=1;
void show(int n)
	{
		while(i<=n)
		{
			printf("%d\t",i);
			i++;
			show(n);
		}
	}
	
void main()
   {
	  int n;
     	printf("enetr limit");
	    scanf("%d",&n);
	    show(n);
   }
