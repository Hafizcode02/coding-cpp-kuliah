#include <conio.h>
#include <iostream.h>
#include <cstring.h>

main(){
	int tahunLahir;
   string zodiak;

   cout << "Masukan tahun lahir anda : ";
   cin >> tahunLahir;
   cout << "Masukan zodiak anda : ";
   getline(cin, zodiak);

   cout << "Baik Anda lahir pada tahun " << tahunLahir << " dan zodiak Anda yaitu " << zodiak << endl;

   getch();

}

