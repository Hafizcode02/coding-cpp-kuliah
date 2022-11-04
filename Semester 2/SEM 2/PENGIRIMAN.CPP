#include <conio.h>
#include <iostream.h>
#include <cstring.h>

struct hargaOngkir {
	string namaPenyedia;
   int hargaRegular;
   int hargaExpress;
   int hargaPerJarak;
};

int pilihan, pilihanLayanan, jarakPengiriman, beratBarang;
hargaOngkir hongkir[4];

void showMenu()
{
	cout << "============= Penghitungan Ongkos Kirim Barang Sederhana =============\n";
   cout << "1. JNE\t\t" << endl;
   cout << "2. Sicepat\t\t" << endl;
   cout << "3. JNT\t\t" << endl;
   cout << "4. Exit\t\t" << endl << endl;

   cout << "Pilih : "; cin >> pilihan;
}

void setPrice(){
   hongkir[1].namaPenyedia = "JNE";
   hongkir[1].hargaRegular = 15000;
   hongkir[1].hargaExpress = 18000;
   hongkir[1].hargaPerJarak = 20;

   hongkir[2].namaPenyedia = "Sicepat";
   hongkir[2].hargaRegular = 14000;
   hongkir[2].hargaExpress = 16000;
   hongkir[2].hargaPerJarak = 20;

   hongkir[3].namaPenyedia = "JNT";
   hongkir[3].hargaRegular = 15000;
   hongkir[3].hargaExpress = 17000;
   hongkir[3].hargaPerJarak = 20;
}

void showTransaction()
{
	clrscr();
   cout << "============= Pilih Layanan =============" << endl;
   cout << "1. Regular \n";
   cout << "2. Express \n\n";
   cout << "Pilih Layanan : "; cin >> pilihanLayanan;
   cout << "\n=========================================\n "<< endl;
   cout << "Masukan Berat Barang : "; cin >> beratBarang;
   cout << "Masukan Jarak Pengiriman (KM) "; cin >> jarakPengiriman;
}

void calculateTransaction(int pil, int pilLayanan, int bb, int jp)
{
	string tipePengiriman;
   int hargaTipePengiriman;

   if(pilLayanan == 1){
   	tipePengiriman = "Regular";
      hargaTipePengiriman = hongkir[pil].hargaRegular;
   } else if(pilLayanan == 2){
   	tipePengiriman = "Express";
      hargaTipePengiriman = hongkir[pil].hargaExpress;
   }
	clrscr();
	cout << "============ Transaksi =================\n";
   cout << "Provider Jasa Pengiriman : " << hongkir[pil].namaPenyedia << endl;
   cout << "Tipe Pengiriman : " << tipePengiriman << endl;
   cout << "Harga Tipe Pengiriman : Rp." << hargaTipePengiriman << endl;
   cout << "Berat Barang : " << bb << " Kg \n";
   cout << "Jarak Pengiriman : " << jp << " KM \n";
   cout << "Harga per Jarak Pengiriman : Rp." << hongkir[pil].hargaPerJarak << endl;
   cout << "=========================================\n";
   cout << "Total Harga = Rp." << ((hargaTipePengiriman * bb) + (jp * hongkir[pil].hargaPerJarak));
   cout << endl;
}

void main(){
	setPrice();
	do {
		clrscr();
      showMenu();
      showTransaction();
      calculateTransaction(pilihan, pilihanLayanan, beratBarang, jarakPengiriman);
      getch();
   }while(pilihan < 4);

}
