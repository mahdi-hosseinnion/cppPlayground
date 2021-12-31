#include "stdio.h"
#include <math.h>

int main() {

  int n;
  printf("Enter a n: ");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }
  if (sum == n) {
    printf("Your number is perfect");
  } else {
    printf("Your number is not perfect!");
  }

  return 0;
}
