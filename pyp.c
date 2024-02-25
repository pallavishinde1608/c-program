#include<stdio.h>

int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  { int k=69;
    for(j=1;j<=9;j++)
    {
    if(j>=6-i && j<=4+i)
    {
    	
        printf("%c",k);
    }
		if(j<5)
        k--;

    else
    {
    	k++;
	}
}
    /*else
    {
    	printf(" ");
	}*/


    printf("\n");
}
}
