#include "conio.h"
#include "math.h"
#include "stdio.h"

int main() {
  float p1, p2;
  char c, op, flgequal;
  int flgD;

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
        if (flgD) { // user have entered a '.'
          float digit = (c - '0');
          p1 = p1 + (digit / pow(10, flgD));
          flgD++;
        } else
          p1 = 10 * p1 + (c - '0');
        p2 = 0;
      } else {      // entering second number
        if (flgD) { // user have entered a '.'
          float digit = (c - '0');
          p2 = p2 + (digit / pow(10, flgD));
          flgD++;
        } else
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
        printf("%.3f", p1);
      } else {
        if (op != '=') { // nk
          printf("\n-----------------\n", c);
          printf("%.3f", p1);
        }
        printf("\t%c\n", c);
      }
      p2 = 0;
      flgD = 0;
      op = c;
      break;

    case 'x':
      return 0;

    case 'C': // FIX THIS
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

    case '.':
      flgD = 1;
      printf("%c", c);
      break;
      // sin
    case 's':
      if (op == '=') {
        p1 = sin(p1);
        printf("\t sin\n%.3f", p1);
      } else {
        p2 = sin(p2);
        printf("\t sin\n%.3f", p2);
      }
      break;
      // cos
    case 'c':
      if (op == '=') {
        p1 = cos(p1);
        printf("\t cos\n%.3f", p1);
      } else {
        p2 = cos(p2);
        printf("\t cos\n%.3f", p2);
      }
      break;
      // tan
    case 't':
      if (op == '=') {
        p1 = tan(p1);
        printf("\t tan\n%.3f", p1);
      } else {
        p2 = tan(p2);
        printf("\t tan\n%.3f", p2);
      }
      break;
      // floor
    case 'f':
      if (op == '=') {
        p1 = floor(p1);
        printf("\t floor\n%.3f", p1);
      } else {
        p2 = floor(p2);
        printf("\t floor\n%.3f", p2);
      }
      break;
      // exp
    case 'e':
      if (op == '=') {
        p1 = exp(p1);
        printf("\t exp\n%.3f", p1);
      } else {
        p2 = exp(p2);
        printf("\t exp\n%.3f", p2);
      }
      break;
      // log10
    case 'l':
      if (op == '=') {
        p1 = log10(p1);
        printf("\t log10\n%.3f", p1);
      } else {
        p2 = log10(p2);
        printf("\t log10\n%.3f", p2);
      }
      break;
      // minus
    case 'm':
      if (op == '=') {
        p1 = p1 * -1;
        printf("\t minus\n%.3f", p1);
      } else {
        p2 = p2 * -1;
        printf("\t minus\n%.3f", p2);
      }
      break;
    }
  }
}
