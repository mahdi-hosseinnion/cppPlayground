#include <iostream>
#include <math.h>

using namespace std;

int main() {

  float PI = 3.1415;

  for (int k = 1; k <= 4; k++) {
    for (int n = 0; n <= 6; n++) {
      float result = sin(((PI / k) * n));
      cout << result << " | ";
    }
    cout << endl;
  }

  return 0;
}
