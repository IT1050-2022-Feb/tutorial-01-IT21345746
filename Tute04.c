/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
minimum(int,int);
maximum(int,int);
multiply(int,int);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

minimum( no1, no2)
{
  if (no1<no2)
  minimum = no1;
  else
  minimum = n02;
}

maximum( no1, no2)
{
  if (int no1>no2)
  maximum = no1;
  else
  minimum = no2;
} 

multiply( no1, no2)
{
  multiply = no1*no2;
}
