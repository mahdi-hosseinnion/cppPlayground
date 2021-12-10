#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int n;
  cout << "How many number do you want to enter? ";
  cin >> n;

  double firstSigma = 0;
  double secondSigma = 0;
  for (int i = 0; i < n; i++) {
    double x;
    cout << "Enter #" << i + 1 << " number: ";
    cin >> x;
    firstSigma += pow(x, 2);
    secondSigma += x;
  }
  cout << "firstSigma :" << firstSigma << endl;
  cout << "secondSigma :" << secondSigma << endl;
  double firstHalf = firstSigma / n;
  double secondHalf = pow((secondSigma / n), 2);

  double vee = firstHalf - secondHalf;

  cout << "firstHalf :" << firstHalf << endl;
  cout << "secondHalf :" << secondHalf << endl;

  cout << "V = " << vee << endl;

  return 0;
}
