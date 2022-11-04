#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i=0, angka;
   srand(time(NULL));

   angka = rand()%1000+1;

   do {
   	cout << angka << "\t";
      angka = rand()%1000+1;
      i++;
   }while(i < 100);

   cout << endl;

   getch();
}