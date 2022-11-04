#include <conio.h>
#include <iostream.h>
#include <cstring.h>
#include <iomanip.h>

string namaReal[100];
string namaSort[100];

int nilaiReal[100];
int nilaiSort[100];

int tempData;
string tempData2;
int jumlahData;


void bubbleSort(){
  for(int i = 0; i < jumlahData; i++){
		for(int j = i+1; j < jumlahData; j++){
      	if(nilaiSort[i] < nilaiSort[j]){
      		tempData = nilaiSort[i];
         	nilaiSort[i] = nilaiSort[j];
         	nilaiSort[j] = tempData;

            tempData2 = namaSort[i];
         	namaSort[i] = namaSort[j];
         	namaSort[j] = tempData2;
         }
      }
  }
}

void showSortedData(){
	cout << "========================================\n";
   cout << "Data Sort : \n";
   cout.setf(ios::left);
   cout << setw(25) << "Nama" << setw(50) << "Nilai" << endl;
   for(int i = 0; i < jumlahData; i++){
   	cout.setf(ios::left);
   	cout << setw(25) << namaSort[i] << setw(50) << nilaiSort[i] << endl;
   }
   cout << "========================================\n";
}

void showRealData(){
   cout << "========================================\n";
   cout << "Data Asli : \n";
   cout.setf(ios::left);
   cout << setw(25) << "Nama" << setw(50) << "Nilai" << endl;
   for(int i = 0; i < jumlahData; i++){
   	cout.setf(ios::left);
   	cout << setw(25) << namaReal[i] << setw(50) << nilaiReal[i] << endl;
   }
   cout << "========================================\n";
}

main(){
	cout << "========================================\n";
	cout << "Masukan Jumlah Data : ";
   cin >> jumlahData;
   cout << endl;
   cout << "========================================\n";

   for(int i = 0; i < jumlahData; i++){
   	cout << "Masukan Nama Ke - " << (i+1) << " : ";
      getline(cin, namaReal[i]);
      namaSort[i] = namaReal[i];

   	cout << "Masukan Nilai Ke - " << (i+1) << " : ";
      cin >> nilaiReal[i];
      nilaiSort[i] = nilaiReal[i];
   }
   cout << "========================================\n";

   bubbleSort();

   cout << endl;

   showRealData();

   cout << endl;

   showSortedData();

   getch();
}
