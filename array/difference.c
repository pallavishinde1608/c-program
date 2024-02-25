#include<stdio.h>
int main()
{
	int a[6],len,i,j,diff,max,a1,b1;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter values\n");       //7 9 5 6 13 2 
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);        //7 9 5 6 13 2
	}
	printf("\n");
	max=a[1]-a[0];              //max=9-7=2
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]<a[j])          //7<9 true 7<13true 9<13 5<6 5<13 6<13 
			{
				
				diff=a[j]-a[i];   //9-7=2  6 4 1 8 7
		
			printf("\n[%d %d]=%d\n",a[i],a[j],diff);
		}
	
        

			if(diff>max)      //2>2  6>2 4>6 1>6 8>6 7>8 false
	         	{
                   max=diff; //  6    8  
                a1=i;
                b1=j;
                }
			
      }

	}

            printf("\nThe maximum difference element in the array is : %d\n",max); //8
            printf("\nThe elements which provide maximum difference is :(%d %d) \n",a[a1],a[b1]);
        
}
            
           
			
            
	     	    

                	
     
    

