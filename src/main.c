#include "math.h"
#include "stdio.h"

#define PI 3.141592

int factor(int n) {
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

double Term1(double x, int n) {
  double result;
  result = (pow(x, n) / (factor(n)));
  return result;
}

double Term2(double x, int n, double prvterm) {
  double result;
  result = (((pow(x, 2.0)) * (prvterm)) / (n * (n - 1)));
  return result;
}
int main() {

  double x = (PI / 4), sinx1 = 0;
  int n;
  int manfi = 0;
  // 1st Approach
  for (n = 1; n <= 19; n += 2) {
    if (manfi) {
      sinx1 -= Term1(x, n);
      manfi = 0;
    } else {
      sinx1 += Term1(x, n);
      manfi = 1;
    }
  }
  printf("1st Approach (sinx1): %0.2f \n", sinx1);

  // 2nd Approach
  double sinx2 = 0.0, prvterm = 0.0;

  manfi = 1;
  sinx2 = prvterm = Term1(x, 1);

  for (n = 3; n <= 19; n += 2) {
    prvterm = Term1(x, n - 2);
    if (manfi) {
      sinx2 -= Term2(x, n, prvterm);
      manfi = 0;
    } else {
      sinx2 += Term2(x, n, prvterm);
      manfi = 1;
    }
  }

  printf("2nd Approach (sinx2): %0.2f \n", sinx2);
  printf("sin(x):               %0.2f \n", sin(x));

  return 0;
}
