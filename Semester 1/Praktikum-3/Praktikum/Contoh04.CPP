#include <iostream.h>
#include <conio.h>

void main()
{
	int kode;
	char nama[15];
	char jk;

	cout<<"Dialog hari ini: "<<endl;

	cout<<"Nama kamu? ";
	cin.get(nama, sizeof(nama));

	cout<<"Jenis Kelamin? ";
	cin>>jk;

	cout<<"Angka hoki? < 1,2,3,4,5,6,7> ? ";
	cin>>kode;

	clrscr();
	cout <<"Halo, "<<nama<<" apa kabar?"<<endl;
	if(jk=='l' || jk=='L')
	{
		cout<<"Kamu seorang laki-laki yang ganteng n gagah!"<<endl;
      switch(kode)
		{
			case 1:
				cout<<"Angka beruntungan kamu = 1, Hari Senin"<<endl;
				break;
			case 2:
				cout<<"Angka beruntungan kamu = 2, Hari Selasa"<<endl;
				break;
			case 3:
				cout<<"Angka beruntungan kamu = 3, Hari Rabu"<<endl;
				break;
			case 4:
				cout<<"Angka beruntungan kamu = 4, Hari Kamis"<<endl;
				break;
			case 5:
				cout<<"Angka beruntungan kamu = 5, Hari Jumat"<<endl;
				break;
			case 6:
				cout<<"Angka beruntungan kamu = 6, Hari Sabtu"<<endl;
				break;
			case 7:
				cout<<"Angka beruntungan kamu = 7, Hari Minggu"<<endl;
				break;
			default:
         	cout<<"Anda memasukan kode salah.\n";
				break;
		}
	} else {
   	cout<<"Kamu seorang perempuan manis n cantik! alias MACAN!"<<endl;
		switch(kode)
		{
			case 1: cout<<"Angka beruntungan kamu = 1, Hari Senin"<<endl; break;
			case 2: cout<<"Angka beruntungan kamu = 2, Hari Selasa"<<endl; break;
			case 3: cout<<"Angka beruntungan kamu = 3, Hari Rabu"<<endl; break;
			case 4: cout<<"Angka beruntungan kamu = 4, Hari Kamis"<<endl; break;
			case 5: cout<<"Angka beruntungan kamu = 5, Hari Jumat"<<endl; break;
			case 6: cout<<"Angka beruntungan kamu = 6, Hari Sabtu"<<endl; break;
			case 7: cout<<"Angka beruntungan kamu = 7, Hari Minggu"<<endl; break;

			default: cout<<"Anda memasukan kode salah.\n"; break;

		}
	}

   getch();

}