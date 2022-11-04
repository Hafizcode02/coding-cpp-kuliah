#include <iostream.h>
#include <conio.h>

int main(){
	int m[10][10];
   int nRow, nCol;
   int i, j;

   nRow = 5;
   nCol = 5;

   for(i=0; i<nRow; i++){
   	for(j=0; j<nCol; j++){
      	m[i][j] = i*j;
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