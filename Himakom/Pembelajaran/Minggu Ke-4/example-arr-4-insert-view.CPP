#include <conio.h>
#include <iostream.h>
#include <cstring.h>

main(){
   string nama[5]; // variable nama bertipe data string dengan array yang menampung data maksimal 5 (0-4)

   // melakukan perulangan sebanyak 5 kali dan melakukan penginputan nama kepada nama[i] yang i nya adalah berdasarkan value di dalam perulangan
   for(int i = 0; i < 5; i++){
   	cout << "Input Nama[" << i << "] : " ;
      getline(cin, nama[i]);
   }

   clrscr();
   // melakukan perulangan sebanyak 5 kali dan menampilkan nama kepada nama[i] yang i nya adalah berdasarkan value di dalam perulangan
   for(int i = 0; i < 5; i++){
   	cout << "Nama[" << i << "] : " << nama[i] << endl;
   }

   getch();
}