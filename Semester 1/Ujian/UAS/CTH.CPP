#include <iostream.h>
#include <conio.h>
#include <stdio.h>


void garis()
{
for (int i=0;i<45;i++)
cout<<"=";
cout<<endl;
}


void main(){
struct pembayaran {char nama[20];
                     int brg, jml;
}nota[100];
int bayar, kembali;
int jmli, total=0;
int fu=0;
int i=1;
char you='Y';

 cout<<"==============================================================\n";
 cout<<"                  TOKO SOFIE COM (c)\n";
 cout<<"                Jl. Ahmad Dahlan No: 94 Pati                         \n";
 cout<<"===============================================================\n";

 do{
 cout<<" Barang Ke :"<<i<<endl;
 cout<<"\tMasukkan Nama Barang  : ";gets(nota[fu].nama);
 cout<<"\tMasukkan Harga Barang : ";cin>>nota[fu].brg;
 cout<<"\tMasukkan Jumlah Barang: ";cin>>nota[fu].jml;
 garis();
 cout<<"Ada Yang Lain [Y/T]   : ";cin>>you;
 garis();
 fu++;
 cout<<endl;
 }

 while(you=='y'||you=='Y');




 cout<<endl;
 cout<<"===============================================================\n";
 cout<<"                          NOTA PEMBELIAN\n";
 cout<<"===============================================================\n";
 cout<<"nama              jumlah           harga           subtotal       \n";
 cout<<"===============================================================\n";
 for (int i=0; i<fu; i++){
  jmli=nota[i].brg * nota[i].jml;
 total= total + jmli;
 cout<<nota[i].nama<<"\t\t\t"<<nota[i].jml<<"\t\t"<<nota[i].brg<<"\t\t"<<jmli;
 cout<<endl;
 }
 cout<<"---------------------------------------------------------------\n";
 cout<<"TOTAL                                                  : "<<total;
 cout<<endl;
 cout<<endl;
 cout<<"Uang bayar   : ";cin>>bayar;
 cout<<endl;
 cout<<"---------------------------------------------------------------\n";

 cout<<endl;
 cout<<endl;
 kembali=bayar-total;
 cout<<"Kembalian                                              : "<<kembali;

 clrscr();
  cout<<"                          NOTA PEMBELIAN\n";
  cout<<"==============================================================\n";
 cout<<"nama                jumlah           harga           subtotal  \n";
 cout<<"===============================================================\n";
 for (int i=0; i<fu; i++){
  jmli=nota[i].brg * nota[i].jml;
 cout<<nota[i].nama<<"\t\t\t"<<nota[i].jml<<"\t\t"<<nota[i].brg<<"\t\t"<<jmli;
 cout<<endl;
 }
 cout<<"---------------------------------------------------------------\n";
 cout<<"TOTAL                                                  : "<<total;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 cout<<"---------------------------------------------------------------\n";
 cout<<"Bayar                                      : "<<bayar;
 cout<<endl;
 cout<<endl;

 cout<<"Kembalian                                              : "<<kembali;
 cout<<endl;
 cout<<"                         TERIMA KASIH    ";
 cout<<"                        Maaf ... barang yang sudah di beli ";
 cout<<"                        Tidak dapat ditukar/ dikembalikan! ";
 cout<<endl;
 cout<<"===============================================================\n";
 cout<<endl;
 cout<<"SELAMAT BERKUNJUNG KEMBALI";
 getch();
 }
