#include <conio.h> // Header Library yang berisi perintah-perintah untuk menampilkan antarmuka pada konsol pengguna
#include <iostream.h> // Header Library Standar Input Output pada bahasa C++
#include <stdio.h> // Header Library Standar Input Output pada bahasa C tapi bisa juga digunakan pada bahasa C++


main(){ // Badan Program
	char nama[50]; // Variable nama dengan tipe data char yang bisa menampung karakter sebanyak 50 karakter
   char alamat[100]; // Variable alamat dengan tipe data char yang bisa menampung karakter sebanyak 100 karakter
   char kelas[50]; // Variable kelas dengan tipe data char yang bisa menampung karakter sebanyak 50 karakter
   int nrp; // Variable nrp dengan tipe data int(angka)

   // cout -> Fungsi Untuk Menampilkan sesuatu ke konsol
   // cin -> Fungsi Untuk Memberikan Inputan/Isi terhadap suatu variable
   // gets -> Fungsi Untuk Memberikan Inputan/Isi terhadap suatu variable, namun dengan fungsi ini kita bisa menampung space/tab kedalam variable tersebut
   // Hanya Berfungsi di tipe data Char

   cout << "Nama : ";
   gets(nama);
   cout << "NRP : ";
   cin >> nrp;
   cout << "Kelas : ";
   gets(kelas);
   cout << "Alamat : ";
   gets(alamat);

   // Menampilkan Data Yang sudah di Tampung tadi

   // Untuk Memberikan enter/baris baru kita bisa menggunakan `endl` atau menggunakan '\n'.
   // Contoh Penggunaan `endl` : cout << "Nama" << endl;
   // Contoh Penggunaan '\n' : cout << "Nama \n"

   cout << "\n===================================\n";

   cout << "NRP : " << nrp << endl;
   cout << "Nama : " << nama << endl;
   cout << "Kelas : " << nama << endl;
   cout << "Alamat : " << nama << endl;

   getch(); // Menahan (Pause) Program sampai pengguna melakukan imputan kembali
}
