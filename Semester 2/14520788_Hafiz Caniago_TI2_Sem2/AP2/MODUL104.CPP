#include <iostream.h>
#include <conio.h>
#include <complex.h>

void main()
{
 	clrscr();
	// mendefinisikan nilai objek z berkelas complex
	// dan memberikan nilai awal ke objek z
	complex z = complex( 20.3, 50);
	// operasi berbagai fungsi kompleks
 	cout <<"bilangan kompleks z = " << z << endl;

 	cout <<"bagian real z = " << real( z ) << endl;
 	cout <<"bilangan imajiner z = " << imag( z ) << endl;
 	cout <<"bilangan sudut = " << arg ( z ) << endl;
 	cout <<"bilangan kuadrat nilai mutlak = " << norm ( z ) << endl;
 	cout <<"bilangan conjugate = " << conj ( z ) << endl;
   
 	getch();
}