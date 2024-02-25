#include<stdio.h>
int main()
{
	int i,temp,b[12];
	int a[12]={88,87,73,70,36,87,77,36,83,86,87,77};
	 for(i=0;i<12;i++)
	{
		printf("%d\t",a[i]);
	}
	int start=0;
	int mid=12/2;
	int end=12-1;
	printf("\nReverse array\n");
	for(start=0;start<mid;start++)
	{
			
       temp=a[start];
       a[start]=a[end];
       a[end]=temp;
       end--;
  	}
  
  	for(i=0;i<12;i++)    
  	{
	  
        	printf("%d\t",a[i]);
     }
     printf("\nMinus four each digit\n");
	for(i=0;i<12;i++)
	{
	    b[i]=a[i]-4;
		printf("%d\t",b[i]);
}
	printf("\nASCII VALUES\n");
	for(i=0;i<12;i++)
	{
		printf("%c",b[i]);
	}

}
