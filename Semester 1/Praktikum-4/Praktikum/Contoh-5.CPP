#include <iostream.h>
#include <conio.h>
void main()
{
	char abjad;
	clrscr();

   abjad = 'A';
	cout << "Pilihan Anda adalah [A, B, Q] ?"<<endl;
	for ( abjad=='A'; abjad <='Z'; abjad++)
	{
		cout<< abjad;
 	}

   getch();
}