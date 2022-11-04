#include <iostream.h>
#include <string.h>
#include <conio.h>

int main (){
	cout << strlen("Selamat Pagi.\n")<<endl; // strlen adalah fungsi untuk mengukur panjang string yang ada didalam tag tersebut.
	cout << strlen("Selamat Pagi.")<<endl;
	cout << strlen("Selamat")<<endl;
	cout << strlen("S")<<endl;
	cout << strlen("");
	getch();
}

//hasilnya
//14
//13
//7
//1
//0