#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#include <stdio.h>

#define max 10

typedef struct {
	int head;
   int tail;

   char *t[max];
   int a[max], s[max];
} queue;

queue pos;

void create()
{
	pos.head=pos.tail=-1;
}

isempty()
{
	if(pos.tail==-1)
		return 1;
	else
		return 0;
}

isfull()
{
	if(pos.tail==max-1)
		return 1;
	else
		return 0;
}

void enqueue(char *q, int w, int e)
{
	if(isempty()==1)
	{
		pos.head=pos.tail=0;
		pos.t[pos.tail]=q;
		pos.a[pos.tail]=w;
		pos.s[pos.tail]=e;
	}
	else if(isfull()==0)
	{
		pos.tail++;
		pos.t[pos.tail]=q;
		pos.a[pos.tail]=w;
		pos.s[pos.tail]=e;
	}
   else if(isfull()==1)
   {
   	cout<<"QUEUE PENUH";
	}
}

dequeue()
{
	if(isempty()==0)
   {
   	int i;
      char *z=pos.t[pos.tail];
		int x=pos.a[pos.tail];
		int c=pos.s[pos.tail];

      for(i=pos.head; 1<=pos.tail-1; i++)
		{
			pos.t[i]=pos.t[i+1];
			pos.a[i]=pos.a[i+1];
			pos.s[i]=pos.s[i+1];
		}

      pos.tail--;
		cout<<"DATA YANG DIHAPUS ADALAH : \n";
		cout<<"Nama Barang : "<<z<<endl;
		cout<<"Kode Barang : "<<x<<endl;
		cout<<"Harga Barang : "<<c<<endl;
   }

   else if(isempty()==1)
   {
   	cout<<"DATA EROR......QUEUE KOSONG";
   }

   return 1;
}

void clear()
{
	pos.head=pos.tail=-1;
	cout<<"QUEUE CLEAR";
}

void view()
{
	if(isempty()==0)
	{
		cout<<"NO Nama Barang Kode Barang Harga Barang\n";
		for(int i=pos.head; i<=pos.tail; i++)
		{
			cout<<setiosflags(ios::left)<<setw(3)<<i;
			cout<<setiosflags(ios::left)<<setw(15)<<pos.t[i];
			cout<<setiosflags(ios::left)<<setw(15)<<pos.a[i];
			cout<<setiosflags(ios::left)<<setw(9)<<pos.s[i]<<endl;
		}
	}
	else
	{ cout<<"NO Nama Barang Kode Barang Harga Barang\n"; }
}

main()
{
	int menu;
	int acc, tpd;
	char tip[30];
	create();
	do{
		clrscr();
		cout<<"===========================\n";
		cout<<" MENU PROGRAM QUEUE\n";
		cout<<"===========================\n";
		cout<<"1.ENQUEUE\n";
		cout<<"2.DEQUEUE\n";
		cout<<"3.CLEAR\n";
		cout<<"4.VIEW\n";
		cout<<"5.EXIT\n";
		cout<<"===========================\n";
		cout<<"PILIH MENU : "; cin>>menu;
		switch(menu)
		{
			case 1:
				cout<<"MASUKAN Nama Barang : "; gets(tip);
				cout<<"MASUKAN Kode Barang : "; cin>>acc;
				cout<<"MASUKAN Harga Barang : "; cin>>tpd;
				enqueue(tip, acc, tpd);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				clear();
				break;
			case 4:
				view();
				break;
			case 5:
				cout<<"Thank’s bye :) :D";
				break;
      }
	getch();
	}while(menu!=5);
}