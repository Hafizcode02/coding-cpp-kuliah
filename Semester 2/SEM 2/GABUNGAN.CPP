#include <conio.h>
#include <iostream.h>
#include <cstring.h>

string nama;
int upah, pilih;
double sisaupah;
int listUang[11] = {100000,50000,20000,10000,5000,2000,1000,500,200,100};

// Terbilang
void satuan (int a)
{
if (a==1) {cout<<" Satu ";}
else if (a==2) {cout<<" Dua ";}
else if (a==3) {cout<<" Tiga ";}
else if (a==4) {cout<<" Empat ";}
else if (a==5) {cout<<" Lima ";}
else if (a==6) {cout<<" Enam ";}
else if (a==7) {cout<<" Tujuh ";}
else if (a==8) {cout<<" Delapan ";}
else if (a==9) {cout<<" Sembilan ";}
else if (a==10) {cout<<" Sepuluh ";}
else if (a==11) {cout<<" Sebelas ";}
}

void terbilang (long b){
	if (b<=11){
   	satuan(b);
   }
	else if ((b>11) && (b<=19)){
		terbilang(b%10);
 		cout<<"Belas ";
   }
   else if ((b>=20)&&(b<=99)){
   	terbilang(b/10);
      cout<<"Puluh ";
      terbilang(b%10);
   }
   else if ((b>=100)&&(b<=199)){
   	cout<<"Seratus ";
      terbilang(b%100);
   }
   else if ((b>=200)&&(b<=999)){
   	terbilang(b/100);
      cout<<"Ratus ";
      terbilang(b%100);
   }
   else if ((b>=1000)&&(b<=1999)){
   	cout<<"Seribu ";
      terbilang(b%1000);
   }
   else if ((b>=2000)&&(b<=999999)){
   	terbilang(b/1000);
      cout<<"Ribu ";
      terbilang(b%1000);
   }
   else if ((b>=1000000)&&(b<=999999999)){
   	terbilang (b/1000000);
   	cout<<"Juta ";
   	terbilang (b%1000000);
   }
   else if ((b>=1000000000)&&(b<=999999999999)){
   	terbilang (b/1000000000);
   	cout<<"Milyar ";
   	terbilang (b%1000000000);
   }
   else if ((b>=1000000000000))
		cout<<"Maaf ! Angka Yang Anda Masukan Salah!\n\n";
}

// Jumlah Uang
void jumlahUang()
{
   for(int i=0; i < 10; i++)
   {
   	if(upah >= listUang[i])
	   	cout << listUang[i] <<" ada -> " << (int) (upah / listUang[i]) << endl;
   	   sisaupah = upah % listUang[i];
      	upah = sisaupah;
   }
}

void input()
{
	cout << "Masukan Nama : "; cin >> nama;
   cout << "Masukan Upah : "; cin >> upah;
}

// Main
main(){
   do{
   clrscr();
	cout << "APLIKASI SEDERHANA \n";
   cout << "1. Terbilang Uang Rupiah \n";
   cout << "2. Hitung Lembaran Uang \n";
   cout << "3. Gabungan Keduannya\n";
   cout << "Pilih : "; cin >> pilih;

   switch(pilih){
   	case 1 :
      			clrscr();
               input();
               terbilang(upah);
               getch();
               break;
      case 2 :
               clrscr();
               input();
               jumlahUang();
               getch();
               break;
      case 3 :
               clrscr();
               input();
               terbilang(upah);
               cout << endl;
               jumlahUang();
               getch();
               break;
      default :
      			cout << "Tidak ada dalam pilihan\n";
               break;
   }
   }while(pilih <= 3);
}
