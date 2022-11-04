#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#include <cstring.h>
#include <stdio.h>

#define max 10

typedef struct {
	int head;
   int tail;

   string nrp[max], nama[max], kelas[max];
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

void enqueue(string nrp, string nama, string kelas)
{
	if(isempty()==1)
	{
		pos.head=pos.tail=0;
		pos.nrp[pos.tail]=nrp;
		pos.nama[pos.tail]=nama;
		pos.kelas[pos.tail]=kelas;
	}
   else if(isfull()==0)
   {
      pos.tail++;
		pos.nrp[pos.tail]=nrp;
		pos.nama[pos.tail]=nama;
		pos.kelas[pos.tail]=kelas;
   }
   else if(isfull()==1)
   {
   	cout<<"QUEUE PENUH";
	}
}

void view()
{
	if(isempty()==0)
	{
		cout<<"NRP		Nama		Kelas\n";
		for(int i=pos.head; i<=pos.tail; i++)
		{
			cout<<setiosflags(ios::left)<<setw(16)<<pos.nrp[i];
			cout<<setiosflags(ios::left)<<setw(8)<<pos.nama[i];
			cout<<setiosflags(ios::left)<<setw(16)<<pos.kelas[i]<<endl;
		}
	}
	else
	{ cout<<"Queuue Kosong\n"; }
}

main()
{
	int menu;
	string dnrp, dnama, dkelas;
	create();
	do{
		clrscr();
		cout<<"===========================\n";
		cout<<" MENU PROGRAM QUEUE\n";
		cout<<"===========================\n";
		cout<<"1.INPUT\n";
		cout<<"2.VIEW\n";
		cout<<"3.EXIT\n";
		cout<<"===========================\n";
		cout<<"PILIH MENU : "; cin>>menu;
		switch(menu)
		{
			case 1:
         	cout<<"MASUKAN NRP : "; cin >> dnrp;
				cout<<"MASUKAN Nama : "; cin >> dnama;
				cout<<"MASUKAN Kelas : "; cin >> dkelas;
				enqueue(dnrp, dnama, dkelas);
				break;
			case 2:
				view();
				break;
			case 3:
				cout<<"Program Berakhir, Terima Kasih!";
				break;
      }
	getch();
	}while(menu!=3);
}