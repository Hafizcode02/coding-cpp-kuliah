#include <constrea.h>
#include <conio.h>
#include <cstring.h>

void gradeMHS();
void tBarang();
void sumMatriks();
void kaliMatriks();
void max();
void min();
void avg();

struct dataMHS{
	string nrp;
   string nama;
   string kelas;
   int nilai;
   char grade;
};

struct strukBarang{
	string kode;
   string nama;
   int harga;
   int jumlah;
   int subtotal;
};

int pilihan;

main(){
	do{
   	clrscr();
      cout << "============== Menu Program ================\n";
      cout << "1. Program Nilai Grade Mahasiswa \n";
      cout << "2. Pengolahan Transaksi Barang \n";
      cout << "3. Penjumlahan dua buah Matriks \n";
      cout << "4. Perkalian dua buah Matriks \n";
      cout << "5. Mencari MAX dari 5 buah angka \n";
      cout << "6. Mencari MIN dari 5 buah angka \n";
      cout << "7. Mencari AVG dari 10 buah angka \n";
      cout << "=============================================\n";
      cout << "Pilihan : ";
      cin >> pilihan;

      switch(pilihan){
      	case 1 :
         			gradeMHS();
                  break;
         case 2 :
         			tBarang();
                  break;
      	case 3 :
         			sumMatriks();
                  break;
         case 4 :
         			kaliMatriks();
                  break;
         case 5 :
         			max();
                  break;
         case 6 :
         			min();
                  break;
         case 7 :
         			avg();
                  break;
         default :
         			return 0;
      }
   }while(pilihan < 8);
   cout << "Selesai..............";
   getch();
   return 0;
}

void gradeMHS(){
	clrscr();
	dataMHS data[100];
   int counter = 0;

   cout << "Masukan Data yang akan dimasukan : ";
   cin >> counter;
   cout << endl;

   for(int i = 1; i <= counter; i++){
   	cout << "================================================\n";
   	cout << "Masukan NRP : "; cin >> data[i].nrp;
      cout << "Masukan Nama : "; cin >> data[i].nama;
      cout << "Masukan Kelas : "; cin >> data[i].kelas;
      cout << "Masukan Nilai : "; cin >> data[i].nilai;
   	cout << "================================================\n";
      cout << endl;
   }

   for(int i = 1; i <= counter; i++){
   	if(data[i].nilai >= 85){
      	data[i].grade = 'A';
      }
      else if(data[i].nilai >= 75){
      	data[i].grade = 'B';
      }
      else if(data[i].nilai >= 60){
      	data[i].grade = 'C';
      }
      else if(data[i].nilai >= 45){
      	data[i].grade = 'D';
      }else {
      	data[i].grade = 'E';
      }
   }

   cout << "=====================================================\n";
   cout << "						  Data Mahasiswa						  \n";
   cout << "=====================================================\n";
   cout << "NRP		Nama		Kelas		Nilai		Grade				  \n";
   for(int i = 1; i <= counter; i++){
   	cout << data[i].nrp << "\t\t\t" << data[i].nama << "\t\t\t" << data[i].kelas << "\t\t\t" << data[i].nilai << "\t\t\t" << data[i].grade << endl;
   }
   cout << "=====================================================\n";
   getch();
}

