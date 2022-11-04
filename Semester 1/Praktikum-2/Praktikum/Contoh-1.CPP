#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int main(){
 	int p,l;

   printf("Ukuran Lebar ?"); scanf("%i", &l);
   printf("Ukuran Panjang"); scanf("%i", &p);
   clrscr();
	printf("Ukuran Lebar? %i m\n", l);
	printf("Ukuran panjang? %i m\n", p);
	printf("Luas pp adalah? %i m2", p*l);

   getch();
}