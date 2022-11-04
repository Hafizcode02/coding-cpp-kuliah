#include <iostream.h>
#include <conio.h>
#include <cstring.h>
#include <stdio.h>

class pegawai
{
	private:
	char nik[14];
	char nama[60];
	char jabatan[20];

 	public:
 	void set( char *Nik, char *Nama, char *Jabatan)
 	{
 		strcpy(nik, Nik);
		strcpy(nama, Nama);
		strcpy(jabatan, Jabatan);
 	}

 	void info()
 	{
   	cout << "======================================\n";
 		cout << " NIK : " << nik << endl;
 		cout << " Nama : " << nama << endl;
 		cout << " Jabatan : " << jabatan << endl;
   	cout << "======================================\n";
   }
};

void main()
{
	clrscr();
   pegawai karyawan;
   char tempNIK[14], tempNama[60], tempJabatan[20];

   cout << " Masukan NIK : "; cin >> tempNIK;
   cout << " Masukan Nama : "; gets(tempNama);
   cout << " Masukan Jabatan : "; gets(tempJabatan);

   karyawan.set(tempNIK, tempNama, tempJabatan);
   karyawan.info();

   getch();
}