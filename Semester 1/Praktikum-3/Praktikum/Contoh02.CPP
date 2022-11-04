#include <conio.h>
#include <cstring.h>
#include <iostream.h>

int main()
{
	int month;
	string mon;

	clrscr();
	cout << "=============================" << endl;
	cout << "=== Nama Bulan ===" << endl;
	cout << "=============================" << endl;

	cout << "Masukkan Angka bulan(1-12): ";
	cin >> month;

	cout << endl << endl;
   switch(month)
   {
   	case 1:
				mon = "Januari";
				break;
		case 2:
				mon = "Februari";
				break;
		case 3:
				mon = "Maret";
				break;
		case 4:
				mon = "April";
				break;
		case 5:
				mon = "Mei";
				break;
		case 6:
				mon = "Juni";
				break;
		case 7:
				mon = "Juli";
				break;
		case 8:
				mon = "Agustus";
				break;
		case 9:
				mon = "September";
				break;
		case 10:
				mon = "Oktober";
				break;
		case 11:
				mon = "Nopember";
				break;
		case 12:
				mon = "Desember";
				break;
		default:
				mon = "(Tidak Ada)";
				break;
   }

   cout << "Bulan Ke " << month << "adalah " << mon;
   getch();
}
