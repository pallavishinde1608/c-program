
#include<stdio.h>
int main()
{
	int a[8],i,j,len,count,x;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter element");                //5 2 3 4 7 6 9 8 
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);              //5 2 3 4 7 6 9 8 
	}
	printf("\n");
	printf("enter specific difference");
	scanf("%d",&x);                         //
	printf("the distinct pair of difference %d are :",x);
	count=0;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
				if(a[i]-a[j]==x || a[j]-a[i]==x) // (5-2==5 || 2-5==5) //(7-2==5)  //(8-3==5) //(9-4==5) 
			        {
			         	printf("(%d %d)\t",a[j],a[i]);    //-          // (7 2)   //(8 3)    //(9 4)
			         	count++;               //3
			        }
		}
		
	}
	printf("\n");
	printf("Number of distinct pairs for  difference %d are : %d",x,count);//3
}
