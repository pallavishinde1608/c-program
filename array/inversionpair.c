#include<stdio.h>
int main()
{
	int a[5],len,i,j;
	len=sizeof(a)/sizeof(a[i]);
	printf("enter value\n");     //1 9 6 4 5
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);     //1 9 6 4 5
	}
	printf("\n");
	int count=0;
    printf("inversion are:");
	for(i=0;i<len;i++)          
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])        //1>9  no     //9>6 yes 9>4 yes 9>5 yes   //6>4 yes 6>5 yes  //4>5 no    
			{ 
				printf("(%d %d)\t",a[i],a[j]); //(9 6) (9 4) (9 5)     (6 4) (6 5)
				count++;    //5
			}
		}
	}
		printf("\nthe number of inversion can be formed from the array is %d",count); //5
		
	
}
