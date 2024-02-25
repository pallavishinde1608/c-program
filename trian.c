/*

	*
	*	1	*
	*	1	2	1	*
	*	1	2	3	2	1	*
	*	1	2	1	*
	*	1	*
	*

*/

#include<stdio.h>
void main()
{
    int count=1;
    for(int i=1;i<=7;i++)
    {
        count=1;
        for(int j=1;j<=7;j++)
        {
            if(j==1 || j==2*i-1 || j==15-i*2)
            {
                printf("*");
            }
            else if(i<=4 && j<2*i-1)
            {
                if(j>=2&&j<=3){
                        printf("%d",count++);
                }
                if(j>3&&j<=6){
                    printf("%d",count--);
                }
                //printf("#");
            }
            else if(i>4 && j<15-i*2)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }

        }
       // for(int j;j<=)
        printf("\n");
    }
}

