#include <iostream.h>
#include <conio.h>

int main(){
	int m[10][10];
   int nRow, nCol;
   int i, j;

   cout << "Baris Efektif = "; cin >> nRow;
   cout << "Kolom Efektif = "; cin >> nCol;

   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << "Elemen Ke-[" << i << ", " << j << "] = ";
      	cin >> m[i][j];
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
