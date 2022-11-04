#include <conio.h>
#include <iostream.h>
#include <cstring.h>

int hitungSegitiga(int alas, int tinggi);
void helloWorld();
void sebutNama(string nama);

int main(){
    cout << "Segitiga dengan alas = 5 , tinggi = 10 : " << hitungSegitiga(5,10) << endl;

    helloWorld();

    sebutNama("Hafiz Caniago");

    getch();
}

// Contoh Fungsi yang mengembalikan nilai
int hitungSegitiga(int alas, int tinggi){
	return (0.5 * alas * tinggi);
}

// Contoh Fungsi yang tidak mengembalikan nilai
void helloWorld(){
	cout << "Hello World" << endl;
}

void sebutNama(string nama){
	cout << "Halo, Nama Kamu : " << nama << endl;
}
