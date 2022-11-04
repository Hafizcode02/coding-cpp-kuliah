#include <iostream.h>
#include <conio.h>

main(){
	char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

	// mengambil data pada array
	cout << "Huruf: " << huruf[2] << endl;

   huruf[2] = 'Z'; // merubah data pada indeks 2
   cout << "Huruf: " << huruf[2] << endl;
	getch();
}