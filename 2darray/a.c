#include<stdio.h>
int i=0,temp,j;
void array(int a[],int len){
	if(i<len){
		for(j=i+1;j<len;j++){
			if(a[i]>a[j]){			
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			array(a,len);
			
		}
	}
	
	
}
	
	
	if(i<len){
		printf("%d",a[i++]);
		}
		array(a,len);
	}

int main(){
	int len,a[5],i;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter elements\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	array(a,len);
}
