#include <iostream>

using namespace std;

int main() {

  int n;
  cout << "Enter your number: ";
  cin >> n;

  int sumEven = 0;
  int countEven = 0;

  int sumOdd = 0;
  int countOdd = 0;

  do {
    int digit = n % 10;
    n = n / 10;
    if (digit % 2 == 0) {
      // Even
      sumEven += digit;
      countEven++;
    } else {
      // Odd
      sumOdd += digit;
      countOdd++;
    }
  } while (n);

  cout << "Avg of even digits: " << (sumEven / countEven) << endl;
  cout << "Avg of odd digits: " << (sumOdd / countOdd) << endl;
  return 0;
}
