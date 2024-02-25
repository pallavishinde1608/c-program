void swap (int * a, int * b)
{ int * temp;
 temp = a;
 a = b;
 b = temp;
}
int main( )
{ int p = 0, q = 1;
 swap (&p, &q);
}
