#include <constrea.h>
#include <cstring.h>
#include <stdio.h>
#include <fstream>

void dataBarang();

struct dbarang{
	string kode;
   string nama;
   string merk;
   int harga;
   int jumlah;
   int subtotal;
};

int pilihan;

string kode[100] = {"SJE01", "HBH01", "KD003", "PB002", "SG001", "KSK012"};
string nama[100] = {"SENDAL JEPIT", "HANDUK BAYI", "SABUN CUCI", "PEMPERS BAYI", "SENDAL GUNUNG", "KAOS KAKI"};
string merk[100] = {"CAP SWALOW", "CAP GADUK", "CAP NUFO", "CAP BAYI", "CAP EIGER", "CAP DEWEK"};
int harga[100] = {5000, 20000, 5000, 10000, 90000, 15000};

main(){
    do{
    	clrscr();
    	cout << "==================================\n";
      cout << "====PROGRAM DATA BARANG HIMAKOM===\n";
    	cout << "==================================\n";
      cout << "1. Program Kasir Barang\n";
      cout << "2. Exit\n";
      cout << "==================================\n";
      cout << "Input Pilihan : ";
      cin >> pilihan;

      switch(pilihan){
      	case 1 :
         			dataBarang();
                  break;
         case 2 :
         			cout << "Terima Kasih sudah Menggunakan Program Ini....";
                  getch();
                  return 0;
         default :
                  cout << "Input tidak ada dalam Pilihan....";
                  getch();
                  clrscr();
                  break;
      }
    }while(pilihan != 2);
    getch();
}

void dataBarang(){
	clrscr();
	dbarang data[100];
   int total, bayar = 0;
   char pil = 'Y';
   int ctr = 0;

   cout << "==============================================================================\n";
   cout << "=====================================TOKO HAGO================================\n";
   cout << "==============================================================================\n";
   cout << "NO	KODE		NAMA			MERK			HARGA		\n";
   for(int i = 0; i < 6; i++){
   	cout << (i+1) << "\t" << kode[i] << "\t\t" << nama[i] << "\t\t" << merk[i] << "\t\t" << harga[i] << endl;
   }

   do{
   	main :
   	cout << "==============================================================================\n";
   	cout << "Masukan KODE : "; cin >> data[ctr].kode;
      for(int i =0; i<6; i++){
      	if(data[ctr].kode == kode[i]){
         	data[ctr].nama = nama[i];
            data[ctr].merk = merk[i];
            data[ctr].harga = harga[i];
            break;
         }
      }

      if(data[ctr].nama == ""){
      	cout << "Data tidak ditemukan \n";
         goto main;
      }

      cout << "Masukan Jumlah Barang : "; cin >> data[ctr].jumlah;
      data[ctr].subtotal = data[ctr].harga * data[ctr].jumlah;
      cout << endl;

      cout << "Ada Lagi [Y/T] ? : "; cin >> pil;
      ctr++;
   }while(pil == 'Y' || pil == 'y');

   clrscr();
   total = 0;
   cout << "=====================================================================================================\n";
   cout << "NO		NAMA			MERK			HARGA		QTY		SUBTOTAL\n";
   cout << "-----------------------------------------------------------------------------------------------------\n";
   for(int i = 0; i < ctr; i++){
   	cout << (i+1) << "\t\t" << data[i].nama << "\t\t" << data[i].merk << "\t\t" << data[i].harga << "\t\t" << data[i].jumlah << "\t\t" << data[i].subtotal << endl;
      total += data[i].subtotal;
   }
   cout << "-----------------------------------------------------------------------------------------------------\n";
   cout << "TOTAL : Rp. " << total << endl;
   cout << "BAYAR : Rp. "; cin >> bayar;
   cout << "KEMBALI : Rp. " << (bayar - total) << endl;
   cout << "-----------------------------------------------------------------------------------------------------\n";
   getch();
}
