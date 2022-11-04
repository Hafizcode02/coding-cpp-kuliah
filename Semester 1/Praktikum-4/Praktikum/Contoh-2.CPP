#include <iostream.h>
#include <conio.h>
#include <ctype.h>

void main()
{
	char pil;

   clrscr();
   cout << "Pilihan Anda adalah [A,B,Q] ?" << endl;
   pil = getch();
   pil = toupper(pil);

   while(!(pil=='A') || (pil=='B') || (pil=='Q')){
   	pil = getch();
      pil = toupper(pil);
   }

   cout << pil << endl;
}