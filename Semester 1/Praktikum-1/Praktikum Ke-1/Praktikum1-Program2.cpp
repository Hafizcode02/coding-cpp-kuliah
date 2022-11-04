// Author : Hafiz Caniago

#include <stdio.h>
#include <iostream.h>
#include <conio.h>

int main(){
	char pesan[] = "STIKOM POLTEK CIREBON"; 
	cout << pesan; // menampikan data dari pesan
	getch(); // Digunakan untuk mendapatkan karakter yang dimasukan pengguna
}

// Hasilnya : STIKOM POLTEK CIREBON

// Lain Cerita jika yang kita cout adalah pesan[1] akan menghasilkan = T
// Mengapa seperti itu? karena char di c++ itu ibaratkan array satu dimensi
// Jadi bentuk sebenarnya dari char pesan[] = {'S','T','I','K','O','M',....,'\0'};
// Dan kita bisa memanggilnya karakter nya 1 per 1 dengan nama_char[index]
// index ini adalah urutan nomernya
// misal kita punya char aku[] = {'H','A','F','I','Z'}
// misal ingin memanggil character 'A' bisa menggunakan aku[1]
// kenapa kok gitu?, bukannya A itu huruf ke 2?
// ini disebabkan karena index di array itu dimulai dari 0 bukan dari 1

// Kode disini dimaksudkan untuk menampilkan sebuah kalimat yang disimpan kedalam sebuah char yang bersifat seperti array