#include <constrea.h>
#include <stdio.h>

int main(){
	char nama[100],kelas[100],jurusan[100];

   cout << "Masukan Nama : ";
   gets(nama);
   cout << "Masukan Kelas  : ";
   gets(kelas);
   cout << "Masukan Jurusan  : ";
   gets(jurusan);

   cout << "\n";
   cout << "Nama Saya = " << nama << endl;
   cout << "Kelas Saya = " << kelas << endl;
   cout << "Jurusan Saya = " << jurusan << endl;

   getch();
}
