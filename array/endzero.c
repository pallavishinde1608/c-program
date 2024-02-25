#include<stdio.h>
int main()
{
	int a[10],i,len,temp,j=0;
	len=sizeof(a)/sizeof(a[i]);
	printf("enter values");        // 2 5 7 0 4 7 -5 8 0
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
    }
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);        // 2 5 7 0 4 7 -5 8 0
	}
	printf("\n");
	j=0;
	for(i=0;i<len;i++)
      { 
      	if(a[i]!=0)          //a[0]!=0=>2!=0  //5 //7//0 
		   {
	       	temp=a[i];       // temp=2 
	        a[i]=a[j];       //2=a[0]
	        a[j]=temp;       //2=temp //5//7//  //4//7//-5//8//  / 
	        j++;
		 }
	}
	printf("Display array");
	for(i=0;i<len;i++)
	  	{
		    printf("%d\t",a[i]);
	    }
	
}




