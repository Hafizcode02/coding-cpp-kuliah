#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main () {
	int alas,tinggi;
	cout << "Program Menghitung Luas Segi Tiga \n";
	cout << "Nama : Hafiz Caniago \n";
	cout << "Kelas : TI 2 \n";
	cout << "NRP = 14520788 \n";
	
	cout << "\n";
	cout << "Masukan Nilai Alas (m): ";
	cin >> alas;
	cout << "Masukan Nilai Tinggi (m): ";
	cin >> tinggi;
	
	cout << "Luas Segi Tiga adalah = " << 0.5 * (alas * tinggi) << " m2 \n";
	
	getch();
}