#include <constrea.h>

int persegi(int panjang, int lebar){
	return (panjang * lebar);
}

void main(){
	int panjang, lebar;
	cout << "Masukan Panjang : "; cin >> panjang;
	cout << "Masukan Lebar : "; cin >> lebar;

   cout << "Hasil : " << persegi(panjang,lebar);

   getch();

}
