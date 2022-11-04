#include <constrea.h>
#include <cstring.h>
#include <stdio.h>

int main()
{
	string kodePelanggan, namaPelanggan, alamatPelanggan, tipeLangganan;
   int volumePakai, biayaBeban, biayaTransport, biayaPemeliharaan, kelebihanDaya, hargaDaya, hargaKelebihanDaya, maxPemakaianDaya, ttlKelebihanDaya;
   int biayaPrimer, totalBayar;

   biayaBeban = 15000;
   biayaTransport = 2500;
   biayaPemeliharaan = 3000;

   cout << "====== Hitung Biaya Listrik Pelanggan PLN ====== \n"   ;

   cout << "Kode Pelanggan? "; cin >> kodePelanggan;
   cout << "Nama Pelanggan? "; cin >> namaPelanggan;
   cout << "Alamat Pelanggan? "; cin >> alamatPelanggan;
   cout << "Volume Pemakaian(kwh)? "; cin >> volumePakai;
   cout << "Tipe Langganan? "; cin >> tipeLangganan;

   cout << "================================================ \n"    ;

   cout << "======== Hasil Perhitungan Listrik PLN ========= \n"    ;
   cout << "Kode Pelanggan : " << kodePelanggan << endl;
   cout << "Nama Pelanggan : " << namaPelanggan << endl;
   cout << "Tipe Langganan : " << tipeLangganan << endl;

   if (tipeLangganan == "KP1")
   {
         hargaDaya = 17500;
         hargaKelebihanDaya = 19000;
         maxPemakaianDaya = 50;
   }
   else if(tipeLangganan == "KP2")
   {
   		hargaDaya = 15000;
         hargaKelebihanDaya = 17500;
         maxPemakaianDaya = 35;
   }
   else if(tipeLangganan == "KP3")
   {
   		hargaDaya = 12500;
         hargaKelebihanDaya = 15000;
         maxPemakaianDaya = 25;
   }
   else
   {
         cout << "Pilihan Salah";
   }

   biayaPrimer = volumePakai * hargaDaya;

   if(volumePakai > maxPemakaianDaya)
   {
   	kelebihanDaya = maxPemakaianDaya - volumePakai;
   }
   else {
   	kelebihanDaya = 0;
   }

   ttlKelebihanDaya =  kelebihanDaya * hargaKelebihanDaya;

   totalBayar = biayaPrimer + ttlKelebihanDaya + biayaBeban + biayaTransport + biayaPemeliharaan;

   cout << "Harga Daya Primer : " << biayaPrimer << endl;
   cout << "Kelebihan Daya : " << kelebihanDaya << endl;
   cout << "Biaya Kelebihan Daya : " << ttlKelebihanDaya << endl;
   cout << "Biaya Beban : " << biayaBeban << endl;
   cout << "Biaya Trasportasi : " << biayaTransport << endl;
   cout << "Biaya Pemeliharaan : " << biayaPemeliharaan << endl;
   cout << "Total Yang Harus Dibayar :" << totalBayar << endl;

   getch();
}
