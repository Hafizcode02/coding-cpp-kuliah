#include <conio.h>
#include <iostream>

using namespace std;

main(){
	int penghasilan, bulan, pajak, denda, hasilTotal, hasilTotal2;
	
	penghasilan = 0;
	bulan = 0;
	denda = 0;
	hasilTotal = 0;

   	cout << "Masukan Penghasilan (Juta): ";
   	cin >> penghasilan;
   	cout << "Masukan bulan : ";
   	cin >> bulan;

   	penghasilan *= 1000000;
   	
   	if(penghasilan > 500000000){
      	pajak = 0.35 * penghasilan;
      	
      	if(bulan > 1){
      		// hasilTotal2 = (pajak * bulan) + ((0.12 * pajak * (bulan - 1))); ini kalo pake rumus ini hasil yang ditest case bener
      		denda = (0.12 * pajak * (bulan - 1));
      	
         	if(denda > 150000000){
           		denda = 150000000;
         	}

         	pajak *= bulan;
      	}
      	
      	hasilTotal = pajak + denda;
      	cout << "Pajak yang harus dibayarkan : " << hasilTotal << endl;
      	// cout << "Pajak yang harus dibayarkan : " << hasilTotal2 << endl; ini nampilin yang menurut test case bener
   	}else if(penghasilan > 250000000){
   		pajak = 0.25 * penghasilan;
   		
      	if(bulan > 1) {
      		denda = (0.12 * pajak) * (bulan - 1);
      		
         	if(denda > 150000000){
         		denda = 150000000;
         	}

         	pajak *= bulan;
      	}
      	
      	hasilTotal = pajak + denda;
      	cout << "Pajak yang harus dibayarkan : " << hasilTotal << endl;
   	}else if(penghasilan > 50000000){
   		pajak = 0.15 * penghasilan;
   		
		if(bulan > 1) {
      		denda = (0.12 * pajak) * (bulan - 1);
      		
         	if(denda > 150000000){
         		denda = 150000000;
         	}

         	pajak *= bulan;
      	}
      	
      	hasilTotal = pajak + denda;
      	cout << "Pajak yang harus dibayarkan : " << hasilTotal << endl;	
	}else {
		pajak = 0.05 * penghasilan;
   		
		if(bulan > 1) {
      		denda = (0.12 * pajak) * (bulan - 1);
      		
         	if(denda > 150000000){
         		denda = 150000000;
         	}

         	pajak *= bulan;
      	}
      	
      	hasilTotal = pajak + denda;
      	cout << "Pajak yang harus dibayarkan : " << hasilTotal << endl;		
	}

   getch();

}
