#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main() {
	double jam,upah,honor;
	cout << "Jumlah Jam Kerja? : ";
	cin >> jam;
	cout << "Upah Per Jam Kerja? : ";
	cin >> upah;
	honor = upah * jam;
	cout << "Jumlah Honor Rp."<<honor<<endl;
	getch();
}

// Hasil 
// Jumlah Jam Kerja? : contoh(10)
// Upah Per Jam Kerja? : contoh(100000)
// Jumlah Honor Rp.1000000