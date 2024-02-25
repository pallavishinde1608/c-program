#include<stdio.h>
int main()
{    int arr[] = {0,1,2,3,4} ; 
     int *ptr, i; 
     for (ptr = arr + 4 ; ptr >= arr; ptr--)//0+4 4>=0 3 2 1 0  
         printf ("%d\t", arr [ptr-arr]);//arr[4-0]=  4 3 2 1 0
      	return 0;
}

