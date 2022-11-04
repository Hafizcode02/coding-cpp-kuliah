// Program Penjumlahan Matriks, Disini Saya menganggap bahwa program ini digunakan untuk menghitung penjumlahan matriks ordo 3x3
// Karena Sesuai syarat dalam penjumlahan matriks adalah masing masing matriks harus berdimensi (ordo) yang sama maka saya menetapkan disini secara default
// Menggunakan ordo 3 x 3
#include <iostream.h> // Standard Library, Input Output
#include <conio.h> // Standard Library, Fungsi Display

int main(){
	int m1[10][10]; // Matriks 1
   int m2[10][10]; // Matriks 2
   int m3[10][10]; // Matriks Hasil
   int nRow, nCol; // Baris & Kolom ; Nilai Tetap Baris = 3 & Colom = 3
   int i, j; // Variable Perulangan

   nRow = 3; // Ukuran Baris Efektif
   nCol = 3; // Ukuran Kolom Efektif

   cout << "Penjumlahan Matriks Ordo 3x3\n"; // Nama Program

   cout << "Pengisian Matriks 1 : \n";
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << "Elemen Ke-[" << i << ", " << j << "] = ";
      	cin >> m1[i][j]; // Pengisian Matriks 1
      }
   }

   cout << "\nPengisian Matriks 2 : \n";
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << "Elemen Ke-[" << i << ", " << j << "] = ";
      	cin >> m2[i][j]; // Pengisian Matriks 2
      }
   }

   cout << "\nMatriks A : \n";
	for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << m1[i][j] << " "; // Menampilkan Elemen Elemen Matriks 1
      }
      cout << endl; // Memberikan Baris Baru
   }

   cout << "\nMatriks B : \n";
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << m2[i][j] << " "; // Menampilkan Elemen Elemen Matriks 2
      }
      cout << endl; // Memberikan Baris Baru
   }

   // Proses Penjumlahan Matriks
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	m3[i][j] = m1[i][j] + m2[i][j]; // Proses Penjumlahan Matriks yang hasilnya disimpan ke matriks 3
      }
   }

   cout << "\nMatriks Hasil dari Penjumlahan Matriks 1 + Matriks 2 =  \n";
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << m3[i][j] << " ";
      }
      cout << endl;
   }

   getch();
}
