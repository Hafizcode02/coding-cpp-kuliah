#include <iostream.h>
#include <conio.h>
#include <cstring.h>

int pilihan;

int i, j, k;
string realNama[100],dataNama[100], tempNama;
int realNrp[100],dataNrp[100], tempNrp;

void input();
void sortNama();
void sortNrp();
void displaySortedData();

int main()
{
	pilihan = 0;
	do{
       cout << "----------- Bubble Sort ----------- \n";
       cout << "1. Input Data \n";
       cout << "2. Sort Nama \n";
       cout << "3. Sort NRP \n";
       cout << "4. Exit \n";
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
       }
   }while(pilihan != 4);
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
      cout << endl;
    }
    cout << endl;

    cout << "NRP \t\t\t Nama \t\t\t" << endl;
    for(int loop = 0; loop < k; loop++)
    {
    	cout << realNrp[loop] << "\t\t\t" << realNama[loop] << "\t\t\t" << endl;
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
 			}
 		}
 	}

   displaySortedData();
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
 			}
 		}
 	}

   displaySortedData();
}

void displaySortedData()
{
    cout << "Data Sebelum Diurutkan \n";
    cout << "NRP \t\t\t Nama \t\t\t" << endl;
    for(int loop = 0; loop < k; loop++)
    {
    	cout << realNrp[loop] << "\t\t\t" << realNama[loop] << "\t\t\t" << endl;
    }
    cout << endl;

    cout << "Data Setelah Diurutkan \n";
    for(int loop = 0; loop < k; loop++)
    {
    	cout << dataNrp[loop] << "\t\t\t" << dataNama[loop] << "\t\t\t" << endl;
    }
}

