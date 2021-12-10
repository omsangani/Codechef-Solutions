#include<stdio.h>
int factorial(int);
int main()
{
   int num;
   int fact = 1;
   scanf("%d",&num);
   printf("%d\n", factorial(num));
   return 0;
} 
int factorial(int n)
{
   int c;
   int r = 1;
   for( c = 1 ; c <= n ; c++ )
        r = r*c; 
   return(r);
}