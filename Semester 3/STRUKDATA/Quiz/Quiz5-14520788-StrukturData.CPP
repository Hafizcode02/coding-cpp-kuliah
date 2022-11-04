#include <conio.h>
#include <iostream.h>

main(){
	int tahun;

   cout << "Masukan tahun : ";
   cin >> tahun;

   if(tahun % 4 == 0)
   {
   	if(tahun % 100 == 0)
      {
      	if(tahun % 400 == 0)
         {
      		cout << "Tahun : " << tahun << " adalah Tahun Kabisat";
         }
         else
         {
         	cout << "Tahun : " << tahun << " adalah Bukan Tahun Kabisat";
         }
      }
      else
      {
      	cout << "Tahun : " << tahun << " adalah Tahun Kabisat";
      }
   }
   else
   {
   	cout << "Tahun : " << tahun << " adalah Bukan Tahun Kabisat";
   }

   getch();
}
