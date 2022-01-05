#include <math.h>
#include <stdio.h>

int gaussian(float A[9][9], int n, float c[]) {
  for (int j = 0; j < n; j++) {
    for (int i = (n - 1); i > j; i--) {
      float zarib = -1 * ((A[i][j]) / (A[j][j]));
      for (int w = 0; w < n; w++) {
        float zarbShodeDarZarib = zarib * A[j][w];
        A[i][w] = A[i][w] + zarbShodeDarZarib;
      }
      float zarbShodeDarZarib = zarib * c[j];
      c[i] = c[i] + zarbShodeDarZarib;
    }
  }
}

int printXs(float A[9][9], int n, float c[]) {
  float answerList[9] = {0};
  for (int i = (n - 1); i >= 0; i--) {
    float sum = 0;
    for (int j = (i + 1); j < n; j++) {

      sum -= answerList[j] * A[i][j];
    }
    float xn = (c[i] + sum) / A[i][i];
    answerList[i] = xn;
  }
  for (int i = 0; i < n; i++) {
    printf("x#%d: %2.2f \n", (i + 1), answerList[i]);
  }
}

int main() {
  // n should be smaller then 9
  int n;
  printf("Inter the size of matrix: ");
  scanf("%d", &n);
  printf("A[Radif][Seton]");
  float A[9][9];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {

      printf("A[%d][%d]: ", (i + 1), (j + 1));
      scanf("%f", &A[i][j]);
    }
  }
  float c[9];
  for (int i = 0; i < n; i++) {
    printf("c[%d]: ", (i + 1));
    scanf("%f", &c[i]);
  }
  gaussian(A, n, c);
  printXs(A, n, c);

  return 0;
}
