#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <cstring.h>

string nama;
int upah;
double sisaupah;
int listUang[11] = {100000,50000,20000,10000,5000,2000,1000,500,200,100};

main(){
	cout << "Masukan Nama : "; cin >> nama;
   cout << "Masukan Upah : "; cin >> upah;

   for(int i=0; i < 10; i++)
   {
   	if(upah >= listUang[i])
	   	cout << listUang[i] <<" ada -> " << (int) (upah / listUang[i]) << endl;
   	   sisaupah = upah % listUang[i];
      	upah = sisaupah;
   }

   getch();

}