#include<iostream.h>
#include<conio.h>
#include<cstring.h>

struct STACK
{
   string nama[5], nrp[5], nilai[5];
	int atas;
}tumpukan;

STACK tumpuk;

int main ()
{
	int pilihan,i;
   string baru;
	tumpuk.atas=-1;
	do
	{
		cout<<"1.Push Data\n";
		cout<<"2.Pop Data\n";
		cout<<"3.Print Data\n";
		cout<<"4.End Data\n";
		cout<<"\nPilihan = ";
		cin>>pilihan;
		switch(pilihan)
		{
			case 1:
		{
			if(tumpuk.atas==5-1)
			{
				cout<<"Tumpukan Penuh";
				cout<<endl;
				getch();
			}
			else
         {
         	tumpuk.atas++;
				cout<<"NRP = ";cin>>baru;
            tumpuk.nrp[tumpuk.atas]=baru;
            cout<<"Nama = ";cin>>baru;
            tumpuk.nama[tumpuk.atas]=baru;
            cout<<"Nilai = ";cin>>baru;
            tumpuk.nilai[tumpuk.atas]=baru;
			}
			cout<<"-------------------------------------\n";
			break;
		}

			case 2:
   	{
			if(tumpuk.atas==-1)
			{
				cout<<"Tumpukan Kosong";
				cout<<endl;
				getch();
			}
			else
			{
				cout<<"Data yang akan di-pop = "<<tumpuk.nrp[tumpuk.atas]<<", "<<tumpuk.nama[tumpuk.atas]<<", "<<tumpuk.nilai[tumpuk.atas];
				tumpuk.atas--;
            cout<<endl;
				getch();
			}
			cout<<"-------------------------------------\n";
			break;
		}

			case 3:
		{
			if(tumpuk.atas==-1){
				cout<<"Tumpukan Kosong";
				cout<<endl;
				getch();
			}
      	else
			{
         	cout<<"\nData pada stack saat ini adalah : \n";
         	for(int i=0; i<=tumpuk.atas; i++)
				{
 					cout<<"Nilai ruang ke "<<i<<" : "<<tumpuk.nrp[i]<<", "<<tumpuk.nama[i]<<", "<<tumpuk.nilai[i]<<endl;
				}
				cout<<endl;
				getch();
			}
			cout<<"-------------------------------------\n";
			break;
		}

			default:
				cout<<"\nTidak ada dalam pilihan";
				cout<<endl;
				cout<<"-------------------------------------\n";
		}
}
while(pilihan!=4);
getch();

}
