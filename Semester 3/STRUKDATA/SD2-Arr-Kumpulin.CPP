#include <conio.h>     // Header Import yang berfungsi dalam tampilan interaksi pada pengguna, penggunaan disini : clrscr(), getch()
#include <iostream.h> // Header Import yang digunakan sebagai standar input/output di c++
#include <cstring.h> // Header Import untuk Menggunakan dan Memanipulasi string

main(){
	string dataNegaraKota[4][4]; // Variable array dua dimensi
   string dataCari; // Variable data yang akan dicari

   dataNegaraKota[0][0] = "Indonesia"; // Isi Array
   dataNegaraKota[0][1] = "Jakarta";  // Isi Array
   dataNegaraKota[1][0] = "Filipina"; // Isi Array
   dataNegaraKota[1][1] = "Manila";   // Isi Array
   dataNegaraKota[2][0] = "Perancis"; // Isi Array
   dataNegaraKota[2][1] = "Paris";    // Isi Array
   dataNegaraKota[3][0] = "Pakistan"; // Isi Array
   dataNegaraKota[3][1] = "Islamabad"; // Isi Array

   cout << "Masukan data yang dicari :"; cin >> dataCari; // INput data Cari
   for(int i = 0; i < 4; i++) // Lakukan Perulangan
   {
   	if(dataNegaraKota[i][0] == dataCari){
      	cout << dataNegaraKota[i][1] << endl; // ketika data ditemukan tampilkan datanya
         break;
      }else{
      	if(i>=3)
         {
         	cout << "Tidak ada \n";
         }
      }
   }

   getch(); // Menahan (Pause) Program sampai pengguna melakukan imputan kembali


}