#include <stdio.h>
int main() {
  int a[10][10],i,j, transpose[10][10], r, c;
  printf("Enter rows and columns: ");          //3 2
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");       
  for (i=0;i<r;i++)
  {
  for (j=0;j<c;j++)
     {
      printf("Enter element a[%d %d]: ",i,j);     // 1 2 3 4 5 6 
      scanf("%d", &a[i][j]);
     }
}

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (i=0;i<r;i++)
  {
      for (j=0;j<c;j++) 
	  {
           printf("%d  ",a[i][j]);        // 1 2
		                                 //  3 4 
										//  5 6 
             if (j==c-1)               // 0==2-1=1
             {
			 
               printf("\n");
             }
       }
   }

  // computing the transpose
  for (i = 0; i < r; i++)
  {
           for (j = 0; j < c; j++) 
              {
                transpose[j][i] = a[i][j];  //1                  
										   //2
               }
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (i = 0;i < c;i++)
  {
            for (j = 0; j < r; j++) 
			{
               printf("%d  ", transpose[i][j]);   // 1 3 5
                                                  // 2 4 6
                 if (j == r - 1)  //3-1=2 
                {
				  printf("\n"); 
                }
  }
}
  return 0;
}
