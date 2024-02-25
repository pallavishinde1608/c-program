#include<stdio.h>
#include<math.h>

int CheckArmestrong(int x)
{
	if(x>0)
	{
		int res=pow(x%10,3)+CheckArmestrong(x/10);
		return res;
		
	}
}
int main()
{
	int x,y,size=0;
	printf("enter number");
	scanf("%d",&x);
	int arm=CheckArmestrong(x);
     if(arm==x)
     {
     	printf("%d is armestrong number",x);
	 }
	 else
	 {
	 	printf("%d is not armestrong number",x);
	 }
	
}
