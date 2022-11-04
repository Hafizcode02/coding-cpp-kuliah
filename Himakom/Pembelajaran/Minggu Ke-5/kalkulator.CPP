#include <conio.h>
#include <iostream.h>

int angka1, angka2;
double hasil;
int i, percobaan;

// Fungsi yang mereturn data
int tambah(int a, int b){
	hasil = a + b;
   return (int) hasil;
}

int kurang(int a, int b){
	hasil = a - b;
   return (int) hasil;
}

double bagi(double a, double b){
	hasil = a / b;
   return hasil;
}

int kali(int a, int b){
	hasil = a * b;
   return hasil;
}

// fungsi prosedur
void garis(){
	cout << "==================================\n";
}

void pertambahan(){
   cout << "Masukan Jumlah Percobaan Pertambahan : ";
   cin >> percobaan;

   for(i = 0; i < percobaan; i++){
   	garis();
   	cout << "Masukan Angka Ke-1 = ";
      cin >> angka1;
      cout << "Masukan Angka Ke-2 = ";
      cin >> angka2;
      cout << "Hasil Pertambahan " << angka1 << " + " << angka2 << " = " << tambah(angka1, angka2);
      cout << endl;
   }
}

void pengurangan(){
   cout << "Masukan Jumlah Percobaan Pengurangan : ";
   cin >> percobaan;

   for(i = 0; i < percobaan; i++){
   	garis();
   	cout << "Masukan Angka Ke-1 = ";
      cin >> angka1;
      cout << "Masukan Angka Ke-2 = ";
      cin >> angka2;
      cout << "Hasil Pengurangan " << angka1 << " - " << angka2 << " = " << kurang(angka1, angka2);
      cout << endl;
   }
}

void perkalian(){
   cout << "Masukan Jumlah Percobaan Perkalian: ";
   cin >> percobaan;

   for(i = 0; i < percobaan; i++){
   	garis();
   	cout << "Masukan Angka Ke-1 = ";
      cin >> angka1;
      cout << "Masukan Angka Ke-2 = ";
      cin >> angka2;
      cout << "Hasil Perkalian " << angka1 << " x " << angka2 << " = " << kali(angka1, angka2);
      cout << endl;
   }
}

void pembagian(){
   cout << "Masukan Jumlah Percobaan Pembagian : ";
   cin >> percobaan;

   for(i = 0; i < percobaan; i++){
   	garis();
   	cout << "Masukan Angka Ke-1 = ";
      cin >> angka1;
      cout << "Masukan Angka Ke-2 = ";
      cin >> angka2;
      cout << "Hasil Pembagian " << angka1 << " / " << angka2 << " = " << bagi(angka1, angka2);
      cout << endl;
   }
}

main(){
	int pilihan;
   do{
   	clrscr();
   	cout << "===== Kalkulator Sederhana =====\n";
   	cout << "1. Pertambahan \n";
   	cout << "2. Pengurangan \n";
   	cout << "3. Perkalian \n";
   	cout << "4. Pembagian \n";
   	cout << "5. Keluar\n";
   	cout << "Masukan Pilihan = ";
   	cin >> pilihan;
      switch(pilihan){
      	case 1 :
         			pertambahan();
                  break;
         case 2 :
         			pengurangan();
                  break;
         case 3 :
         			perkalian();
                  break;
         case 4 :
         			pembagian();
                  break;
         case 5 :
         			cout << "Terima Kasih.... ";
                  break;
         default :
         			cout << "Pilihan tidak tersedia!";
                  break;
      }
      getch();
   }while(pilihan != 5);
}

