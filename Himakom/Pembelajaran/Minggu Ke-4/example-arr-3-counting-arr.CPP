#include <conio.h>
#include <iostream.h>

main(){

	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	/* ukuran array dalam byte */
	int size = sizeof(array);

	/* banyaknya isi array `array` */
	int length = sizeof(array) / sizeof(*array);

   cout << "size(byte) : " << size << endl;
   cout << "size(banyak data) : " << length;

   getch();
}
