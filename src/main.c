#include <math.h>
#include <stdio.h>

int gaussian(float A[][8], int n, float c[]) {
  int u = 0;
  for (int i = 0; i < n; i++) {
    for (int j = (n - 1); j > i; j--) {
      if (i >= 1) {
        u++;
      }
      float zarib = -1 * ((A[j][i]) / (A[u][i]));

      for (int w = 0; w < n; w++) {
        float zarbShodeDarZarib = zarib * A[u][w];
        A[j][w] = A[j][w] + zarbShodeDarZarib;
      }
      float zarbShodeDarZarib = zarib * c[u];
      c[j] = c[j] + zarbShodeDarZarib;
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
  for (int i = n; i > 0; i--) {
    printf("x#%d: %1.1f \n", i, answerList[(i - 1)]);
  }
}

int main() {
  // n should be smaller then 9
  int n = 3;
  float c[n] = {0, 4, 2};
  float arr[n][8] = {{1, 1, 1}, {1, -2, 2}, {1, 2, -1}};

  gaussian(arr, n, c);
  printXs(arr, n, c);

  return 0;
}
