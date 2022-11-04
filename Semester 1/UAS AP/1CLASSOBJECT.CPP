#include <iostream.h>
#include <conio.h>
#include <cstring.h>
#include <stdio.h>

class mahasiswa
{
	private:
	char nrp[14];
	char nama[60];
	char kelas[20];

 	public:
 	void set( char *Nrp, char *Nama, char *Kelas)
 	{
 		strcpy(nrp, Nrp);
		strcpy(nama, Nama);
		strcpy(kelas, Kelas);
 	}

 	void info()
 	{
   	cout << "======================================\n";
 		cout << " NRP : " << nrp << endl;
 		cout << " Nama : " << nama << endl;
 		cout << " Kelas : " << kelas << endl;
   	cout << "======================================\n";
   }
};

void main()
{
	clrscr();
   mahasiswa mhs;
   char tempNIK[14], tempNama[60], tempJabatan[20];

   cout << " Masukan NRP : "; cin >> tempNIK;
   cout << " Masukan Nama : "; gets(tempNama);
   cout << " Masukan Kelas : "; gets(tempJabatan);

   mhs.set(tempNIK, tempNama, tempJabatan);
   mhs.info();

   getch();
}