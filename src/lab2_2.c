#include <stdio.h>

long long factorial(int n) {
  long long result = 1;

  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");

  if (scanf("%d", &n) != 1) {
    printf("Error: enter an integer.\n");
    return 1;
  }

  if (n < 0) {
    printf("Error: n cannot be negative.\n");
  } else if (n > 20) {
    printf("Error: n must be at most 20.\n");
  } else {
    printf("Factorial = %lld\n", factorial(n));
  }

  return 0;
}