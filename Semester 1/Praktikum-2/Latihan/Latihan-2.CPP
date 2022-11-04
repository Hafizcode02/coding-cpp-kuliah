#include <conio.h>
#include <iostream.h>
#include <stdio.h>
main() {
	int tahun;
	char x;

	cout<<"Masukkan Tahun: "; cin>>tahun;

	if (tahun%4==0&&tahun<0)
	{
		cout<<"Tahun "<<tahun<<" adalah tahun kabisat sebelum masehi";
	}
	else if(tahun%4!=0&&tahun<0)
	{
		cout<<"Tahun "<<tahun<<" adalah bukan tahun kabisat sebelum masehi";
	}
	else if (tahun%4==0)
	{
		cout<<"Tahun "<<tahun<<" adalah tahun kabisat";}
	else
	{
		cout<<"Tahun "<<tahun<<" adalah bukan tahun kabisat";
	}

	getch();
}

// Tahun kabisat merupakan tahun yang mengalami penambahan satu hari dengan tujuan untuk menyesuaikan penanggalan dengan tahun astronomi.
