#include <iostream>

using namespace std;

int main() {

  int starCount = 14;
  int lineCount = 21;
  char star = '*';
  int counter = 0;
  for (int i = (lineCount - 1); i >= 0; i--) {
    // print spaces
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    // print stars
    for (int s = 0; s < starCount; s++) {
      cout << star;
    }
    counter++;
    cout << " line # " << counter << endl;
  }

  return 0;
}
