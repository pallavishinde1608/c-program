#include<stdio.h>
int start=1;
void Even(int start,int end)
{
	if(start>end)
	
		return;
		if(start%2==0)
		printf("%d\t",start);
		start++;
	     Even(start,end);
	     

}
int main()
{
    int start,end;
    printf("enter start");
    scanf("%d",&start);
    printf("enter end");
    scanf("%d",&end);
    printf("even number\n");
	Even(start,end);
}


    
	

