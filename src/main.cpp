#include <cassert>
#include <iostream>
#include <math.h>

using namespace std;
// this function return a refrense
int &maxi(int a, int b) { return (a > b) ? a : b; }
int bozorgTar(int a, int b) { return (a > b) ? a : b; }
int ff(int) { return 0; } // declares function f

int main() {

  /*****      refrense / alias*/

  int n = 10;
  int &x = n; // an alias for n
  cout << "n         is: " << n << endl;
  cout << "n address is: " << &n << endl;
  cout << "x         is: " << x << endl;
  cout << "x address is: " << &x << endl;

  /*****      pointers*/
  cout << endl << "Pointers ..." << endl;
  /*
   Pointer is an variable that hold another variable refrense
   * (&) shows the address of pointed variable
   * (*) shows the value of pointed variable
   * define pointers
   * type* pointerName;
   */
  int a = 11;
  int *pa = &a;
  cout << "a value      is: " << a << endl;
  cout << "a address    is: " << &a << endl;
  cout << "pa raw value is: " << pa << endl;
  cout << "pa address   is: " << &pa << endl;
  cout << "pa value     is: " << *pa << endl;
  *pa = 17;
  cout << "we just change *pa to 17" << endl;
  cout << "a value      is: " << a << endl;

  //*****     leftValue/rightValue*/
  cout << endl << "leftValue/rightValue ..." << endl;
  /*
  1) In C++ an lvalue is something that points to a specific memory location. On
   * the other hand, a rvalue is something that doesn't point anywhere. In
   * general, rvalues are temporary and short lived, while lvalues live a longer
   * life since they exist as variables
  2) First of all, let's keep our heads away from any formal definition. In C++
   * an lvalue is something that points to a specific memory location. On the
   * other hand, a rvalue is something that doesn't point anywhere. In general,
   * rvalues are temporary and short lived, while lvalues live a longer life
   * since they exist as variables. It's also fun to think of lvalues as
   * containers and rvalues as things contained in the containers. Without a
   * container, they would expire.
   */

  /*****      arrays pointers*/
  cout << endl << "arrays pointers ..." << endl;

  const int size = 3;
  int b[size] = {111, 222, 333};
  assert(b[0] == *b);
  assert(b[1] == *(b + 1));
  assert(b[2] == *(b + 2));
  cout << "Assertion done!" << endl;
  for (int i = 0; i < size; i++) {
    cout << "[" << i << "]: " << *(b + i) << endl;
  }
  cout << "size of array b is: " << sizeof(b) << endl;

  /*****      new keyword*/
  cout << endl << "new keyword ..." << endl;
  float *pi = new float(3.14);
  cout << "*pi  is :" << *pi << endl;
  *pi = 3.1415;
  cout << "*pi  is :" << *pi << endl;
  float pip = *pi;
  cout << "*pip is :" << pip << endl;

  /*****      delete keyword*/
  cout << endl << "delete keyword ..." << endl;

  /*
   * Delete only works with pointers initialzed using new keyword
   */
  float *khas = new float(6234.81);
  cout << "*khas          is: " << *khas << endl;
  cout << "khas           is: " << khas << endl;
  delete khas;
  cout << "Just delete allocated space dedicated to khas" << endl;
  cout << "*khas          is: " << *khas << endl;
  cout << "khas           is: " << khas << endl;
  // you cannot delete 'const pointer'
  const int *pap = new int(123);
  cout << "*pap          is: " << *pap << endl;
  cout << "pap           is: " << pap << endl;
  delete pap; // ERROR: cannot delete pointer to const objects
  cout << "*pap          is: " << *pap << endl;
  cout << "pap           is: " << pap << endl;

  /*****      pointer arrays*/
  cout << endl << "pointer arrays ..." << endl;
  float *p = new float[20];
  cout << "size of pointer arrays              is: " << sizeof(p) << endl;
  delete[] p;
  cout << "size of pointer arrays after delete is: " << sizeof(p) << endl;

  /*****      const pointer/ pointer const */
  int w = 10;
  int *const cp = &w; // you cannot change pointer value but you can change w
  w = 11;
  *cp = 12;
  // cp = &a;//ERROR

  const int *pc = &w; // you can change pointer value but you can not change w
  w = 13;
  cout << "*pc : " << *pc << endl; // print 13
  // *pc = 14;ERROR
  const int *const cpc =
      &w; // you cannot change pointer value but you can not change w
  // *cpc = 14; // ERROR
  // cpc = &a;  // ERROR

  /*****        an array of pointers*/
  float *pArr[4];
  pArr[0] = new float(3.14159);
  pArr[1] = new float(1.19);

  /*****        function pointers*/
  /* you can use function pointers like lambda in kotlin and path fun to fun
   */
  cout << endl << "function pointers ..." << endl;
  int (*maximumi)(int, int); // declares function pointer pf
  maximumi = &bozorgTar;     // name of function is starting point of it

  cout << "max of 9 and 12 is: " << maximumi(9, 12) << endl;
  return 0;
}
