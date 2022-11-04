#include <iostream.h>
#include <conio.h>
#include <cstring.h>

main () {
 	int harga, kodebaju;
   string ukuran;
   string merk;

   cout << "=== Program Cek Harga baju ==\n";
   menu :
   cout << "Masukan Kode Baju(1-3): ";
   cin >> kodebaju;
   ukbaju :
   cout << "Masukan Ukuran Baju(M/L) : ";
   cin >> ukuran;

   if (kodebaju == 1){
      merk = "IMP";
      if (ukuran == "M" || ukuran == "m"){
      	harga = 220000;
      } else if(ukuran == "L" || ukuran == "l"){
       	harga = 250000;
      }else {
      	cout << "Ukuran Baju tidak tersedia\n";
      	goto ukbaju;
      }
   } else if(kodebaju == 2){
		merk = "Prada";
      if (ukuran == "M" || ukuran == "m"){
      	harga = 160000;
      } else if(ukuran == "L" || ukuran == "l"){
       	harga = 170000;
      }else{
      	cout << "Ukuran Baju tidak tersedia\n";
      	goto ukbaju;
      }
   } else if(kodebaju == 3){
   	merk = "Gucci";
      if (ukuran == "M" || ukuran == "m"){
      	harga = 200000;
      } else if(ukuran == "L" || ukuran == "l"){
       	harga = 170000;
      }else{
      	cout << "Ukuran Baju tidak tersedia\n";
      	goto ukbaju;
      }
   } else{
   	merk = "error";
      cout << "Salah Input Kode Baju \n";
      goto menu;
   }

   cout << "\n Merk Baju = " << merk;
   cout << "\n Ukuran Baju = " << ukuran;
   cout << "\n Harga Baju = " << harga;




   getch();
}