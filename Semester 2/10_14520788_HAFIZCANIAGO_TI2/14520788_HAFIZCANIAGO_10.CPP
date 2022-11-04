#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdio.h>

void minValue();
void kaliMatriks();
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

main(){
    do{
    	clrscr();
    	cout << ">>>> Menu Program Modular <<<<<<\n";
      cout << "1. Operasi array struct pengolahan data barang\n";
      cout << "2. Operasi Perkalian 2 buah matriks\n";
      cout << "3. Operasi menentukan nilai terkecil dari 5 buah bilangan\n";
      cout << "4.Exit\n ";
      cout << "==================================\n";
      cout << "Input Pilihan : ";
      cin >> pilihan;

      switch(pilihan){
      	case 1 :
         			dataBarang();
                  break;
         case 2 :
         			kaliMatriks();
                  break;
         case 3 :
         			minValue();
                  break;
         default :
         			return 0;
      }
    }while(pilihan < 4);
    getch();
}

void minValue(){
	int dataArr[5];
   int min;
   cout << "===========================================\n";
   cout << "Program Menentukan Min Value dari 5 angka \n";

   for(int i = 1; i <= 5; i++){
   	cout << "Masukan Angka Ke " << i << ": ";
      cin >> dataArr[i];
   }

   min = dataArr[1];
   for(int i = 1; i <= 5; i++){
   	if(dataArr[i] < min){
      	min = dataArr[i];
      }
   }

   cout << "============================================\n";
   cout << "Nilai Terkecil adalah : " << min ;
   cout << endl;

   getch();
}
void kaliMatriks(){
	int ma[2][3];
   int mb[3][3];
   int mc[2][3];

   for(int i = 0; i < 2; i++){
   	for(int j = 0; j < 3; j++){
      	cout << "ma[" << i << "][" << j << "] : ";
         cin >> ma[i][j];
      }
   }
   cout << endl;

   for(int i = 0; i < 3; i++){
   	for(int j = 0; j < 3; j++){
      	cout << "ma[" << i << "][" << j << "] : ";
         cin >> mb[i][j];
      }
   }
   cout << endl;

   for(int i = 0; i < 2; i++){
   	for(int j = 0; j < 3; j++){
      	cout << ma[i][j] << "\t";
      }
      cout << endl;
   }
   cout << endl;

   for(int i = 0; i < 3; i++){
   	for(int j = 0; j < 3; j++){
      	cout << mb[i][j] << "\t";
      }
      cout << endl;
   }
   cout << endl;

   for(int i = 0; i < 2; i++){
   	for(int j = 0; j < 3; j++){
      	mc[i][j] = 0;
         for(int k = 0; k < 3; k++){
         	mc[i][j] = mc[i][j] + ma[i][k] * mb[k][j];
         }
      }
      cout << endl;
   }
   cout << endl;

   for(int i = 0; i < 2; i++){
   	for(int j = 0; j < 3; j++){
      	cout << mc[i][j] << "\t";
      }
      cout << endl;
   }
   cout << endl;

   getch();
}
void dataBarang(){
	clrscr();
	dbarang data[100];
   int total, bayar = 0;
   char pil = 'Y';
   int ctr = 0;

   string kode[3] = {"SJE01", "HBH01", "KD003"};
   string nama[3] = {"SENDAL JEPIT", "HANDUK BAYI", "SABUN CUCI"};
   string merk[3] = {"CAP KUDA", "CAP LADA", "CAP GADA"};
   int harga[3] = {30000, 23000, 5000};

   cout << "=========================================================\n";
   cout << "=======================TOKO HAGO=========================\n";
   cout << "=========================================================\n";
   cout << "NO		KODE		NAMA		MERK		HARGA		\n";
   for(int i = 0; i < 3; i++){
   	cout << i << "\t\t" << kode[i] << "\t\t" << nama[i] << "\t\t" << merk[i] << "\t\t" << harga[i] << endl;
   }

   do{
   	main :
   	cout << "=========================================================\n";
   	cout << "Masukan KODE : "; cin >> data[ctr].kode;
      for(int i =0; i<3; i++){
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
   cout << "=====================================================================\n";
   cout << "NO		NAMA		MERK		HARGA		QTY		SUBTOTAL		\n";
   cout << "---------------------------------------------------------------------\n";
   for(int i = 0; i < ctr; i++){
   	cout << (i+1) << "\t\t" << data[i].nama << "\t\t" << data[i].merk << "\t\t" << data[i].harga << "\t\t" << data[i].jumlah << "\t\t" << data[i].subtotal << endl;
      total += data[i].subtotal;
   }
   cout << "---------------------------------------------------------------------\n";
   cout << "TOTAL : Rp. " << total << endl;
   cout << "BAYAR : Rp. "; cin >> bayar;
   cout << "KEMBALI : Rp. " << (bayar - total) << endl;
   cout << "---------------------------------------------------------------------\n";
   getch();
}
