#include <constrea.h>
#include <stdio.h>

int main() {
 	int pilihan;
   char nama[30], ttl[30], alamat[20], prodi[20], kelas[20];

   cout << "====== Program IF Else ======" << endl;
   cout << "1. Tampilkan Biodata " << endl;
   cout << "2. Tampilkann Prodi " << endl;
   cout << "--------------------------------" << endl;
   cout << "Masukan Pilihan : "; cin >> pilihan;

   if(pilihan == 1){
   	cout << "Masukan Nama   : "; gets(nama);
      cout << "Masukan TTL    : "; gets(ttl);
      cout << "Masukan Alamat : "; gets(alamat);

      cout << "Nama   :" << nama << endl;
   	cout << "TTL    :" << ttl << endl;
   	cout << "Alamat :" << alamat << endl;
   }else if(pilihan == 2){
   	cout << "Masukan Prodi : "; gets(prodi);
      cout << "Masukan Kelas : "; gets(kelas);

      cout << "Prodi : " << prodi << endl;
      cout << "Kelas : " << kelas << endl;
   }else {
   	cout << "Tidak ada dalam pilihan"<< endl;
   }
   getch();
}