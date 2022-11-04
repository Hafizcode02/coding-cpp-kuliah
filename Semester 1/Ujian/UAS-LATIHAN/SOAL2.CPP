#include <constrea.h>
#include <cstring.h>


struct dataBarang{
	string kdbarang;
   string nama;
   int harga;
   int jumlah;
   int ttlharga;
};

main()
{
	dataBarang db[100];
   char pil = 'Y';
   int counter = 0;
   int bayar, total = 0;
   string naBar[5] = {"Barang Satu", "Barang Dua", "Barang Tiga", "Barang Empat", "Barang Lima"};
   string koBar[5] = {"KD01", "KD02", "KD03", "KDO4", "KDO5"};
   int harga[5] = {1000,2000,3000,4000,5000};

   do{
      cout << "Masukan Kode Barang : "; cin >> db[counter].kdbarang;
      for(int i = 0; i < 5; i++){
      	if(db[counter].kdbarang == koBar[i]){
         	db[counter].nama = naBar[i];
            db[counter].harga = harga[i];
         }
      }
      cout << "Masukan Jumlah Barang : "; cin >> db[counter].jumlah;
      db[counter].ttlharga = db[counter].harga * db[counter].jumlah;
      cout << endl;
      cout << "Sub Total : Rp. " <<db[counter].ttlharga;
      cout << endl;
      cout << "Ada Barang Lagi ? [Y/T] : "; cin >> pil;
      counter++;
      getch();
   }while(pil == 'Y' || pil == 'y');

   cout << "=============================================================\n";
   cout << "Nama Barang		Jumlah		Subtotal\n";
   for(int i = 0; i < counter; i++){
   	cout << db[i].nama << "\t\t\t" << db[i].jumlah << "\t\t\t" << db[i].ttlharga;
      total += db[i].ttlharga;
      cout << endl;
   }
   cout << "==============================================================\n";
   cout << "Total : Rp. " << total << endl;
   cout << "Uang : Rp. "; cin >> bayar;
   cout << "Kembali : Rp. " << (bayar-total);

   getch();
}