void tBarang(){
	strukBarang data[100];
   int total,bayar;
   char pilihan = 'Y';
   int counter = 0;

   string kdbarang[5] = {"KD01","KD02","KD03","KD04","KD05"};
   string nmbarang[5] = {"Barang Satu", "Barang Dua", "Barang Tiga", "Barang Empat", "Barang Lima"};
   int harga[5] = {1000,2000,3000,4000,5000};

   cout << "=======================================================\n";
   cout << "Data Barang\n";
   cout << "=======================================================\n";
   cout << "KDBarang		NamaBarang		Harga\n";
   for(int i = 0; i < 5; i++){
   	cout << kdbarang[i] << "\t\t\t" << nmbarang[i] << "\t\t\t" << "Rp. " << harga[i] << endl;
   }
   cout << endl;

   do {
      task :
      	cout << "===============================================\n";
      	cout << "Masukan KDBarang : "; cin >> data[counter].kode;
         for(int i = 0; i < 5; i++){
         	if(data[counter].kode == kdbarang[i])
            {
            	data[counter].nama = nmbarang[i];
               data[counter].harga = harga[i];
               break;
            }
         }

         if(data[counter].nama == ""){
         	cout << "Data Tidak Ditemukan ";
            cout << endl;
            goto task;
         }

         cout << "Masukan Jumlah Barang ";
         cin >> data[counter].jumlah;
         data[counter].subtotal = data[counter].jumlah * data[counter].harga;
         cout << endl << endl;

      	cout << "===============================================\n";
         cout << "Ada Tambahan [Y/T] ? : ";
         cin >> pilihan;

         counter++;
      	cout << "===============================================\n";
   }while(pilihan == 'Y' || pilihan == 'y');

   total = 0;
   cout << endl;
   cout << "===============================================\n";
   cout << "STRUK\n";
   cout << "KDBarang		Nama		Harga		Jumlah		Subtotal\n";
   for(int i = 0; i < counter; i++){
   	cout << data[i].kode << "\t\t\t" << data[i].nama << "\t\t\t" << data[i].harga << "\t\t\t" << data[i].jumlah << "\t\t\t" << data[i].subtotal << endl;
      total += data[i].subtotal;
   }

   cout << "================================================\n";
   cout << "TOTAL : Rp. " << total << endl;
   cout << "BAYAR : Rp. "; cin >> bayar;
   cout << "KEMBALIAN : Rp. " << (bayar-total);
   cout << endl;
   getch();
}

void sumMatriks(){
	int ma[3][3];
   int mb[3][3];
   int mc[3][3];
	cout << "Matriks Ordo 3 x 3 \n";

   cout << "Matriks A \n";
   for(int i = 1; i<=3; i++){
   	for(int j = 1; j<=3; j++){
      	cout << "ma[" << i << "," << j << "] : "; cin >> ma[i][j];
      }
   }
   cout << endl;

   cout << "Matriks B \n";
   for(int i = 1; i<=3; i++){
   	for(int j = 1; j<=3; j++){
      	cout << "ma[" << i << "," << j << "] : "; cin >> mb[i][j];
      }
   }
   cout << endl;

   cout << "Matriks A Tampil : \n";
   for(int i = 1; i<=3; i++){
   	for(int j = 1; j<=3; j++){
      	cout << ma[i][j] << "\t\t";
      }
      cout << endl;
   }
   cout << endl;

   cout << "Matriks B Tampil : \n";
   for(int i = 1; i<=3; i++){
   	for(int j = 1; j<=3; j++){
      	cout << mb[i][j] << "\t\t";
      }
      cout << endl;
   }
   cout << endl;

   cout << "Pertambahan A + B\n";
   for(int i = 1; i<=3; i++){
   	for(int j = 1; j<=3; j++){
      	mc[i][j] = ma[i][j] + mb[i][j];
      }
      cout << endl;
   }
   cout << endl;

   cout << "Pertambahan A + Bs\n";
   for(int i = 1; i<=3; i++){
   	for(int j = 1; j<=3; j++){
      	cout << "\t" << mc[i][j];
      }
      cout << endl;
   }
   cout << endl;

   getch();

}
void kaliMatriks(){}
void max(){
	clrscr();
   int dataArr[5];
   int max;

   for(int i = 1; i <= 5; i++){
   	cout << "Masukan Angka Ke " << i << ": "; cin >> dataArr[i];
   }

	max = 0;
   for(int i = 1; i <=5; i++){
   	if(dataArr[i] > max){
      	max = dataArr[i];
      }
   }

   cout << "Nilai MAX adalah : " << max << endl;
   getch();
}
void min(){
	clrscr();
   int dataArr[5];
   int min;

   for(int i = 1; i <= 5; i++){
   	cout << "Masukan Angka Ke " << i << ": "; cin >> dataArr[i];
   }

   min = dataArr[1];
   for(int i = 1; i <=5; i++){
   	if(dataArr[i] < min){
      	min = dataArr[i];
      }
   }

   cout << "Nilai MIN adalah : " << min << endl;
   getch();
}
void avg(){
	clrscr();
   int dataArr[10];
   int sumdata;
   float avg;

   sumdata = 0;
   for(int i = 1; i <= 10; i++){
   	cout << "Masukan Angka Ke " << i << ": "; cin >> dataArr[i];
      sumdata += dataArr[i];
   }

   avg = sumdata / 10;
   cout << "Rata Ratanya adalah : " << avg << endl;
   getch();

}
