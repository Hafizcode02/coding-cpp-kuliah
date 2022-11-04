#include <conio.h>
#include <iostream.h>

double tambah(double nilai1, double nilai2){
	return (nilai1 + nilai2);
}

double kurang(double nilai1, double nilai2){
	return (nilai1 - nilai2);
}

double kali(double nilai1, double nilai2){
	return (nilai1 * nilai2);
}

double bagi(double nilai1, double nilai2){
	return (nilai1 / nilai2);
}

main(){
	double nilai1, nilai2;
   int pilihan;

   menu :
   	cout << "=================================\n";
   	cout << "|	kalkulator Sederhana	|\n";
   	cout << "=================================\n";
   	cout << "|	1. Pertambahan		|\n";
   	cout << "|	2. Pengurangan		|\n";
   	cout << "|	3. Perkalian		|\n";
   	cout << "|	4. Pembagian		|\n";
   	cout << "|	5. Keluar		|\n";
   	cout << "=================================\n";

   	cout << "Masukan Pilihan : ";
      cin >> pilihan;

      switch(pilihan)
      {
      	case 1 :
                 	cout << "Masukan bilangan 1 : ";
                  cin >> nilai1;
						cout << "Masukan bilangan 2 : ";
                  cin >> nilai2;
                  cout << "Hasil " << nilai1 << " + " << nilai2 << " = " << tambah(nilai1, nilai2);
                  break;
      	case 2 :
                  cout << "Masukan bilangan 1 : ";
                  cin >> nilai1;
						cout << "Masukan bilangan 2 : ";
                  cin >> nilai2;
                  cout << "Hasil " << nilai1 << " - " << nilai2 << " = " << kurang(nilai1, nilai2);
                  break;
      	case 3 :
                  cout << "Masukan bilangan 1 : ";
                  cin >> nilai1;
						cout << "Masukan bilangan 2 : ";
                  cin >> nilai2;
                  cout << "Hasil " << nilai1 << " * " << nilai2 << " = " << kali(nilai1, nilai2);
                  break;
      	case 4 :
                  cout << "Masukan bilangan 1 : ";
                  cin >> nilai1;
						cout << "Masukan bilangan 2 : ";
                  cin >> nilai2;
                  cout << "Hasil " << nilai1 << " / " << nilai2 << " = " << bagi(nilai1, nilai2);
                  break;
         case 5 :
         			cout << "Terima Kasih ...\n";
                  return 0;
         default :
         			cout << "Pilihan Tidak ditemukan \n";
                  clrscr();
                  goto menu;
      }
      getch();
}
