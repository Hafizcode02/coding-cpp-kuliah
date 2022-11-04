#include <iostream.h>
#include <conio.h>

main()
{
 	char kategori;
   float diskon;

   cout << "Pemberian Diskon kepada pelanggan tetap \ndengan "<< endl;
   cout << "Kategori Pelanggan (A/B/C/D/E)= ";
   cin >> kategori;

   switch(kategori){
    	case 'A' :
      	diskon = 40;
         break;
      case 'B' :
      	diskon = 25;
         break;
      case 'C' :
      	diskon = 0;
         break;
      case 'D' :
      	diskon = 10;
         break;
      default :
      	diskon = 0;
         break;
   }

   cout << "Diskon = " << diskon << "%";

   getch();
}