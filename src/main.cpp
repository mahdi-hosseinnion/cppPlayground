#include <iostream>
#include <sstream>

using namespace std;
//a template function for converting int to string
template <typename T>
  std::string NumberToString ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }
  
int main() {
	
	int number;
	cout << "inter a number: ";
	cin >> number;
	
	//an int to store kharjeGhesmat
	int kharjGhesmat ,baghimande;
	
	//a string to store final result
	string javab = "" ;
	do{
		kharjGhesmat = number/2;
		baghimande = (number%2);
	  
		javab = NumberToString(baghimande) + javab;
		number = number/2;
	}
	while(kharjGhesmat>0);
	
	cout << "javab: " << javab;
	
	return 0;
}

