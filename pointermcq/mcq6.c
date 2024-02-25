void main()
{ int k = 5;
 int *p = &k;  //p store address of k element is 5
 int **m = &p;  //m store address of p means k is 5
 **m = 6;//put element 6 in m
 printf("%d\n", k);//6
}
