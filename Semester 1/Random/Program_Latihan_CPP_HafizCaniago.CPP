#include <constrea>
#include <stdio>
#include <cstring>

void gradeArrDataMhs(); // membuat program data mahasiswa dengan array
void dataStructBarang(); // membuat program data barang dengan mengimplementasikan struct
void dataArrStructBarang(); // membuat Program data barang dengan mengimplementasikan array di dalam struct
OperationalSumMatriks(); // membuat program untuk menghitung matriks
OperationalMultiplyMatriks(); // membuat program untuk perkalian matriks
searchMaxNumber(); // membuat program untuk mencari nilai max dari number
searchMinNumber(); // membuat program untuk mencari nilai min dari number
countArrayAverage(); // membuat program untuk mencari nilai rata-rata dari angka di dalam array
void garis();

int pilihan;

struct dataBarang {
	char kdBarang[20];
   char namaBarang[100];
   int hargaBarang;
};

struct dataBuku {
	char kdBuku[10];
	char judulBuku[100];
   string detailBuku[3];
};

main()
{
	do {
   clrscr();
 	cout << ">>>>>>>>>> Menu Program Utama <<<<<<<<<< \n";
	cout << "1. (array) program data mahasiswa \n";
   cout << "2. (struct) program data barang \n";
   cout << "3. (array -> struct) program data pegawai \n";
   cout << "4. (array) Penjumlahan Matriks \n";
   cout << "5. (array) Perkalian Matriks \n";
   cout << "6. (array) Mencari Max dari 5 angka \n";
   cout << "7. (array) Mencari min dari 5 angka \n";
   cout << "8. (array) Mencari Average dari 10 angka \n";
   cout << "9. (exit) \n";
   garis();
   cout << "Pilihan Proses : "; cin >> pilihan;

   switch(pilihan)
   {
   	case 1 :
               gradeArrDataMhs();
               break;
      case 2 :
      			dataStructBarang();
               break;
      case 3 :
      			dataArrStructBarang();
               break;
      default :
      			cout << "List tidak ditemukan";
               break;
   }
   
   }
   while(pilihan < 9);

   getch();
}

void garis()
{
	for(int i = 0; i<42; i++)
   {
   	cout << "=";
   }
   cout << endl;
}

void gradeArrDataMhs()
{
	clrscr();
	cout << "Fitur belum tersedia";
   getch();
}

void dataStructBarang()
{
	dataBarang data;
   int tombol;

   Retry :
	clrscr();
   garis();
   cout << "Program Data Barang Struct\n";
   garis();

   cout << "Input Kode Barang : "; gets(data.kdBarang);
   cout << "Input Nama Barang : "; gets(data.namaBarang);
   cout << "Input Harga Barang : "; cin >> (data.hargaBarang);

   garis();
   cout << "Kode Barang : " << (data.kdBarang) << endl;
   cout << "Nama Barang : " << (data.namaBarang) << endl;
   cout << "Harga Barang : " << (data.hargaBarang) << endl;
   garis();

   cout << "Apakah Kamu mau mengulang lagi(Y/T)?";
   tombol = getch();

   if((tombol == 'y') || (tombol == 'Y')) goto Retry;
   cout << "\nSelesai....";

   getch();
}

void dataArrStructBarang()
{
	dataBuku data;
   int tombol;

   Retry :
   clrscr();
   garis();

   cout << "Input KD Buku : "; gets(data.kdBuku);
   cout << "Input judulBuku : "; gets(data.judulBuku);
   cout << "Input Penerbit : "; cin >> data.detailBuku[0];
   cout << "Input Penulis : "; cin >> data.detailBuku[1];
   cout << "Input Tahun Terbit "; cin >> data.detailBuku[2];

   garis();
   cout << "Kode Buku : " << (data.kdBuku) << endl;
   cout << "Judul Buku : " << (data.judulBuku) << endl;
   cout << "Penerbit : " << (data.detailBuku[0]) << endl;
   cout << "Penulis : " << (data.detailBuku[1]) << endl;
   cout << "Tahun Terbit : " << (data.detailBuku[2]) << endl;
   garis();

   cout << "Apakah kamu mau mengulang lagi (Y/T)?";
   tombol = getch();

   if((tombol == 'Y') || (tombol == 'y')) goto Retry;
   cout << "\nSelesai...";

   getch();
}

