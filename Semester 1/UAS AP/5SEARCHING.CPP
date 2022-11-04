#include <conio.h>
#include <iostream.h>
#include <cstring.h>

int i, posisi, pilih;
string cari;
string nama[10] = {"DADANG","JAMRUD","SUJARWO","RIMANDA","PRANATA","LORENZA","HAKIM","LUKMAN","LORAN","GORBON"};
string nrp[10] = {"14520789","14520889","14520769","14520569","14520780","14520784","14520870","14520786","14520769","14520965"};

void cariNama()
{
	cout << "Data Nama: ";
   for(i = 0; i < 10; i++){
   	cout << nama[i] << " ";
   }

   cout <<"\n\nData yang ingin dicari : ";
   cin >> cari;
   i = 0;
   posisi = 0;
   while(i < 10 && nama[i] != cari){
   	i++;
   }

   if(nama[i] != cari){
   	cout << "\nMaaf data yang dicari tidak ada";
   }else{
   	cout << "\nDitemukan pada posisi ke " << (posisi+=(i+1));
   }

   getch();
}

void cariNRP()
{
	cout << "Data NRP: ";
   for(i = 0; i < 10; i++){
   	cout << nrp[i] << " ";
   }

   cout <<"\n\nData yang ingin dicari : ";
   cin >> cari;
   i = 0;
   posisi = 0;
   while(i < 10 && nrp[i] != cari){
   	i++;
   }

   if(nrp[i] != cari){
   	cout << "\nMaaf data yang dicari tidak ada";
   }else{
   	cout << "\nDitemukan pada posisi ke " << (posisi+=(i+1));
   }

   getch();
}

main()
{
	do{
   clrscr();
   cout << "========================================\n";
   cout << "1. Cari Data NRP\n";
   cout << "2. Cari Data Nama\n";
   cout << "3. Keluar\n";
   cout << "=========================================\n";
   cout << "Pilih : "; cin >> pilih;
   switch(pilih){
   	case 1 : cariNRP(); break;
      case 2 : cariNama(); break;
      default : cout << "Pilihan tidak ditemukan";
   }
   }while(pilih != 3);

}
