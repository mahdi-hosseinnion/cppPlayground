#include <math.h>
#include <stdio.h>

int gaussian(float A[][8], int n, float c[]) {
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

int printXs(float A[][8], int n, float c[]) {
  float answerList[n] = {0};
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
  printf("4*4\n");
  int n = 4;
  float c[n] = {2, -3, 5, -1};
  float arr[n][8] = {
      {2, 5, 3, -3}, {-2, -2, 3, 0}, {1, 2, 3, 4}, {-5, -4, -3, -2}};
  gaussian(arr, n, c);
  printXs(arr, n, c);
  printf("3*3\n");
  n = 3;
  float cc[n] = {0, 4, 2};
  float arrr[n][8] = {{1, 1, 1}, {1, -2, 2}, {1, 2, -1}};
  gaussian(arrr, n, cc);
  printXs(arrr, n, cc);

  return 0;
}
