#include <conio.h>
#include <iostream.h>
#include <cstring.h>

main(){
	int i,posisi, pilih;
   string c;
   string A[10];

   cout << "========================================\n";
   cout << "1. Cari Data NRP\n";
   cout << "2. Cari Data Nama\n";
   cout << "=========================================\n";
   cout << "Pilih : "; cin >> pilih;

   if(pilih != 1){
   	A[10]={"DADANG","JAMRUD","SUJARWO","RIMANDA","PRANATA","LORENZA","HAKIM","LUKMAN","LORAN","GORBON"};
   }


   cout << "Data : ";
   for(i = 0; i < 10; i++){
   	cout << A[i] << " ";
   }

   cout <<"\n\n Data yang ingin dicari : ";
   cin >> c;
   i = 0;
   posisi = 0;
   while(i < 10 && A[i] != c){
   	i++;
   }

   if(A[i] != c){
   	cout << "\n Maaf data yang dicari tidak ada";
   }else{
   	cout << "\n Ditemukan pada posisi ke " << (posisi+=(i+1));
   }

   getch();
}

