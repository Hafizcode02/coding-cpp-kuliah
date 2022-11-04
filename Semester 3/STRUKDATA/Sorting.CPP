#include <conio.h>
#include <iostream.h>

int dataReal[100];
int dataSort[100];
int tempData;
int jumlahData;


void bubbleSort(){
  for(int i = 0; i < jumlahData; i++){
		for(int j = i+1; j < jumlahData; j++){
      	if(dataSort[i] > dataSort[j]){
      		tempData = dataSort[i];
         	dataSort[i] = dataSort[j];
         	dataSort[j] = tempData;
         }
      }

      for(int i = 0; i < jumlahData; i++){
      	cout << "[" << dataSort[i] << "]" << " ";
      }
      cout << endl;
  }
}

main(){
	cout << "Masukan Jumlah Data : ";
   cin >> jumlahData;

   for(int i = 0; i < jumlahData; i++){
   	cout << "Masukan Data -" << i << ": ";
      cin >> dataReal[i];
      dataSort[i] = dataReal[i];
   }

   cout << endl;

   bubbleSort();

   cout << endl;

   cout << "Data Asli : ";
   for(int i = 0; i < jumlahData; i++){
   	cout << dataReal[i] << " ";
   }

   cout << endl;

   cout << "Data Sort : ";
   for(int i = 0; i < jumlahData; i++){
   	cout << dataSort[i] << " ";
   }

   getch();
}
