#include<stdio.h>
int main()
{
	int n,temp;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	int index1=0;
	int index2=0;
	int i,j;
	printf("\nenter elements in array(+ve/-ve)");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);  //2 1 -3 4 -1 5 6 -7
		if(a[i]>0)            //2>0 1>0 -3>0
		{
			b[index1]=a[i];   //2 1 4 5 6
			index1++;        //1  2
			
		}
		else
		{
			c[index2]=a[i];  //-3 -1 -7
			index2++;        //3
		}
	}
	int x=0;
	int y=0;
	printf("\n");
	for(i=0;i<n;i++)
	{
	
	if(y<index2)       //0<-3 
	{

		printf("%d\t",c[y++]);
	}
	if(x<index1)      // 0<2
	{
		printf("%d\t",b[x++]);
	}
  }
}
