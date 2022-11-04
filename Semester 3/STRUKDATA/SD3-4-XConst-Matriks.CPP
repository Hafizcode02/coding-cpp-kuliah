#include <iostream.h>
#include <conio.h>

int main(){
	int m[10][10];
   int nRow, nCol;
   int i, j, x;

   cout << "Baris Efektif = "; cin >> nRow;
   cout << "Kolom Efektif = "; cin >> nCol;

   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << "Elemen Ke-[" << i << ", " << j << "] = ";
      	cin >> m[i][j];
      }
   }

   cout << "Faktor Pengali = "; cin >> x;
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	m[i][j] = m[i][j] * x;
      }
   }

   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << m[i][j] << " ";
      }
      cout << endl;
   }

   getch();
}