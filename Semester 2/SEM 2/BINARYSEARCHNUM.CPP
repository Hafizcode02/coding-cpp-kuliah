#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <cstring.h>

int main ()
{
	int n, kiri, kanan, tengah;
   string nama[15], temp, key;
	bool ketemu = false;

	cout<<"Masukan jumlah data : ";
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cout<<"Nama ke - ["<<i<<"] : ";
		cin>>nama[i];
	}
	for (int i=0; i<n; i++)
	{
		for(int j=0; j< n-i-1; j++)
		{
			if(nama [j] > nama [j+1])
			{
				temp=nama[j];
				nama[j]=nama[j+1];
				nama[j+1]=temp;
			}
		}
	}

	cout<<"Data yang telah diurutkan adalah : ";
	for(int i=0; i<n; i++)
	{
		cout<<nama[i]<<" ";
   }

	cout<<"\n Masukan angka yang dicari : ";
	cin>>key;

	kiri=0;
	kanan=n-1;
	while( kiri <= kanan)
	{
		tengah=(kiri + kanan)/2;
		if(key == nama[tengah])
		{
			ketemu=true;
			break;
		}
		else if (key < nama [tengah])
		{
			kanan = tengah -1;
		}
		else
		{
			kiri = tengah +1;
		}
	}

	if (ketemu == true)
		cout<<"Data ditemukan!";
	else
		cout<<"Data tidak ditemukan";

   getch();
}