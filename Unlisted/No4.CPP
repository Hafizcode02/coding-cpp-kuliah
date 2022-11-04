#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdio.h>

void main(){

    int bil1, bil2, bil3;

    cout<<"=== Rahmat Maulana ==="<<endl;
    cout<<"No 1 = PRADA "<<endl;
	 cout<<"No 2 = GUCCI"<<endl;
	 cout<<"No 3 = Louis Vuitton"<<endl;

    cout << "Masukkan Pilihan : " ;  cin >> bil3; cout << endl;

    if(Pil == 1){
    	cout << "Merk Baju PRADA "<< endl;
          if(bil2 < bil3)   {
                   cout << bil1 << " " <<bil3 << " " << bil2;
          }else {
                 cout << bil1 << " " <<bil2 << " " << bil3;
          }

	}else if((Pil == 3){
   		cout << "Merk Baju GUCCI " << endl;
 			if(bil1 > bil3)  {
                   cout << bil2 << " " <<bil1 << " " << bil3;
          }else {
                 cout << bil2 << " " <<bil3 << " " << bil1;
          }
   }else(Pil == 5){
   		cout << "Merk Baju Louis Vuitton" << endl;
         if(bil1 < bil2)  {
                   cout << bil3 << " " <<bil2 << " " << bil1;
          }else {
                 cout << bil3 << " " <<bil1 << " " << bil2;
          }
   }else {
   	cout << "Pilihan Tidak Tersedia ";
   }


    getch();
}