#include <iostream>
#include<math.h>

using namespace std;

int base10ToBase8(int n);
int base8ToBase2(int n);

int main() {
	
	int n;
	cout << "Inter base 10 number: ";
	cin >> n;
	

	int y8 = base10ToBase8(n);
	cout << "Base8: " << y8 << endl;
	
	//maale 2
	long y2 = 0;
	int baghimandeBase8, kharj;
	int i = 0;
	do{
		kharj = y8 /10;
		baghimandeBase8 = y8 % 10;
		
		y8 = kharj;
		int base2 = base8ToBase2(baghimandeBase8);
		y2 = (pow(10,i)*base2) + y2;
		i = i+3;
	}while(kharj > 0);
	
	cout << "Base 2: " << y2 << endl;

	
	return 0;
}
int base10ToBase8(int n){
	int y8 = 0;
	int kharjGhesmat , baghimande;
	
	int i = 0;
	do {
		
		kharjGhesmat = n/8;
		baghimande = n%8;
		y8 = (pow(10,i)*baghimande) + y8;
		n = n/8;
		i++;
	}while (kharjGhesmat > 7);
	
	y8 = (pow(10,i)*kharjGhesmat) + y8;
	
	return y8;
}
int base8ToBase2(int n){
	int y2 = 0;
	int kharjGhesmat , baghimande;
	
	int i = 0;
	do {
		
		kharjGhesmat = n/2;
		baghimande = n%2;
		y2 = (pow(10,i)*baghimande) + y2;
		n = n/2;
		i++;
	}while (kharjGhesmat > 1);
	
	y2 = (pow(10,i)*kharjGhesmat) + y2;
	
	return y2;
}

