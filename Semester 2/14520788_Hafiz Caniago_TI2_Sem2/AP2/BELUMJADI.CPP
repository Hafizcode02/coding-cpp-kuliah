#include <conio.h>
#include <iostream.h>

int maxDegree = 20;
char cursor[maxDegree];
char cursor1;

main(){
	int left[20];
   int n, i;

   cout << "Rekursif Permutasi \n";
   cout << "Jumlah Elemen Permutasi : "; cin >> n;

   if((n < 1) || (n > maxDegree)){
   	cout << "Error";
   }else{
   	l[0] = 0;
      permute(l, n);
   }



}
