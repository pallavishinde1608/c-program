#include<stdio.h>
int getMax(int a[])
{
	int m=a[0],i;
	for(i=0; i<5;i++){
		 if(a[i]>m)
		 {
		
		 	m=a[i];
		 }
		 
	}
	return m;
}
int getSmax(int a[])
{
	int smax=a[0],i;
	for(i=0; i<5;i++){
		 if(a[i]>smax)
		 {
		 	int smax=a[i];
	
		 }
		 
	}
	return smax;
	
}
int main(){
	int a[5],i;
	printf("\nEnter five values in array\n");
for(i=0; i<5;i++){
		scanf("%d",&a[i]);
	}
	int result=getMax(a);
	int result1=getSmax(a);
	
	printf("smax =%d\n",result1);
	printf("\nMax value is %d\n",result);
	
	
	return 0;
}

