#include <cassert>
#include <iostream>

using namespace std;

typedef int adad;

typedef int intArray[];

/* Main function*/
int main() {

  /* Example #1              */

  adad aa = 8;

  cout << "add = " << aa << endl;

  aa = aa + 2 * 6;

  cout << "add = " << aa << endl;

  /* Example #2              */

  intArray arr = {123, 12342, 1, 214, 124, 14141};

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
