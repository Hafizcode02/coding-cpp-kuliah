#include <iostream.h>//
#include <conio.h>
int main()//Deklarasi Variable
{
 int nrp;
 char nama[50];
 char kelas[5];
 char matkul[10];
 char hobi[10];
 char tarnilai[2];

 cout<<"NRP : ";
 cin>>nrp;
 cout<<"Masukkan nama Anda : ";
 cin>>nama;
 cout<<"Kelas : ";
 cin>>kelas;
 cout<<"Mata Kuliah : ";
 cin>>matkul;
 cout<<"Hobi : ";
 cin>>hobi;
 cout<<"Target Nilai : ";
 cin>>tarnilai;
 cout<<endl;

 cout<<"NRP anda adalah : "<<nrp<<endl;
 cout<<"Nama anda adalah : "<<nama<<endl;
 cout<<"Kelas anda adakah : "<<kelas<<endl;
 cout<<"Mata Kuliah : "<<matkul<<endl;
 cout<<"Hobi anda adalah : "<<hobi<<endl;
 cout<<"Target Nilai : "<<tarnilai<<endl;
 getch();

}