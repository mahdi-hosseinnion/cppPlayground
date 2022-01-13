#include "stdio.h"

const int size = 100;

void convertAtoaAndReverse(char string[]) {

  for (int i = 0; i < size; i++) {
    char temp = string[i];
    if (temp >= 'a' && temp <= 'z') {
      temp -= ('a' - 'A');
    } else if (temp >= 'A' && temp <= 'z') {
      temp += ('a' - 'A');
    }
    string[i] = temp;
  }
}
int main() {

  char string[size];
  printf("Inter a string: (maximum lenght = %d)", size);
  scanf("%s", string);
  convertAtoaAndReverse(string);
  printf("Result is: %s", string);

  return 0;
}
