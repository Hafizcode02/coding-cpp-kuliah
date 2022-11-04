#include <iostream.h>
#include <conio.h>
#include <cstring.h>

class buku
{
	private:
	char judul[35];
	char pengarang[25];
	int jumlah;

 	public:
 	void inisialisasi( char *Judul, char *Pengarang, int Jumlah)
 	{
 		strcpy(judul, Judul);
		strcpy(pengarang, Pengarang);
		jumlah = Jumlah;
 	}

 	void info()
 	{
 		cout << "Judul : " << judul << endl;
 		cout << "Pengarang : " << pengarang << endl;
 		cout << "Jumlah : " << jumlah << endl;
   }
};

void main()
{
	clrscr();
   buku novel;

   novel.inisialisasi("Wiro Sableng", "Bastian Tito", 12);
   novel.info();

   getch();
}