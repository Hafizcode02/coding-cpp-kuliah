#include <iostream.h>
#include <conio.h>

int main(){
	int m[10][10];
   int nRow, nCol;
   int i, j, sum;

   nRow = 5;
   nCol = 5;
   sum = 0;
   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	sum = sum + m[i][j];
      }
   }

   cout << "Total Semua Elemen = " << sum;

   getch();
}