#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main() {
	char jawab[100]; // Sebenarnya maksimal karakter yang bisa ditampung disini hanyalah 99 character start from [0,...,98], 99 dan 100 nya berisi null character dan random character (spekulasi)
	cout << "Siapa Nama Kamu ?"; // Menampilkan ke console
	cin >> jawab; // Menyimpan hasil inputan ke dalam char jawab
	cout << "Halo Apa Kabar?" << jawab << "?" << endl; // menampilkan teks beserta char jawab yang sudah diisi tadi
	getch(); // Digunakan untuk mendapatkan karakter yang dimasukan pengguna
	
	cout << "\ndimana Kamu Tinggal ?"; // Menampilkan ke console
	cin >> jawab; // Menyimpan hasil inputan ke dalam char jawab
	cout << "Kamu Tinggal di" << jawab << "?" << endl; // menampilkan teks beserta char jawab yang sudah diisi tadi
	getch(); // Digunakan untuk mendapatkan karakter yang dimasukan pengguna	
}