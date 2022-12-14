//Using Recursion
/*
#include<stdio.h>

int fib(int n) {
  if (n == 1)
    return 0; //First digit in the series is 0
  else if (n == 2)
    return 1; //Second digit in the series is 1
  else
    return (fib(n - 1) + fib(n - 2)); //Sum of previous two numbers in the series gives the next number in the series
}

int main() {
  int n = 5;
  int i;
  printf("The fibonacci series is :\n");
  for (i = 1; i <= n; i++) {
    printf("%d ", fib(i));
  }
}
*/


//Without Recursion
#include<stdio.h>

int fib(int n) {
  int arr[5];
  int i;

  arr[0] = 0; // First term is zero
  arr[1] = 1; // Second term is one
  for (i = 2; i <= n; i++) {
    arr[i] = arr[i - 1] + arr[i - 2]; //Calculating the sum of previous two fibonacci numbers
  }
  for (i = 0; i <= n - 1; i++) {
    printf("%d ", arr[i]);
  }
  return n;
}

int main() {
  int n = 5;
  printf("The Fibonacci series is : \n");
  fib(n);
  return 0;
}
