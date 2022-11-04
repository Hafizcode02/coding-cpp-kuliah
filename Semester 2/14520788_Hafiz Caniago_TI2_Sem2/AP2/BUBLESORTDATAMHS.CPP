#include <iostream.h>
#include <conio.h>
#include <cstring.h>

int main()
{

   string nama[10], tmpnama;
   int nim[10], tmpnim;
   int nilai[10], tmpnilai;
   int i, j, k;

 	cout<<"PROGRAM PENGURUTAN DATA MHS BUBBLE SORT\n\n";
 	cout<<" Masukan jumlah Data MHS: "; cin >>k;

 	for(i=0; i<k; i++)
   {
 		cout<<"Masukan nim ke "<<(i+1)<<" : ";
 		cin>>nim[i];
 		cout<<"Masukan nama ke "<<(i+1)<<" : ";
 		cin>>nama[i];
 		cout<<"Masukan nilai ke "<<(i+1)<<" : ";
 		cin>>nilai[i];
   }

   cout<<"\n Data Awal Sebelum Diurutkan : "<< endl;
   for(i=0; i<k; i++)
   {
 			cout << nim[i] << " " << nama[i] << " " << nilai[i] << endl;
   }

   cout<<endl;
   for( i=0;i<k;i++)
   {
   	for(j=i+1;j<k;j++)
      {
      	if(nilai[i]>nilai[j])
         {
         	tmpnama=nama[i];
            nama[i]=nama[j];
            nama[j]=tmpnama;

            tmpnim=nim[i];
            nim[i]=nim[j];
            nim[j]=tmpnim;

            tmpnilai=nilai[i];
            nilai[i]=nilai[j];
            nilai[j]=tmpnilai;
         }
      }
   }

 	cout<<"\n Data setelah diurutkan : "<<endl;
 	for(i=0; i<k; i++)
 	{
   	cout << nim[i] << " " << nama[i] << " " << nilai[i] << endl;
 	}

	getch();
}
