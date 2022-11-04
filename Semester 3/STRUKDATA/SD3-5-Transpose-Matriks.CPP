#include <iostream.h>
#include <conio.h>

int main(){
	int mReal[10][10];
   int mTranspose[10][10];
   int nRow, nCol;
   int i, j;

   cout << "Baris Efektif = "; cin >> nRow;
   cout << "Kolom Efektif = "; cin >> nCol;

   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << "Elemen Ke-[" << i << ", " << j << "] = ";
      	cin >> mReal[i][j];
      }
   }

   cout << "\n Matriks Asli \n";
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << mReal[i][j] << " ";
      }
      cout << endl;
   }

   //cout << "\n\n Matriks Transpose \n";
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	mTranspose[i][j] = mReal[j][i];
      }
      cout << endl;
   }

   cout << "\n Matriks Akhir (Transpose) \n";
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	cout << mTranspose[i][j] << " ";
      }
      cout << endl;
   }

   getch();
}