#include <stdio.h>

int is_prime(int n) {
  if (n < 2) {
    return 0;
  }

  for (int i = 2; i <= n / i; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main(void) {
  int n;

  printf("Enter an integer n >= 2: ");

  if (scanf("%d", &n) != 1) {
    printf("Error: enter an integer.\n");
    return 1;
  }

  if (n < 2) {
    printf("Error: n must be at least 2.\n");
    return 1;
  }

  printf("Prime numbers: ");

  for (int number = 2; number <= n; number++) {
    if (is_prime(number)) {
      printf("%d ", number);
    }
  }

  printf("\n");
  return 0;
}