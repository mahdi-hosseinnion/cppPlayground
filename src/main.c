#include "conio.h"
#include "math.h"
#include "stdio.h"
#include "string.h"
int main() {
  //          simple string
  char str_name[] = "123456789";
  printf("%s\n", str_name);
  //          recive a string from user
  int size = 50;
  printf("Insert your name: (maximum lenght = 50) \n");
  char userName[size];
  scanf("%s", userName);

  printf("your name is: '%s'\n", userName);
  //          append char to string

  char str[] = "mahdi";

  char a = '|';

  char *returnResult = strncat(str, &a, 1);

  printf("Final result is: '%s'\n", str);
  printf("returnResult is: '%s'\n", returnResult);
  //          strcat funciton
  char firstName[] = "Arash";
  char secondName[] = " Jaferi";

  strcat(firstName, secondName);
  printf("Full name is: '%s'\n", firstName);

  // This function finds the first character in the string s1 that matches any
  // character specified in s2 (It excludes terminating null-characters).
  // Declaring three strings
  char s1[] = "geeksforgeeks";
  char s2[] = "app";
  char s3[] = "kite";
  char *r, *t;

  // Checks for matching character
  // no match found
  r = strpbrk(s1, s2);
  if (r != 0)
    printf("First matching character: %c\n", *r);
  else
    printf("Character not found\n");

  // Checks for matching character
  // first match found at "e"
  t = strpbrk(s1, s3);
  if (t != 0)
    printf("First matching character: %c\n", *t);
  else
    printf("Character not found \n");

  return 0;
}
