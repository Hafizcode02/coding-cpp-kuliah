#include <iostream.h>
#include <conio.h>

main()
{
	char nama[80];
   int tombol;

   tombol = 'y';
   while((tombol=='y') || (tombol == 'Y'))
   {
    	cout << "Masukan Nama anda : ";
      cin >> nama;
      cout << "Halo " << nama << " Apa Kabar ?" << endl << endl;

      cout << "nyoba lagi (Y/T)?";
      tombol = getch();
      cout << endl << endl;
   }

   cout << "Selesai";
}