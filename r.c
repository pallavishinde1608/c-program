#include<stdio.h>
int main()
{
	int i,j;
    int a=2;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==6-i)
                printf("1");
            else if(j==4+i)
                printf("%d",i);
            else if(i==5 && j%2==1)
            {
                printf("%d",a);
                a++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}
