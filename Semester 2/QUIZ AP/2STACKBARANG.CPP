#include <iostream.h>
#include <conio.h>
#include <cstring.h>
#define max 10
struct Tumpukan
{
	int atas;
 	string kdbrg[max];
   string nmbrg[max];
   int harga[max];
} T;

void awal()
{
	T.atas=-1;
}

int kosong()
{
	if(T.atas==-1)
 		return 1;
 	else
 		return 0;
}

int penuh()
{
	if(T.atas==max-1)
 		return 1;
 	else
 		return 0;
}

void input(string kdbrg, string nmbrg, int harga)
{
	if (kosong()==1 || penuh()==0)
 	{
   	T.atas++;
 		T.kdbrg[T.atas]=kdbrg;
      T.nmbrg[T.atas]=nmbrg;
      T.harga[T.atas]=harga;
 		cout<<"Data Barang dengan Kode : "<<T.kdbrg[T.atas]<<" telah masuk ke stack";
 	}
 	else
 		cout<<"Tumpukan penuh";
}

void tampil()
{
	if(kosong()==0)
 	{
   	cout << "Kode Barang		Nama Barang		Harga\n";
		for ( int i=T.atas; i>=0; i-- )
 		{
         cout<<T.kdbrg[i]<<"\t\t"<<T.nmbrg[i]<<"\t\t"<<T.harga[i]<<endl;
 		}
 	}
 	else
 		cout<<"Tumpukan kosong";
}

void main(){
	int pil;
 	string kdbrg, nmbrg;
   int harga;
	awal();
	do {
		clrscr();
		cout<<"1. Input\n2. Tampil\n3. Keluar\nMasukkan pilihan :";
		cin>>pil;
 		switch(pil)
		{
 			case 1:
         			cout<<"Masukkan Kode Barang = "; cin>>kdbrg;
                  cout<<"Masukan Nama Barang = "; cin>>nmbrg;
                  cout<<"Masukan Harga Barang = "; cin>>harga;
 						input(kdbrg,nmbrg,harga);
 						break;
 			case 2:
         			tampil();
 						break;
 			case 3:
         			cout<<"Terimakasih, tekan enter untuk keluar";
 		}
      getch();
   } while(pil!=3);
}
