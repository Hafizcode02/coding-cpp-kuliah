#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#include <cstring.h>
#include <stdio.h>

#define max 10

typedef struct {
	int head;
   int tail;

   string nrp[max], nama[max], matakuliah[max], grade[max];
   float nilai[max], lp[max], absen[max], uts[max], uas[max], la[max];
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

string gradeNilai(int nilai)
{
	if(nilai >= 90) {return 'A';}
   else if(nilai >= 75) {return 'B';}
   else if(nilai >= 60) {return 'C';}
   else {return 'D';}
}

void enqueue(string nrp, string nm, string mk, float lp, float absen, float uts, float uas, float la)
{
	if(isempty()==1)
	{
		pos.head=pos.tail=0;
		pos.nrp[pos.tail]=nrp;
		pos.nama[pos.tail]=nm;
		pos.matakuliah[pos.tail]=mk;

      float vallp = 0.10*lp;
      float valabsen = 0.10*absen;
      float valuts = 0.25*uts;
      float valuas = 0.40*uas;
      float valla = 0.15*la;
      float nilai = vallp + valabsen + valuts + valuas + valla;

      pos.lp[pos.tail]= lp;
      pos.absen[pos.tail]= absen;
      pos.uts[pos.tail]= uts;
      pos.uas[pos.tail]= uas;
      pos.la[pos.tail]= la;

      pos.nilai[pos.tail]=nilai;
      pos.grade[pos.tail]= gradeNilai(nilai);
	}
	else if(isfull()==0)
	{
		pos.tail++;
		pos.nrp[pos.tail]=nrp;
		pos.nama[pos.tail]=nm;
		pos.matakuliah[pos.tail]=mk;

      float vallp = 0.10*lp;
      float valabsen = 0.10*absen;
      float valuts = 0.25*uts;
      float valuas = 0.40*uas;
      float valla = 0.15*la;
      float nilai = vallp + valabsen + valuts + valuas + valla;

      pos.lp[pos.tail]= lp;
      pos.absen[pos.tail]= valabsen;
      pos.uts[pos.tail]= valuts;
      pos.uas[pos.tail]= valuas;
      pos.la[pos.tail]= valla;

      pos.nilai[pos.tail]=nilai;
      pos.grade[pos.tail]= gradeNilai(nilai);
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
      string nrp=pos.nrp[pos.tail];
      string nama=pos.nama[pos.tail];
		string matakuliah=pos.matakuliah[pos.tail];
		string grade=pos.grade[pos.tail];
      int lp = pos.lp[pos.tail];
      int absen = pos.absen[pos.tail];
      int uts = pos.uts[pos.tail];
      int uas = pos.uas[pos.tail];
      int la = pos.la[pos.tail];
      int nilai = pos.nilai[pos.tail];

      for(i=pos.head; 1<=pos.tail-1; i++)
		{
			pos.nrp[i]=pos.nrp[i+1];
			pos.nama[i]=pos.nama[i+1];
			pos.matakuliah[i]=pos.matakuliah[i+1];
         pos.grade[i]=pos.grade[i+1];
         pos.lp[i]=pos.lp[i+1];
         pos.absen[i]=pos.absen[i+1];
         pos.uts[i]=pos.uts[i+1];
         pos.uas[i]=pos.uas[i+1];
         pos.la[i]=pos.la[i+1];
         pos.nilai[i]=pos.nilai[i+1];
		}

      pos.tail--;
		cout<<"DATA YANG DIHAPUS ADALAH : \n";
		cout<<"NRP : "<<nrp<<endl;
		cout<<"Nama : "<<nama<<endl;
		cout<<"Matakuliah : "<<matakuliah<<endl;
      cout<<"LP : "<<lp<<endl;
      cout<<"Absen : "<<absen<<endl;
      cout<<"UTS : "<<uts<<endl;
      cout<<"UAS : "<<uas<<endl;
      cout<<"LA : "<<la<<endl;
      cout<<"Nilai : "<<nilai<<endl;
      cout<<"Grade : "<<grade<<endl;
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
		cout<<"NRP		Nama	Mata Kuliah	LP	Absen	UTS	UAS	LA	Total	Grade\n";
		for(int i=pos.head; i<=pos.tail; i++)
		{
			cout<<setiosflags(ios::left)<<setw(16)<<pos.nrp[i];
			cout<<setiosflags(ios::left)<<setw(8)<<pos.nama[i];
			cout<<setiosflags(ios::left)<<setw(16)<<pos.matakuliah[i];
			cout<<setiosflags(ios::left)<<setw(8)<<pos.lp[i];
			cout<<setiosflags(ios::left)<<setw(8)<<pos.absen[i];
			cout<<setiosflags(ios::left)<<setw(8)<<pos.uts[i];
			cout<<setiosflags(ios::left)<<setw(8)<<pos.uas[i];
			cout<<setiosflags(ios::left)<<setw(8)<<pos.la[i];
			cout<<setiosflags(ios::left)<<setw(8)<<pos.nilai[i];
         cout<<setiosflags(ios::left)<<setw(8)<<pos.grade[i];
		}
	}
	else
	{ cout<<"NRP Nama Mata Kuliah Nilai Grade\n"; }
}

main()
{
	int menu;
	string dnrp, dnama, dmatkul;
	float dlp, dabsen, duts,duas,dla;
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
         	cout<<"MASUKAN NRP : "; cin >> dnrp;
				cout<<"MASUKAN Nama Mahasiswa : "; cin >> dnama;
				cout<<"MASUKAN Mata Kuliah : "; cin >> dmatkul;
				cout<<"MASUKAN Nilai LP : "; cin>>dlp;
            cout<<"MASUKAN NILAI ABSEN : "; cin>>dabsen;
            cout<<"MASUKAN NILAI UTS : "; cin>>duts;
            cout<<"MASUKAN NILAI UAS : "; cin>>duas;
            cout<<"MASUKAN NILAI LA : "; cin>>dla;
				enqueue(dnrp, dnama, dmatkul, dlp, dabsen, duts, duas, dla);
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
				cout<<"Program Berakhir, Terima Kasih!";
				break;
      }
	getch();
	}while(menu!=5);
}