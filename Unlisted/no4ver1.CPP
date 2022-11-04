#include <conio.h>
#include <iostream.h>
#include <cstring.h>

main(){
	char kodeBaju, ukuranBaju;
   string merkBaju;
   double hargaBaju;
   bool pilihanSalah = false;

   menu :
   cout << "Program Studi Kasus Baju Nested IF\n";
   cout << "===================================\n";
   cout << "Kode Baju 1, 3, & 5\n";
   cout << "===================================\n";
   cout << endl;

   cout << "Input Kode Baju : ";
   cin >> kodeBaju;

   if(kodeBaju == '1'){
   	merkBaju = "Prada";
      cout << "Merek Baju : " << merkBaju << endl;
      cout << "Masukan Ukuran Baju : " ;
      cin >> ukuranBaju;
      if(ukuranBaju == 'S'){
      	hargaBaju = 150000;
      }else if(ukuranBaju == 'M'){
      	hargaBaju = 160000;
      }else {
      	hargaBaju = 170000;
      }

   }else if(kodeBaju == '3'){
   	merkBaju = "Gucci";
      cout << "Merek Baju : " << merkBaju << endl;
      cout << "Masukan Ukuran Baju : " ;
      cin >> ukuranBaju;
      if(ukuranBaju == 'S'){
      	hargaBaju = 200000;
      }else if(ukuranBaju == 'M'){
      	hargaBaju = 200000;
      }else {
      	hargaBaju = 200000;
      }
   }else if(kodeBaju == '5'){
   	merkBaju = "Louis Vuitton";
      cout << "Merek Baju : " << merkBaju << endl;
      cout << "Masukan Ukuran Baju : " ;
      cin >> ukuranBaju;
      if(ukuranBaju == 'S'){
      	hargaBaju = 300000;
      }else if(ukuranBaju == 'M'){
      	hargaBaju = 300000;
      }else {
      	hargaBaju = 350000;
      }
   }else {
   	pilihanSalah = true;
   	cout << "Tidak Tersedia\n";
   }

   if(!pilihanSalah){
      clrscr();
   	cout << "==========================\n";
   	cout << "Kode Baju : " << kodeBaju << endl;
   	cout << "Merk Baju : " << merkBaju << endl;
   	cout << "Ukuran Baju : " << ukuranBaju << endl;
      cout << "Harga Baju : " << hargaBaju << endl;
   	cout << "==========================\n";
   }

	getch();
   goto menu;

}