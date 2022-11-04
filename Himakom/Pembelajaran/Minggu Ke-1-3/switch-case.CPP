#include <conio.h>
#include <iostream.h>

main(){
	char pilihan;

   cout << "Masukan Satu Character Huruf dari A-D : ";
   cin >> pilihan;

   switch(pilihan){ //block switch
   	case 'A' : // pilihan == 'A'
      			cout << "Ini A ";
               break;
      case 'B' : // pilihan == 'B'
      			cout << "Ini B ";
               break;
      case 'C' : // pilihan == 'C'
      			cout << "Ini C ";
               break;
      case 'D' : // pilihan == 'D'
      			cout << "Ini D ";
               break;
      default : // Selain inputan A-D
      			cout << "Tidak ada dalam pilihan ";
               break;
   }

   getch();
}
