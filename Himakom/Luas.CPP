#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main(){
	int sisi;
   float phi = 3.14, r;

   cout << "--- Luas Persegi ----" << endl;
   cout << "Masukan Sisi : "; cin >> sisi;

   cout << "Luas Persegi : " << (sisi * sisi) << endl;

	cout << "--- Luas Lingkaran ----" << endl;
   cout << "Masukan Jari : "; cin >> r;

   cout << "Luas Lingkaran : " << ( phi * r * r) << endl;

   cout << "--- Keliling Lingkaran ----" << endl;
   cout << "Masukan Jari : "; cin >> r;

   cout << "Keliling Lingkaran : " << ( 2 * phi * r ) << endl;

   getch();
}