#include <stdio.h>
#include <iostream.h>
#include <conio.h>

int main () {
	double jam, upah, honor; // pendeklarasian variable
	cout << "Jumlah Jam Kerja"; // mencetak ke console
	cin >> jam; // memasukan inputan sebelumnya ke dalam variable jam
	cout << "Upah Jam Kerja"; // mencetak ke console
	cin >> upah; // memasukan inputan sebelumnya ke dalam variable upah
	honor = upah * jam; // memasukan nilai dari upah x jam ke dalam variable honor
	cout << "Jumlah honor Rp " << honor << endl; // mencetak ke console dengan menambahkan hasil penghitungan honor
	getch(); //Digunakan untuk mendapatkan karakter yang dimasukan pengguna
}

// hasilnya
// Jumlah Jam Kerja 5
// Upah Jam Kerja 10000
// Jumlah honor Rp 50000