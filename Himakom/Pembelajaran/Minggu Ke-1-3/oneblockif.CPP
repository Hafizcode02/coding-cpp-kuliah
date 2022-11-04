#include <conio.h>
#include <iostream.h>
#include <cstring.h>

main(){
	int a = 5;

   // Jika nilai variable a lebih besar dari 10, maka text akan berisi "Boleh" dan jika tidak lebih besar dari 10, maka text akan berisi "Tidak"
   string text = (a > 10) ? "Boleh" : "Tidak";
   cout << text;

   getch();
}