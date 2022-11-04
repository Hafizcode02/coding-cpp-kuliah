#include <iostream>
#include <conio.h>

main() {
	int x,*y;
	y=new int;
	x=15;
	*y=20;

	cout<<"Nilai x = "<<x;
	cout<<"\nAlamat memori x = "<<&x;
	cout<<"\n\nNilai y = "<<*y;
	cout<<"\nAlamat memori y = "<<y;

	delete y;
	cout<<"\n\nSetelah di delete";
	cout<<"\nNilai y = "<<*y;
	cout<<"\nAlamat memori y = "<<y;
	getch();
}