#include <iostream.h>
#include <conio.h>
#include <stdio.h>

struct atribut // pengelompokan banyak data menjadi sebuah kelompok
{
	char nama[20];
	char alamat[30];
	float ipk;
};

int main()
{
	atribut mhs; // penamaan kelompok atribut menjadi mhs

	cout<<"Nama Anda? "; gets(mhs.nama); // memasukan data ke kelompok data mhs pada field nama
	cout<<"Alamat? ", gets(mhs.alamat);  // memasukan data ke kelompok data mhs pada field alamat
	cout<<"IPK? ";	cin>>(mhs.ipk); // memasukan data ke kelompok data mhs pada field ipk

	clrscr();

   // menampilkan data dari kelompok data atribut
	cout<<"Selamat Datang "<<(mhs.nama)<<endl;
	cout<<"IPK anda "<<(mhs.ipk)<<endl;
	cout<<"Alamat anda "<<(mhs.alamat)<<endl;

	getch();
}