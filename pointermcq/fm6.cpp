#include main()
{
 float sum = 0.0, j =1.0, i = 2.0; 
 while(i/j > 0.001) {
 j = j + 1;
 sum = sum + i/j;
 printf ( "%fn", sum );
 }
}

