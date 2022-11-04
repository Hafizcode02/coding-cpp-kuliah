#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
 	clrscr();
	randomize(); // inisialisasi bilangan acak
	for ( int i; i < 4; i++ )
 	cout <<random(100)<<endl;
 	getch();
}