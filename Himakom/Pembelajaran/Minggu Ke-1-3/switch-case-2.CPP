#include <conio.h>
#include <iostream.h>

int main(){
	int pilihan=0;

   do{
   	clrscr(); // fungsi membersihkan layar
   	cout << "1. Apel \n";
      cout << "2. Pisang \n";
      cout << "3. Mangga \n";
      cout << "4. Keluar \n";
      cin >> pilihan;
      switch(pilihan){
      	case 1 : // Pilihan == 1
         		cout << "Apel\n";
               break;
         case 2 : // Pilihan == 2
         		cout << "Pisang\n";
               break;
         case 3 : // Pilihan == 3
         		cout << "Mangga\n";
               break;
         default : // Pilihan selain 1-4
         		cout << "Tidak ada pilihan\n";
               break;
      }
      getch();
   }while(pilihan != 4); // Ketika pilihan == 4, perulangan akan berhenti
}