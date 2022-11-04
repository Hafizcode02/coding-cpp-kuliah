#include <iostream.h>
#include <conio.h>
#include <cstring.h>
#include <stdio.h>

// Code By : Hafiz Caniago, TI2, Semester 2, 14520788, UAS Praktek AP
// Searching : Metode Sequential/Linear Search
// Sorting : Metode Bubble Sort
// Antrian & Tumpukan menggunakan Method yang sama karena logika yang mirip.

class mahasiswa
{
 	public:
   string nrp[11];
	string nama[11];
	string kelas[11];
   int index;

   void setIndexFirst()
   {
   	index = -1;
   }

 	void set(string nrpd, string namad, string kelasd, int indexd)
 	{
   	index = indexd;
   	nrp[index] = nrpd;
      nama[index] = namad;
      kelas[index] = kelasd;
 	}

 	void info()
 	{
   	cout << "======================================\n";
 		cout << " NRP : " << nrp[index] << endl;
 		cout << " Nama : " << nama[index] << endl;
 		cout << " Kelas : " << kelas[index] << endl;
   	cout << "======================================\n";
   }
};

mahasiswa mhs;
int tempIndex=-1;
int pilihan;
string tempNRP, tempNama, tempKelas;

void inputMHS()
{
	clrscr();

   if(tempIndex < 11){
   cout << "===========Form Input===========\n";
   cout << "Masukan NRP : "; cin >> tempNRP;
   cout << "Masukan Nama : "; cin >> tempNama;
   cout << "Masukan Kelas : "; cin >> tempKelas;

   mhs.set(tempNRP, tempNama, tempKelas, tempIndex+=1);
   mhs.info();
   }
}

void displayData()
{
    cout << "Data Setelah Diurutkan \n";
    for(int loop = 0; loop <= tempIndex; loop++)
		{
   		cout << mhs.nrp[loop] << "\t\t\t" << mhs.nama[loop] << "\t\t\t" << mhs.kelas[loop] << endl;
    	}
}

void sortNama()
{
	for( int i=0;i<=tempIndex;i++)
	{
 		for(int j=i+1;j<=tempIndex;j++)
 		{
 			if(mhs.nama[i]>mhs.nama[j])
 			{
 				tempNama=mhs.nama[i];
 				mhs.nama[i]=mhs.nama[j];
 				mhs.nama[j]=tempNama;

            tempNRP=mhs.nrp[i];
            mhs.nrp[i]=mhs.nrp[j];
            mhs.nrp[j]=tempNRP;

            tempKelas=mhs.kelas[i];
            mhs.kelas[i]=mhs.kelas[j];
            mhs.kelas[j]=tempKelas;
 			}
 		}
 	}

   displayData();
}

void sortNrp()
{
	for(int i=0;i<=tempIndex;i++)
	{
 		for(int j=i+1;j<=tempIndex;j++)
 		{
 			if(mhs.nrp[i]>mhs.nrp[j])
 			{
 				tempNama=mhs.nama[i];
 				mhs.nama[i]=mhs.nama[j];
 				mhs.nama[j]=tempNama;

            tempNRP=mhs.nrp[i];
            mhs.nrp[i]=mhs.nrp[j];
            mhs.nrp[j]=tempNRP;

            tempKelas=mhs.kelas[i];
            mhs.kelas[i]=mhs.kelas[j];
            mhs.kelas[j]=tempKelas;
 			}
 		}
 	}

   displayData();
}

void sortKelas()
{
	for(int i=0;i<=tempIndex;i++)
	{
 		for(int j=i+1;j<=tempIndex;j++)
 		{
 			if(mhs.kelas[i]>mhs.kelas[j])
 			{
 				tempNama=mhs.nama[i];
 				mhs.nama[i]=mhs.nama[j];
 				mhs.nama[j]=tempNama;

            tempNRP=mhs.nrp[i];
            mhs.nrp[i]=mhs.nrp[j];
            mhs.nrp[j]=tempNRP;

            tempKelas=mhs.kelas[i];
            mhs.kelas[i]=mhs.kelas[j];
            mhs.kelas[j]=tempKelas;
 			}
 		}
 	}

   displayData();
}

void sortingData()
{
    int pilihsort;
	 do {
    	clrscr();
      cout << "Pengurutan Data Mahasiswa \n";
      cout << "1. Sorting Berdasarkan NRP \n";
      cout << "2. Sorting Berdasarkan Nama \n";
      cout << "3. Sorting Berdasarkan Kelas \n";
      cout << "4. Exit\n";
      cout << "Pilihan : "; cin >> pilihsort;
      switch(pilihsort){
      	case 1 :
                 sortNrp();
                 break;
         case 2 :
         		  sortNama();
                 break;
         case 3 :
         		  sortKelas();
                 break;
      }
      getch();
    }while(pilihsort != 4);
}

