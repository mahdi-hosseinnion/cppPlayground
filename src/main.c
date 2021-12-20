#include "conio.h"
#include "stdio.h"
int main() {
  int p1, p2;
  char c, op, flgequal, flgD;

  p1 = p2 = 0;
  op = '=';
  flgequal = 1;
  flgD = 0;

  printf("0\n");

  while (1) {
    c = getch(); // ASCII code

    if (c == '\r') // 13
      c = '=';

    switch (c) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      if (op == '=') { // entering first number
        if (flgequal) {
          p1 = 0;
          flgequal = 0;
          printf("\n");
        }
        if (flgD)
          p1 = 10 * p1 +
               (c - '0'); // A new code for floating-point digits is required
        else
          p1 = 10 * p1 + (c - '0');
        p2 = 0;
      } else { // entering second number
        if (flgD)
          p2 = 10 * p2 +
               (c - '0'); // A new code for floating-point digits is required
        else
          p2 = 10 * p2 + (c - '0');
      }
      printf("%c", c);
      break;

    case '+':
    case '-':
    case '*':
    case '/':
    case '=':
      switch (op) { // nk
      case '+':
        p1 = p1 + p2;
        break;
      case '-':
        p1 = p1 - p2;
        break;
      case '*':
        p1 = p1 * p2;
        break;
      case '/':
        p1 = p1 / p2; // Add a constraint for division by zero
      }

      if (c == '=') {
        flgequal = 1;
        printf("\t=\n");
        printf("-----------------\n", c);
        printf("%d", p1);
      } else {
        if (op != '=') { // nk
          printf("\n-----------------\n", c);
          printf("%d", p1);
        }
        printf("\t%c\n", c);
      }
      p2 = 0;
      flgD = 0;
      op = c;
      break;

    case 'x':
      return 0;

    case 'c':
      if (op == '=')
        p1 = 0;
      else
        p2 = 0;
      printf("\tC\n");
      printf("0\n");
      break;

    case 'a':
      flgequal = 1;
      op = '=';
      p1 = p2 = 0;
      printf("\tA\n");
      printf("\n0\n");
      break;

    case '.': // For defining the floating point computations in the calculator
      flgD = 1;
    }
  }
}
