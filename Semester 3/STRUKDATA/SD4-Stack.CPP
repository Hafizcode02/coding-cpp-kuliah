#include <conio.h> // header standart import cpp
#include <iostream.h> // header standart import cpp

// Disini saya tidak menggunakan kode yang ada di modul, disini saya menggunakan array untuk mengilustrasikan proses push dan pop(reverse) yang diberikan di soal

main()
{
	int arr[5]; // array
   int i; // variable perulangan

   int pil = 0; // variable penampung pilihan menu

   do {
   	clrscr();
      cout << "1. PUSH \n";
      cout << "2. PRINT \n";
      cout << "3. POP \n";
      cout << "4. EXIT \n";
      cout << "Pilihan : "; cin >> pil; // input menu
      switch(pil){
      	case 1 : // pilihan menu 1
   			cout << "Push Data \n";
   			for(i = 0; i < 5; i++){
   				cout << "arr Index Ke-" << i << " : ";
      			cin >> arr[i]; // push data(input), dilakukan sebanyak 5 kali
   			}
            break;
         case 2 : // pilihan menu 2
   			cout << "Print Data \n";
   			for(i = 0; i < 5; i++){
            	cout << "arr Index Ke-" << i << " : " << arr[i] << endl; // print data array asli
   			}
            getch();
            break;
         case 3 : // pilihan menu 3
         	cout << "Pop Arr Data \n";
            for(i = (5-1); i >= 0; i--){
      			cout << "arr Index Ke-" << i << " : " << arr[i] << endl; // print data array pop (reverse)
   			}
            getch();
            break;
         default : // pilihan menu tidak ada dalam list
         	cout << "Tidak ada Pilihan \n";
            break;
      }
   }while(pil != 4); // ketika pilihan menu 4, program berakhir
}