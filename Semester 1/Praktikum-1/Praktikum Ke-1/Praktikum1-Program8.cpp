#include <iostream.h>
#include <conio.h>

int main() {
	int m = 44, n = 66; // pendeklarasian variable
	cout << "\n"; // menambahkan line baru
	cout << "m = " << m << ",n = " << n << endl; // menampilkan nilai variable
	
	cout << "\n"; // menambahkan line baru
	++m;--n; // ++ = tambah 1 , -- = kurangi 1
	cout << "++m = " << m << ",--n = " << n << endl; // menampilkan nilai variable
	
	cout << "\n"; // menambahan line baru
	cout << "m = m + n == m += n"<<endl; // menampilkan ke layar
	cout<< "m = m + n == " <<(m+n)<<endl; // menampilkan pertambahan ke layar
	cout<< "m += n == " <<(m += n)<<endl; // mengubah nilai m = m + n
	
	cout << "\n"; // menambahan line baru
	cout << "m = m - n == m -= n"<<endl; // menambahan line baru
	cout<< "m = m - n == " <<(m-n)<<endl; // menampilkan pengurangan ke layar
	cout<< "m -= n == " <<(m -= n)<<endl; // mengubah nilai m = m - n
	
	cout << "\n"; // menambahan line baru
	cout << "m = m * n == m *= n"<<endl; // menambahan line baru
	cout<< "m = m * n == " <<(m*n)<<endl; // menampilkan perkalian ke layar
	cout<< "m *= n == " <<(m *= n)<<endl; // mengubah nilai m = m * n
	
	cout << "\n"; // menambahan line baru
	cout << "m = m / n == m /= n"<<endl; // menambahan line baru
	cout<< "m = m / n == " <<(m/n)<<endl; // menampilkan pembagian ke layar
	cout<< "m /= n == " <<(m /= n)<<endl; // mengubah nilai m = m * n
	
	cout << "\n"; // menambahan line baru
	cout << "m = m % n == m %= n"<<endl;// menambahan line baru
	cout<< "m = m % n == " <<(m%n)<<endl;// menampilkan modulus ke layar
	cout<< "m %= n == " <<(m %= n)<<endl;// mengubah nilai m = m % n
	
	getch(); // menampilkan nilai m sebagai nilai negatif
}

//hasil

//m = 44,n = 66

//++m = 45,--n = 65

//m = m + n == m += n
//m = m + n == 110
//m += n == 110

//m = m - n == m -= n
//m = m - n == 45
//m -= n == 45

//m = m * n == m *= n
//m = m * n == 2925
//m *= n == 2925

//m = m / n == m /= n
//m = m / n == 45
//m /= n == 45

//m = m % n == m %= n
//m = m % n == 45
//m %= n == 45