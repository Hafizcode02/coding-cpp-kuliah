#include <iostream.h>
#include <conio.h>
#include <cstring.h>

int pilihan;

int i, j, k;
string dataNama[100], tempNama;
int dataNrp[100], tempNrp;
int dataNilai[100], tempNilai;
string dataGrade[100], tempGrade;
string dataJK[100], tempJK;
int GradeL[4], GradeP[4];

void input();
void sortNrp();
void countJKGrade();

int main()
{
	pilihan = 0;
	do{
       cout << "----------- Bubble Sort ----------- \n";
       cout << "1. Input Data \n";
       cout << "2. Sort Data \n";
       cout << "3. Exit \n";
       cout << "----------------------------------- \n";
       cout << "Pilihan : "; cin >> pilihan;

       switch(pilihan){
       	case 1 :
         			input();
                  break;
         case 2 :
         			sortNrp();
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
    	cout << "Masukan Nama ke-" << (i+1) << " : ";
      cin >> dataNama[i];
    	cout << "Masukan Nilai ke-" << (i+1) << " : ";
      cin >> dataNilai[i];
      cout << "Masukan JK ke-" << (i+1) << " : ";
      cin >> dataJK[i];
      cout << endl;

      if(dataNilai[i] > 84){
         dataGrade[i] = "A";
      }
      else if(dataNilai[i] > 74){
         dataGrade[i] = "B";
      }
      else if(dataNilai[i] > 0){
         dataGrade[i] = "C";
      }
    }
    cout << endl;

    cout << "NRP \t\t\t Nama \t\t\t Gender \t\t\t Nilai \t\t\t Grade" << endl;
    for(int loop = 0; loop < k; loop++)
    {
    	cout << dataNrp[loop] << "\t\t\t" << dataNama[loop] << "\t\t\t" << dataJK[loop] << "\t\t\t" << dataNilai[loop] << "\t\t\t" << dataGrade[loop] << endl;
    }
    cout << endl;

    getch();
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

            tempGrade=dataGrade[i];
            dataGrade[i]=dataGrade[j];
            dataGrade[j]=tempGrade;

            tempJK=dataJK[i];
            dataJK[i]=dataJK[j];
            dataJK[j]=tempJK;
 			}
 		}
 	}

    cout << "Data Setelah Diurutkan \n";
    for(int loop = 0; loop < k; loop++)
    {
    	cout << dataNrp[loop] << "\t\t\t" << dataNama[loop] << "\t\t\t" << dataJK[loop] << "\t\t\t" << dataNilai[loop] << "\t\t\t" << dataGrade[loop] << endl;
    }

    countJKGrade();
}

void countJKGrade(){

}