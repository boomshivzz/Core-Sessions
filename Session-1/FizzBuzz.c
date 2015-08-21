#include <stdio.h>

/*
Write a program that prints the integers from 1 to 100. 
But for multiples of 3 print "Fizz" instead of the number, 
and for the multiples of 5 print "Buzz".  
For numbers which are multiples of both 3 and 5 print "FizzBuzz".
*/

// Solution using logical operation
void method1() {
  int number;
  for(number=1; number<=100; ++number){
    if(number%3==0 && number%5==0){
      printf("FizzBuzz\n");
    }
    else if(number%3==0){
      printf("Fizz\n");
    }
    else if(number%5==0){
      printf("Buzz\n");
    }
    else{
      printf("%d\n",number);
    }
  }
}

// Solution using bitwise operations
void method2(){
  int fizz=1, buzz=2, number, status;
  char* words[4] = {"","Fizz","Buzz","FizzBuzz"};
  for(number=1; number<=100; ++number){
    status=0;
    status |= (number%3==0)?fizz:0;
    status |= (number%5==0)?buzz:0;
    if(!status)
      printf("%d\n", number);
    else
      printf("%s\n", words[status]);
  }
}

int main(int argc, char const *argv[]) {
  method1();	
  method2();
  return 0;
}
