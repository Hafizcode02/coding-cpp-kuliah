#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string>

int main(){
   string kode,nama;
   int harga,jumlah,ttl_harga;

   cout <<"================================"<<endl;
   cout <<"           WARKOP ANJAY         "<<endl;
   cout <<"--------------------------------"<<endl;
   cout <<"| Kode | Makanan     | Harga |"<<endl;
   cout <<"| TM   | Teh Manis   | 10000 |"<<endl;
   cout <<"| NG   | Nasi Goreng | 20000 |"<<endl;
   cout <<"--------------------------------"<<endl;

   cout << "\nMasukan Kode : "; cin >> kode;

   if(kode == "TM") {

   	nama = "Teh Manis";
      harga = 10000;
      cout << "Mau Berapa : "; cin >> jumlah;
      ttl_harga = jumlah * harga;

   }else if(kode == "NG") {

   	nama = "Nasi Goreng";
      harga = 10000;
      cout << "Mau Berapa : "; cin >> jumlah;
      ttl_harga = jumlah * harga;
      cout << "Total Belanja Kamu adalah : " << ttl_harga << endl;

   }

   getch();
}
