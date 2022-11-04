#include <iostream.h>
#include <conio.h>
#include <cstring.h>

int main()
{
 	string data[10];
 	int i, j, k;
   string tmp;

 	cout<<"PROGRAM PENGURUTAN HURUF BUBBLE SORT\n\n";
 	cout<<" Masukan jumlah karakter huruf : "; cin >>k;

 	for(i=0; i<k; i++)
   {
 		cout<<"Masukan nama ke "<<(i+1)<<" : ";
 		cin>>data[i];
   }

   cout<<"\n Data sebelum diurutkan : "<< endl;
   for(i=0; i<k; i++)
   {
 			cout<<data[i]<<" ";
   }

   cout<<endl;
   for( i=0;i<k;i++)
   {
   	for(j=i+1;j<k;j++)
      {
      	if(data[i]>data[j])
         {
         	tmp=data[i];
            data[i]=data[j];
            data[j]=tmp;
         }
      }
   }

 	cout<<"\n Data setelah diurutkan : "<<endl;
 	for(i=0; i<k; i++)
 	{
   	cout<<data[i]<<" ";
 	}

	getch();
}
