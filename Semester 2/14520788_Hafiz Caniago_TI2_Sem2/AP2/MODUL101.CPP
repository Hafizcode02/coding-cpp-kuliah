#include <stdlib.h>
#include <conio.h>
#include <iostream.h>

void main(){
	clrscr();
   srand(3);

   for(int i = 0; i < 4; i++)
   	cout << random(10) << endl;

   getch();
}