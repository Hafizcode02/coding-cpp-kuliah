#include <iostream.h>
#include <conio.h>
#include <cstring.h>

int pilihan;

int i, j, k;
string realNama[100],dataNama[100], tempNama;
int realNrp[100],dataNrp[100], tempNrp;
int realNilai[100],dataNilai[100], tempNilai;

void input();
void sortNama();
void sortNilai();
void sortNrp();

int main()
{
	pilihan = 0;
	do{
       cout << "----------- Bubble Sort ----------- \n";
       cout << "1. Input Data \n";
       cout << "2. Sort Nama \n";
       cout << "3. Sort NRP \n";
       cout << "4. Sort Nilai \n";
       cout << "5. Exit \n";
       cout << "----------------------------------- \n";
       cout << "Pilihan : "; cin >> pilihan;

       switch(pilihan){
       	case 1 :
         			input();
                  break;
         case 2 :
         			sortNama();
                  break;
         case 3 :
         			sortNrp();
                  break;
         case 4 :
         			sortNilai();
                  break;
         default :
         			break;
       }

   }while(i < 5);
}

void input()
{
    cout << "Masukan Jumlah Data : "; cin >> k;

    for(i = 0; i < k ; i++){
    	cout << "Masukan NRP ke-" << (i+1) << " : ";
      cin >> dataNrp[i];
      realNrp[i] = dataNrp[i];
    	cout << "Masukan Nama ke-" << (i+1) << " : ";
      cin >> dataNama[i];
      realNama[i] = dataNama[i];
    	cout << "Masukan Nilai ke-" << (i+1) << " : ";
      cin >> dataNilai[i];
      realNilai[i] = dataNilai[i];
      cout << endl;
    }
    cout << endl;

    cout << "NRP \t\t\t Nama \t\t\t Nilai \t\t\t" << endl;
    for(int loop = 0; loop < k; loop++)
    {
    	cout << realNrp[loop] << "\t\t\t" << realNama[loop] << "\t\t\t" << realNilai[loop] << "\t\t\t" << endl;
    }
    cout << endl;

    getch();
}

void sortNama()
{
	for( i=0;i<k;i++)
	{
 		for(j=i+1;j<k;j++)
 		{
 			if(dataNama[i]>dataNama[j])
 			{
 				tempNama=dataNama[i];
 				dataNama[i]=dataNama[j];
 				dataNama[j]=tempNama;

            tempNrp=dataNrp[i];
            dataNrp[i]=dataNrp[j];
            dataNrp[j]=tempNrp;

            tempNilai=dataNilai[i];
            dataNilai[i]=dataNilai[j];
            dataNilai[j]=tempNilai;
 			}
 		}
 	}

    cout << "Data Sebelum Diurutkan \n";
    cout << "NRP \t\t\t Nama \t\t\t Nilai \t\t\t" << endl;
    for(int loop = 0; loop < k; loop++)
    {
    	cout << realNrp[loop] << "\t\t\t" << realNama[loop] << "\t\t\t" << realNilai[loop] << "\t\t\t" << endl;
    }
    cout << endl;

    cout << "Data Setelah Diurutkan \n";
    for(int loop = 0; loop < k; loop++)
    {
    	cout << dataNrp[loop] << "\t\t\t" << dataNama[loop] << "\t\t\t" << dataNilai[loop] << "\t\t\t" << endl;
    }
}

void sortNilai()
{
	for( i=0;i<k;i++)
	{
 		for(j=i+1;j<k;j++)
 		{
 			if(dataNilai[i]>dataNilai[j])
 			{
 				tempNama=dataNama[i];
 				dataNama[i]=dataNama[j];
 				dataNama[j]=tempNama;

            tempNrp=dataNrp[i];
            dataNrp[i]=dataNrp[j];
            dataNrp[j]=tempNrp;

            tempNilai=dataNilai[i];
            dataNilai[i]=dataNilai[j];
            dataNilai[j]=tempNilai;
 			}
 		}
 	}

    cout << "Data Sebelum Diurutkan \n";
    cout << "NRP \t\t\t Nama \t\t\t Nilai \t\t\t" << endl;
    for(int loop = 0; loop < k; loop++)
    {
    	cout << realNrp[loop] << "\t\t\t" << realNama[loop] << "\t\t\t" << realNilai[loop] << "\t\t\t" << endl;
    }
    cout << endl;

    cout << "Data Setelah Diurutkan \n";
    for(int loop = 0; loop < k; loop++)
    {
    	cout << dataNrp[loop] << "\t\t\t" << dataNama[loop] << "\t\t\t" << dataNilai[loop] << "\t\t\t" << endl;
    }
}

void sortNrp()
{
	for( i=0;i<k;i++)
	{
 		for(j=i+1;j<k;j++)
 		{
 			if(dataNrp[i]>dataNrp[j])
 			{
 				tempNama=dataNama[i];
 				dataNama[i]=dataNama[j];
 				dataNama[j]=tempNama;

            tempNrp=dataNrp[i];
            dataNrp[i]=dataNrp[j];
            dataNrp[j]=tempNrp;

            tempNilai=dataNilai[i];
            dataNilai[i]=dataNilai[j];
            dataNilai[j]=tempNilai;
 			}
 		}
 	}

    cout << "Data Sebelum Diurutkan \n";
    cout << "NRP \t\t\t Nama \t\t\t Nilai \t\t\t" << endl;
    for(int loop = 0; loop < k; loop++)
    {
    	cout << realNrp[loop] << "\t\t\t" << realNama[loop] << "\t\t\t" << realNilai[loop] << "\t\t\t" << endl;
    }
    cout << endl;

    cout << "Data Setelah Diurutkan \n";
    for(int loop = 0; loop < k; loop++)
    {
    	cout << dataNrp[loop] << "\t\t\t" << dataNama[loop] << "\t\t\t" << dataNilai[loop] << "\t\t\t" << endl;
    }
}

