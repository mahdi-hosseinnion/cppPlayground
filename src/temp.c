#include <stdio.h>
int main() {
  int n = 4;
  float x[10] = {2, -3, 5, -1};
  float A[20][20] = {
      {2, 5, 3, -3}, {-2, -2, 3, 0}, {1, 2, 3, 4}, {-5, -4, -3, -2}};
  int i, j, k; //, n;
  float c;
  // float A[20][20], c, x[10];
  // printf("\nEnter the size of matrix: ");
  // scanf_s("%d", &n);
  // printf("\nEnter the elements of augmented matrix row-wise:\n");
  // for (i = 1; i <= n; i++) {
  //   for (j = 1; j <= (n + 1); j++) {
  //     printf(" A[%d][%d]:", i, j);
  //     scanf_s("%f", &A[i][j]);
  //   }
  // }
  /* Now finding the elements of diagonal matrix */
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      if (i != j) {
        c = A[j][i] / A[j][j];
        for (k = 1; k <= n + 1; k++) {
          A[k][i] = A[k][i] - c * A[k][j];
        }
      }
    }
  }
  printf("\nThe solution is:\n");
  for (i = 1; i <= n; i++) {
    x[i] = A[n + 1][i] / A[i][i];
    printf("\n x%d=%f\n", i, x[i]);
  }
  return (0);
}
