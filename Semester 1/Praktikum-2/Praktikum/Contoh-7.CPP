#include <iostream.h>
#include <conio.h>
main()
{
	float C, F;
	int tombol;
	Ulangi:
	clrscr();
	cout << "\nMasukkan suhu dalam Celcius = ";
	cin >> C;
	F = 1.8*C+32;
	cout << "Suhu dalam Fahrenheit = " << F<< endl;
	cout << "\nApakah mau mengulangi (Y/T)? ";
	tombol = getch();
	if ((tombol == 'Y') || (tombol == 'y')) goto Ulangi;
	cout << "Selesai";
}