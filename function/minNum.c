#include<stdio.h>
int getMin(int a[])
{
	int m=a[0],i;
	for(i=0; i<5;i++){
		 if(a[i]<m)
		 {
		 	m=a[i];
		 }
		 
	}
	return m;
}
int main(){
	int a[5],i;
	printf("\nEnter five values in array\n");
for(i=0; i<5;i++){
		scanf("%d",&a[i]);
	}
	int result=getMin(a);
	printf("\nMin value is %d\n",result);
	
	
	return 0;
}

