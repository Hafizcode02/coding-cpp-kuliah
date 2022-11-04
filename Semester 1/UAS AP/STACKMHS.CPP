#include <iostream.h>
#include <conio.h>
#include <cstring.h>
#define max 10
struct Tumpukan
{
	int atas;
 	string nrp[max];
   string nama[max];
   string kelas[max];
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

void input(string nrp, string nama, string kelas)
{
	if (kosong()==1 || penuh()==0)
 	{
   	T.atas++;
 		T.nrp[T.atas]=nrp;
      T.nama[T.atas]=nama;
      T.kelas[T.atas]=kelas;
 		cout<<"Data Mahasiswa dengan nrp : "<<T.nrp[T.atas]<<" telah masuk ke stack";
 	}
 	else
 		cout<<"Tumpukan penuh";
}

void tampil()
{
	if(kosong()==0)
 	{
   	cout << "NRP		Nama		Kelas\n";
		for ( int i=T.atas; i>=0; i-- )
 		{
         cout<<T.nrp[i]<<"\t\t"<<T.nama[i]<<"\t\t"<<T.kelas[i]<<endl;
 		}
 	}
 	else
 		cout<<"Tumpukan kosong";
}

void main(){
	int pil;
 	string nrp, nama, kelas;
	awal();
	do {
		clrscr();
		cout<<"1. Input\n2. Tampil\n3. Keluar\nMasukkan pilihan :";
		cin>>pil;
 		switch(pil)
		{
 			case 1:
         			cout<<"Masukkan NRP Mahasiswa = "; cin>>nrp;
                  cout<<"Masukan Nama Mahasiswa = "; cin>>nama;
                  cout<<"Masukan Kelas Mahasiswa = "; cin>>kelas;
 						input(nrp,nama,kelas);
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
