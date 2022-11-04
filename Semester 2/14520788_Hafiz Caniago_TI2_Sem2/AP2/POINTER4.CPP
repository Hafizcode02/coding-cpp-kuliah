#include <iostream.h>
#include <conio.h>

main() {
	int x,*y;
	char *judul="contoh pointer";
	y=&x;

	x=10;
	cout<<judul<<endl;
	cout<<"Nilai x = "<<x;
	cout<<"\nAlamat memori x = "<<&x;
	cout<<"\n\nNilai y = "<<*y;
	cout<<"\nAlamat memori y = "<<*y;
getch();
}