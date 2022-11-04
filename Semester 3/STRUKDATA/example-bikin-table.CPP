#include <iostream>
#include <iomanip>
#include <conio>

int main() {
	cout.setf( ios::left );
   cout << setw(20) << "BoB" << setw(20) << 123.456789 << '\n';
   cout << setw(20) << "Richard" << setw(20) << 1.0 << '\n';

   getch();
}