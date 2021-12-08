#include <iostream>

using namespace std;

int main() {
  cout << "hello woooorld;" << endl;
  enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };

  for (int day = SUN; day < SAT; day++) {
    cout << " : " << day;
  }

  return 0;
}
