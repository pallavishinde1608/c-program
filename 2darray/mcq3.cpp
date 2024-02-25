#include<iostream>
using namespace std;
int main(){
	int j=1;
	int a[5]={5,4,3,5,2};
	int d=a[4]; //2
	int e=a[d]+10;//a[2]+10=3+10=13
	int f=a[d+2];//a[2+2]=a[4]=2
	printf("D=%d\tE=%d\tF=%d\n",d,e,f);//2 13 2
	return 0;
}

