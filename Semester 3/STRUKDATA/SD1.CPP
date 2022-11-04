#include <conio.h> // Header Import yang berfungsi dalam tampilan interaksi pada pengguna, penggunaan disini : clrscr(), getch()
#include <iostream.h> // Header Import yang digunakan sebagai standar input/output di c++
#include <cstring.h> // Header Import untuk Menggunakan dan Memanipulasi string

main(){
	int nrp; // ex : NRP = 14520788 <- angka
   string nama, kelas, mataKuliah, hobi; // Memakai string karena agar mempermudah penyesuaian jumlah banyaknya karakter yang akan ditampung;
   char targetNilai; // Menggunakan char karena valuenya hanyalah berupa sebuah karakter A, B, C, D, atau E.

   cout << "Masukan NRP : "; cin >> nrp; // standar input C++
   cout << "Masukan Nama : "; getline(cin, nama); // getline digunakan untuk menangkap whitespace ke dalam string `nama` dari inputan
   cout << "Masukan Kelas : "; getline(cin, kelas); // getline digunakan untuk menangkap whitespace ke dalam string `kelas` dari inputan
   cout << "Masukan Mata Kuliah : "; getline(cin, mataKuliah); // getline digunakan untuk menangkap whitespace ke dalam string `mata kuliah` dari inputan
   cout << "Masukan Hobi : "; getline(cin, hobi); // getline digunakan untuk menangkap whitespace ke dalam string
   cout << "Masukan Target Nilai : "; cin >> targetNilai; // standar input C++


   clrscr(); // Memberikan layar konsol

   cout << "NRP : " << nrp << endl; // Menampilkan data nrp
   cout << "Nama : " << nama << endl; // Menampilkan data nama
   cout << "Kelas : " << kelas << endl; // Menampilkan data kelas
   cout << "Mata Kuliah : " << mataKuliah << endl; // Menampilkan data matkul
   cout << "hobi : " << hobi << endl; // Menampilkan data hobi
   cout << "Target Nilai : " << targetNilai << endl; // Menampilkan Target Nilai

   getch(); // Menahan (Pause) Program sampai pengguna melakukan imputan kembali 
}
