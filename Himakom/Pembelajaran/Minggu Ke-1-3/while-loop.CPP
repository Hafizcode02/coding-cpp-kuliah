#include <conio.h>
#include <iostream.h>

int main(){
	int loop = 0; // variable

   while(loop <= 10){ // perulangan akan terus berjalan ketika kondisi masih true
   	cout << "Nilai Variable Loop : " << loop << endl; // menampilkan teks + nilai variable loop
      loop++; // loop++ sama dengan loop += 1 atau loop = loop + 1
   }

   getch();
}
