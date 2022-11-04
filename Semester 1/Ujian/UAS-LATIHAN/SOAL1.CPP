#include <constrea.h>
#include <cstring.h>
#include <stdio.h>

struct mahasiswa {
	string nama;
   string kelas;
   int nilai;
   char grade;
};

main()
{
	int max;
   cout << "Masukan Jumlah Maksimal data : ";
   cin >> max;
   max -= 1;
	mahasiswa mhs[100];
   for(int i = 0; i < max; i++){
   	cout << "===============================\n";
      cout << "Nama : "; cin >> (mhs[i].nama);
      cout << "Kelas : "; cin >>(mhs[i].kelas);
      cout << "Nilai : "; cin >> mhs[i].nilai;
   	cout << "===============================\n";
      cout << endl;
   }

   cout << "===============================\n";
   cout << "Data Nilai Mahasiswa \n";
	cout << "===============================\n";
   cout << "Nama		Nilai		Grade" << endl;
	cout << "===============================\n";
   for(int i= 0; i < max; i++){
   	if(mhs[i].nilai >= 90){
      	mhs[i].grade = 'A';
      }else if(mhs[i].nilai >=80){
      	mhs[i].grade = 'B';
      }else if(mhs[i].nilai >= 70){
      	mhs[i].grade = 'C';
      }else {
      	mhs[i].grade = 'D';
      }

      cout << mhs[i].nama << "\t\t\t" << mhs[i].nilai << "\t\t\t" << mhs[i].grade << endl;
   }
   cout << "===============================\n";

   getch();

}