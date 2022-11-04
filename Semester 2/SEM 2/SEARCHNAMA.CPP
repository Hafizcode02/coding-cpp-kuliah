#include <conio.h>
#include <iostream.h>
#include <cstring.h>

main(){
	int i,posisi;
   string c;
   string A[10]={"DADANG","JAMRUD","SUJARWO","RIMANDA","PRANATA","LORENZA","HAKIM","LUKMAN","LORAN","GORBON"};

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