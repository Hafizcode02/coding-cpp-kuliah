#include <conio.h>
#include <iostream.h>

main(){
	int kodeHari;

   cout << "Masukan Kode Hari : ";
   cin >> kodeHari;

   switch(kodeHari){
   	case 0:
      		cout << "Hari Minggu \n";
            break;
      case 1:
      		cout << "Hari Senin \n";
            break;
      case 2:
      		cout << "Hari Selasa \n";
            break;
      case 3:
      		cout << "Hari Rabu \n";
            break;
      case 4:
      		cout << "Hari Kamis \n";
            break;
      case 5:
      		cout << "Hari Jum'at \n";
            break;
      case 6:
      		cout << "Hari Sabtu \n";
            break;
      default:
      		cout << "Hari tidak ada \n";
            break;
   }

   getch();

}
