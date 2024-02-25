#include<stdio.h>
int main()
{

int i;
i=0;
while (i<=10)
{ ++i;
 if (i%2==0)
 { break;
 }
 printf ("I = %d\n",i);
}
}
