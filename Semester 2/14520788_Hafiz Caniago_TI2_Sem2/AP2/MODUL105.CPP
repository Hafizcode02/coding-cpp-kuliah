#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int tebak, angka;
   srand(time(NULL));
   angka = rand() % 100 + 1;

   cout << "Tebak Angka Mulai Dari 1 -- 100" << endl ;
   cout << "-------------------------------" << endl;
   cout << "\nTebak Angka Mulai!"<<endl<<endl;

   do{
   	cin >> tebak;
      if(tebak < angka){
      	cout << "Yahaha Salah Kekecilan Brow \n";
         cout << endl;
         }
      else if(tebak > angka){
      	cout << "Yahaha Salah Kebesaran Brow \n";
         cout << endl;
      }
   } while(tebak != angka);

   cout << "Jawaban Ente : " << tebak << endl;
   cout << "Tebakan Ente Benar Brow" << endl;
   getch();
}