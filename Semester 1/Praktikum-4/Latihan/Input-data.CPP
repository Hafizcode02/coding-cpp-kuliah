#include <constrea.h>
#include <cstring.h>

void main()
{
	int  nilai;
   string nrp, nama, grade, kdmatkul;

   	cout << "Data Mahasiswa\n";

      cout << "Masukan NRP: ";
      cin >> nrp;
      cout << "Masukan Nama: ";
      cin >> nama;
      cout << "Kode Matakuliah: " ;
      cin >> kdmatkul;
      cout << "Masukan Nilai: ";
      cin >> nilai;

      if(nilai >= 81 && nilai <= 100)
      {
      	grade = "A";
      }
      else if(nilai >= 71 && nilai <= 80)
      {
      	grade = "B";
      }
      else if(nilai >= 61 && nilai <= 70)
      {
      	grade = "C";
      }
      else if(nilai >= 51 && nilai <= 60)
      {
      	grade = "D";
      }
      else if(nilai >= 0 && nilai <=50)
      {
       	grade = "E";
      }

      cout << "Bobot Nilai " << grade << endl;;
      cout << endl;

   getch();
}