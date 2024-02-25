#include<iostream>
using namespace std;
int main(){
   int a[5]={10,20,30,40,50};
   for(int i=0;i<5;i++){
   	a[i]=(a[i]+20);//a[0]+20=10+20=30 20+20=40
   	printf("%d\n",a[i]);//30  40 50 60 70
   }
	return 0;
}

