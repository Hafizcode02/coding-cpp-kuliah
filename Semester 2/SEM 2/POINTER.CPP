#include<conio.h>
#include<iostream.h>
#include<cstring.h>

main()
{
	int i;
	string nama[6];
	string *ptrnama;
   ptrnama = nama;

for(i=1;i<=5;i++)
{
	cout<<"Masukan Nama Ke-" << i << " = ";
	cin>>nama[i];
}

cout<<endl;                                               	
cout<<"Hasil Pengaksesan Elemen Array Lewat";
cout<<"Pointer";
cout<<endl<<endl;

for(i=1;i<=5;i++)
{
	cout<<"Elemen "<<i<<". Nama "<<nama[i];
	cout<<", Menempati Alamat Memori = ";
	cout<< &ptrnama[i];
	cout<<endl;
}

getch();
}