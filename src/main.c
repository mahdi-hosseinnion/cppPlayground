#include "assert.h"
#include "stdio.h"
#include "string.h"

char *MYstrstr(char *str1, char *str2) {
  while (*str1 != '\0') {

    if (*str1 == *str2) {
      char *temp1 = str1;
      char *temp2 = str2;
      bool didFounded = true;
      while (*temp1 != '\0' && *temp2 != '\0') {
        if (*temp1 != *temp2) {
          didFounded = false;
          break;
        }
        temp1++;
        temp2++;
      }
      if (didFounded) {
        return str1;
      }
    }
    str1++;
    
  }

  return NULL;
}
int main() {

  char str[] = "GeekForTheBestSham";
  char str2[] = "The";
  char *sub;
  char *sub2;
  sub = strstr(str, str2);
  sub2 = MYstrstr(str, str2);
  printf("\nSubstring  is: |%s|", sub);
  printf("\n\nSubstring2 is: |%s|", sub2);
  assert(sub == sub2);
  return 0;
}
