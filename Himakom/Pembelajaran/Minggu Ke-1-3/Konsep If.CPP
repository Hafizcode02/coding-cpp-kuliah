#include <conio.h>
#include <iostream.h>

main(){
	int umur;

   cout << "Berapa Umurmu : ";
   cin >> umur; // Input Umur

   if(umur > 40){ // Umur lebih dari 40
   	cout << "Kamu Tua";
   }else if(umur > 20){ // Umur lebih dari 20
   	cout << "Kamu Dewasa";
   }else if(umur > 16){ // Umur lebih dari 16
   	cout << "Kamu Remaja";
   }else { // Selain kondisi diatas
   	cout << "Kamu Masih Bocil";
   }

   getch();
}