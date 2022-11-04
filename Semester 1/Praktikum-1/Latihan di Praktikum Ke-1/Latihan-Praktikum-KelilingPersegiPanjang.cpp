#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main () {
	int length,width;
	cout << "Program Menghitung Keliling Persegi Panjang \n";
	cout << "Nama : Hafiz Caniago \n";
	cout << "Kelas : TI 2 \n";
	cout << "NRP = 14520788 \n";
	
	cout << "\n";
	cout << "Masukan Nilai Panjang (m): ";
	cin >> length;
	cout << "Masukan Nilai Lebar (m): ";
	cin >> width;
	
	cout << "Keliling Persegi Panjang adalah = " << 2 * (length + width) << " m \n";
	
	getch();
}