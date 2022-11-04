#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void main(){ // error karena main harus mereturn int
	const pi = 3.14; // error harus menyertakan tipe data
	float diameter,radius,luas; //deklarasi beberapa variable yang bertipe data float
	printf("Ukuran Diameter?"); // printf = menampilkan nya ke console, sama seperti cout 
	scanf("%f",&diameter); // scanf digunakan untuk mendapatkan data dari printf sebelumnya,%f digunakan untuk menerima data berupa float dari teks yang diinputkan sebelumnya
	radius = diameter/2.0; // penghitungan radius
	printf("Radius(r) : %f m\n", radius); //%f digunakan untuk menerima data berupa float dari penghitungan yang berada pada variable radius
	luas = pi * radius * radius; // menghitung luas 
	printf("Luas adalah : %f m2", luas); // mencetak hasil luas yang berasal dari variable luas
	getch(); // Digunakan untuk mendapatkan karakter yang dimasukan pengguna
}

// hasilnya akan error
// bagaimana pun juga main() harus mengembalikan nilai int, jadi => int main() { your code here }
// disini pi hanya dideklarasikan sebagai const, tidak dideklarasikan sebagai tipe data apapun, error : forbids declaration of pi with no type
// jadi jika ingin menggunakannya harus menjadi const pi tipe_data = isi_data, ex: const double pi : 3.14
// %f = print as float, %s = print as string, %d = print as int