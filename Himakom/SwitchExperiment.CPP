#include <constrea.h>
#include <conio.h>

main(){
	int sisi,pilih;
   float phi=3.14, r;

   cout << "1. Luas Persegi " << endl;
   cout << "2. Luas Lingkaran " << endl;
   cout << "3. Keliling Lingkaran " << endl;

   cout << "Masukan Pilihanmu : "; cin >> pilih ;

   switch(pilih){
   	case 1 :
			cout << "--- Luas Persegi ----" << endl;
   		cout << "Masukan Sisi : "; cin >> sisi;

   		cout << "Luas Persegi : " << (sisi * sisi) << "cm" << endl;

         break;

      case 2:
      	cout << "--- Luas Lingkaran ----" << endl;
   		cout << "Masukan Jari : "; cin >> r;

   		cout << "Luas Lingkaran : " << ( phi * r * r) << "cm" << endl;

         break;

      case 3:
      	cout << "--- Keliling Lingkaran ----" << endl;
   		cout << "Masukan Jari : "; cin >> r;

   		cout << "Keliling Lingkaran : " << ( 2 * phi * r ) << "cm" <<endl;

         break;

      default :
      	cout << "Tidak ada pilihan ";
         break;
   }

   getch();
}
