#include <cassert>
#include <iostream>

using namespace std;

/* Main function*/
int main() {

  // 1D array ///
  int a[4] = {1, 2, 3, 4};

  // print
  cout << "1D" << endl;
  for (int i = 0; i < 4; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  // 2D array ///
  int b[2][3] = {1, 2, 3, 4, 5, 6};
  int c[2][3] = {{1, 2, 3}, {4, 5, 6}};

  // print
  cout << "2D" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << b[i][j] << " ";
      assert(b[i][j] == c[i][j]);
    }
    cout << endl;
  }
  cout << endl;
  // 3d array ///
  int d[4][3][2] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 11, 12,
                    13, 14, 15, 16, 17, 18, 19, 20, 21, 22,  23, 24};
  int e[4][3][2] = {{{10, 20}, {30, 40}, {50, 60}},
                    {{70, 80}, {90, 100}, {11, 12}},
                    {{13, 14}, {15, 16}, {17, 18}},
                    {{19, 20}, {21, 22}, {23, 24}}};

  cout << "3D" << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 2; k++) {
        cout << d[i][j][k] << " ";
        assert(d[i][j][k] == e[i][j][k]);
      }
      cout << "/ ";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}
