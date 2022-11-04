#include <constrea.h>
#include <stdio.h>
#include <cstring.h>

void penjumlahan();
void pengurangan();

int a,b,hasil,pilihan;

main(){
   do{
   	cout << "Kalkulator Sederhana \n";
      cout << "1. Penjumlahah \n";
      cout << "2. Pengurangan \n";
      cout << "3. Keluar \n";
      cout << "Masukan pilihan : ";
      cin >> pilihan;

      switch(pilihan){
      	case 1 :
         		penjumlahan();
               break;
         case 2 :
         		pengurangan();
               break;
         case 3 :
         		return 0;
         default :
         		return 0;
      }
   }while(pilihan < 3);
}

void penjumlahan(){
	cout << "Masukan Angka Pertama : ";
   cin >> a;
   cout << "Masukan Angka kedua : ";
   cin >> b;
   hasil = a+b;
   cout << "Hasil dari " << a << " + " << b << " = " << hasil << endl;
   getch();
   clrscr();
}
void pengurangan(){
	cout << "Masukan Angka Pertama : ";
   cin >> a;
   cout << "Masukan Angka kedua : ";
   cin >> b;
   hasil = a-b;
   cout << "Hasil dari " << a << " - " << b << " = " << hasil << endl;
   getch();
   clrscr();
}