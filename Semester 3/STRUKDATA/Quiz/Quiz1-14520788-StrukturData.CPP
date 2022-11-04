#include <conio.h>
#include <iostream.h>

main(){
	int biaya, totalBayar;

   cout << "Masukan Biaya Belanja : ";
   cin >> biaya;

   if(biaya >= 100000){
      totalBayar = biaya - (int) (0.10 * biaya);
   }else{
   	totalBayar = biaya;
   }

   cout << "Total Yang Harus Dibayar : Rp. " << totalBayar << endl;
   getch();
}