void cariNama()
{
	cout << "Cari Nama : "; cin >> tempNama;
   int i = 0;
   int posisi = 0;
   while(i < 10 && mhs.nama[i] != tempNama){
   	i++;
   }

   if(mhs.nama[i] != tempNama){
   	cout << "\nMaaf data yang dicari tidak ada";
   }else{
   	cout << "\nDitemukan pada posisi ke " << (posisi+=(i+1));
   }
}

void cariNRP()
{
	cout << "Cari Nrp : "; cin >> tempNRP;
   int i = 0;
   int posisi = 0;
   while(i < 10 && mhs.nrp[i] != tempNRP){
   	i++;
   }

   if(mhs.nrp[i] != tempNRP){
   	cout << "\nMaaf data yang dicari tidak ada";
   }else{
   	cout << "\nDitemukan pada posisi ke " << (posisi+=(i+1));
   }
}

void searching()
{
    int pilihsearching;
	 do {
    	clrscr();
      cout << "Pencarian Data Mahasiwa\n";
      cout << "1. Cari Berdasarkan NRP \n";
      cout << "2. Cari Berdasarkan Nama \n";
      cout << "3. Exit\n";
      cout << "Pilihan : "; cin >> pilihsearching;
      switch(pilihsearching){
      	case 1 :
                 cariNRP();
                 break;
         case 2 :
         		  cariNama();
                 break;
      }
      getch();
    }while(pilihsearching != 3);
}

void displayDataAsStack()
{
    cout << "Data Tumpukan \n";
    for(int loop = 0; loop <= tempIndex; loop++)
		{
   		cout << "Data Tumpukan[" << loop << "]" <<mhs.nrp[loop] << "\t\t\t" << mhs.nama[loop] << "\t\t\t" << mhs.kelas[loop] << endl;
    	}
    getch();
}

void displayDataAsQueue()
{
    cout << "Data Antrian \n";
    for(int loop = 0; loop <= tempIndex; loop++)
		{
   		cout << "Data Antrian[" << loop << "]" <<mhs.nrp[loop] << "\t\t\t" << mhs.nama[loop] << "\t\t\t" << mhs.kelas[loop] << endl;
    	}
    getch();
}

isEmpty()
{
	if(mhs.index == -1) return 1; else return 0;
}

void deleteStackorQueue()
{
	if(isEmpty()==0){
   	mhs.index--;
      tempIndex--;
      cout << "Data dengan Index Terbesar dihapus";
   }else{
   	cout << "Data Kosong";
   }
}

void clearStackOrQueueData()
{
	if(isEmpty()==0){
   	mhs.index = -1;
      tempIndex = -1;
      cout << "Data Berhasil Di bersihkan";
   }else{
   	cout << "Data Kosong";
   }
}


void stackView()
{
   int pilihstack;
	 do {
    	clrscr();
      cout << "Implementasi Konsep Stack dalam Program\n";
      cout << "1. Input \n";
      cout << "2. Hapus \n";
      cout << "3. Tampil \n";
      cout << "4. Bersihkan \n";
      cout << "5. Keluar\n";
      cout << "Pilihan : "; cin >> pilihstack;
      switch(pilihstack){
      	case 1 :
                 inputMHS();
                 break;
         case 2 :
         		  deleteStackorQueue();
                 break;
         case 3 :
                 displayDataAsStack();
                 break;
         case 4 :
                 clearStackOrQueueData();
                 break;

      }
      getch();
    }while(pilihstack != 3);
}

void QueueView()
{
   int pilihque;
	 do {
    	clrscr();
      cout << "Implementasi Konsep Queue dalam Program\n";
      cout << "1. Input \n";
      cout << "2. Hapus \n";
      cout << "3. Tampil \n";
      cout << "4. Bersihkan \n";
      cout << "5. Keluar\n";
      cout << "Pilihan : "; cin >> pilihque;
      switch(pilihque){
      	case 1 :
                 inputMHS();
                 break;
         case 2 :
         		  deleteStackorQueue();
                 break;
         case 3 :
                 displayDataAsQueue();
                 break;
         case 4 :
                 clearStackOrQueueData();
                 break;

      }
      getch();
    }while(pilihque != 3);
}

void main()
{
    mhs.setIndexFirst();
    do {
		clrscr();
      cout << "MENU APLIKASI SEDERHANA\n";
		cout << "1. Pendataan Mahasiswa \n";
      cout << "2. Pengurutan Data Mahasiswa \n";
      cout << "3. Pencarian Data Mahasiswa \n";
      cout << "4. Stack Mahasiswa \n";
      cout << "5. Antrian Mahasiswa \n";
      cout << "6. Keluar\n";
      cout << "Masukan Pilihan : ";
		cin>>pilihan;
 		switch(pilihan)
		{
 			case 1:
         			inputMHS();
 						break;
 			case 2:
         			sortingData();
 						break;
 			case 3:
         			searching();
 						break;
 			case 4:
         			stackView();
 						break;
 			case 5:
						QueueView();
 						break;
 			case 6:
         			cout<<"Terimakasih, tekan enter untuk keluar";
 		}
      getch();
   } while(pilihan!=6);
}