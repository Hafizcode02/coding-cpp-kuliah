#include <iostream.h>
#include <conio.h>
int main()
{
 	int data[10];
 	int i, j, k, tmp;

 	cout<<"PROGRAM PENGURUTAN BILANGAN BUBBLE SORT\n\n";
 	cout<<" Masukan jumlah bilangan : "; cin >>k;

 	for(i=0; i<k; i++)
   {
 		cout<<"Masukan Angka ke "<<(i+1)<<" : ";
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
