#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main(){
	int n, angka[12], kiri, kanan, tengah, temp, key'
   bool ketemu = false;

   cout << "Masukan Jumlah Data : ";
   cin >> n;

   for(int i=0; i<n; i++){
   	cout << "Angka ke-["<<i<<"] : ";
      cin >> angka[i];
   }

   for(int i = 0; i < n; i++){
   	for(int j = 0; j < n-i-1; j++){
      	if(angka[j] > angka[j+1]){
         	temp = angka[j];
            angka[j]
         }
      }
   }
}