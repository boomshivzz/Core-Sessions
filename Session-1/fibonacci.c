#include <stdio.h>

/*
•Print 20th Fibonacci number. Fibonacci series is series of 1,1,2,3,5,8...N. 
*/

//Function to generate Nth fibonacci number
unsigned long long generateFib(int nth){
  int iterator;
  unsigned long long a,b,c;
  a=0;
  b=1;
  for(iterator=1; iterator<nth; ++iterator){
    c=b+a;
    a=b;
    b=c;
  }
  return b;
}

int main(int argc, char const *argv[]) {
  int nth;
  unsigned long long number;
  printf("Enter the fibonacci number index: ");
  scanf(" %d",&nth);
  number=generateFib(nth);
  printf("%llu\n",number);
  return 0;
}
