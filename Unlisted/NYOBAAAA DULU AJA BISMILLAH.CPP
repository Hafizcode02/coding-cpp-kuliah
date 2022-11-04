#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <cstring.h>
#include <iomanip.h>
#include <stdlib.h>
#define n 10
void garis1()
{
	cout<<"|==================================================================|\n";
}
void judul1()
{
	cout<<"|                           SELAMAT DATANG                         |\n";
}
void judul2()
{
   cout<<"|                                  DI                              |\n";
}
void judul3()
{
	cout<<"|                           APLIKASI GABUNGAN 		                  |\n";
}
void garis2()
{
	cout<<"|------------------------------------------------------------------|\n";
}
void classobject();
void stack();
void antrian();
void csorting();
void searching();


void main()
{
	int pil;

   do{

   	clrscr();
		garis1();
      judul1();
      judul2();
      judul3();
      garis1();
      cout<<"|1. TAMPILAN MENU CLASS OBJECT                        |\n";
      cout<<"|2. TAMPILAN MENU STACK               					 |\n";
      cout<<"|3. TAMPILAN MENU ANTRIAN						             |\n";
      cout<<"|4. TAMPILAN MENU SORTING						             |\n";
      cout<<"|5. TAMPILAN MENU SEARCHING					             |\n";
      cout<<"|6. KELUAR                                            |\n";
      garis2();
      cout<<endl<<endl;
      cout<<"Masukan Pilihan: ";cin>>pil;

      switch(pil)
      {
      	case 1: cout<<"1. TAMPILAN MENU CLASS OBJECT \n";
         			classobject();break;
         case 2: cout<<"2. TAMPILAN MENU STACK \n";
         			stack();break;
         case 3: cout<<"3. TAMPILAN MENU ANTRIAN \n";
         			antrian();break;
         case 4: cout<<"4. TAMPILAN MENU SORTING \n";
         			csorting();break;
         case 5: cout<<"5. TAMPILAN MENU SEARCHING \n";
         			searching();break;
         case 6:cout<<"6. TERIMA KASIH TELAH MENGGUNAKAN APLIKASI INI :) \n";
      }
      getch();
   }
   while(pil !=6);
   getch();
}


			//TAMPILAN MENU CLASS OBJECT
	void  classobject();


    class karyawan
    {
		public:
		char nama[35];
		char jabatan[25];
		int nik;
	};

	void mainkaryawan()
	{
		clrscr();

		karyawan data;

		strcpy(data.nama, "DEWI INTAN PRATIWI");
		strcpy(data.jabatan, "KEPALA DIREKTUR ");
		data.nik = 12098763;


		cout << data.nama << endl;
		cout << data.jabatan << endl;
		cout << data.nik << endl;

   	strcpy(data.nama, "WAWAT");
		strcpy(data.jabatan, " DIREKTUR ");
		data.nik = 1202123;
   	cout << data.nama << endl;
		cout << data.jabatan << endl;
		cout << data.nik << endl;

   	getch();
      clrscr();
	}

      //TAMPILAN MENU STACK
      void stack()
      {
       	int f, r;
       	typedef struct
			{
   			int kdbrg;
   			char nmbrg[50],hrgbrg[50];
			}barang;
		void awal()
		{
   		f=0;
   		r=-1;
		}
		void main()
		{
   		barang data[n];
   		int pilih,tail;
   		tail=0;
   		awal();
   		atas:
   			cout<<"DATA BARANG "<<endl;
   			do{
   				cout<<"1. INSERT DATA"<<endl;
   				cout<<"2. DELETE DATA"<<endl;
   				cout<<"3. VIEW DATA"<<endl;
   				cout<<"4. EXIT"<<endl<<endl;
   				cout<<"MASUKKAN PILIHAN ANDA : ";
   				cin>>pilih;
   				switch(pilih)
   				{
      				case 1 :
         			if(r<n-1)
         			{
                  	tail++;
            		  	r++;
            			cout<<endl<<"MASUKKAN KODE BARANG : ";
            			cin>>data[r].kdbrg;
            			cout<<"MASUKKAN NAMA BARANG : ";
            			gets(data[r].nmbrg);
            			cout<<"MASUKKAN HARGA BARANG : ";
            			gets(data[r].hrgbrg);

            			getch();
            			clrscr();
         			}
         			else
         			{
                      cout<<"ANTRIAN PENUH"<<endl<<endl;
                      getch();
                      clrscr();
          			}
         			break;
         		   case 2 :
            		if(f<r+1)
          			{
               		cout<<endl<<"DATA YANG DI HAPUS"<<endl<<endl;
                		cout<<"KODE BARANG   : "<<data[r].kdbrg<<endl;
                		cout<<"NAMA BARANG  : "<<data[r].nmbrg<<endl;
                		cout<<"HARGA BARANG : "<<data[r].hrgbrg<<endl;

                		f++;
                		if(f==r+1 && r==n-1)
                		{
                   		awal();
                		}
                		getch();
                		clrscr();
          			}
          			else
          			{
             			cout<<"ANTRIAN KOSONG"<<endl<<endl;
            			getch();
            			clrscr();
          			}
              		 break;

         			case 3 :
           			if (tail>0)
            		{
                  	cout<<"KODE BARANG \t\t NAMA BARANG \t\t HARGA BARANG \n";
             			for (int x=f; x<tail; x++)
             			{
             				cout<<data[x].kdbrg<<"\t "<<data[x].nmbrg<<"\t\t "<<data[x].hrgbrg<<"\n ";
             			}
                  	getch();
             			clrscr();
            		}
            		else
            		{
             			cout<<"KODE BARANG \t\t NAMA BARANG \t\t HARGA BARANG \n\n ";
             			getch();
             			clrscr();
            		}
         			break;
         			case 4 :
            			cout<<"TERIMA KASIH";
            			exit;
            			break;
         			default :
            			cout<<endl<<"MASUKKAN ANGKA ANTARA 1-4"<<endl;
            			getch();
            			clrscr();
            			goto atas;
   					}
   					}
  						 while(pilih!=4);
                   getch();
                   clrscr();
                }


                	//     TAMPILAN MENNU ANTRIAN
                  void antrian()
                  {
                   int f, r;
                   typedef struct
							{
   							int nrp;
   							char nama[50],kelas[50];
							}mahasiswa;
						void awal()
                  {
   						f=0;
   						r=-1;
						}
						void main()
                  {
   						mahasiswa data[n];
   						int pilih,tail;
   						tail=0;
   						awal();
   						atas:
   						cout<<"DATA MAHASISWA"<<endl;
   						do{
   								cout<<"1. INSERT DATA"<<endl;
   								cout<<"2. DELETE DATA"<<endl;
   								cout<<"3. VIEW DATA"<<endl;
                           cout<<"4. EXIT"<<endl<<endl;
   								cout<<"MASUKKAN PILIHAN ANDA : ";
   								cin>>pilih;
   								switch(pilih)
   								{
                     			case 1 :
         							if(r<n-1)
         							{
            							tail++;
            							r++;
                                 cout<<endl<<"MASUKKAN NRP : ";
            							cin>>data[r].nrp;
            							cout<<"MASUKKAN NAMA : ";
            							gets(data[r].nama);
                                 cout<<"MASUKKAN KELAS : ";
            							gets(data[r].kelas);

            							getch();
            							clrscr();
                              }
         							else
                              {
                      				cout<<"ANTRIAN PENUH"<<endl<<endl;
                      				getch();
                      				clrscr();
                              }
         							break;
          							case 2 :
                           	if(f<r+1)
          							{
               						cout<<endl<<"DATA YANG DI HAPUS"<<endl<<endl;
                						cout<<"NRP   : "<<data[f].nrp<<endl;
                						cout<<"NAMA  : "<<data[f].nama<<endl;
                						cout<<"KELAS : "<<data[f].kelas<<endl;

                						f++;
                                 if(f==r+1 && r==n-1)
                						{
                   						awal();
                						}
                						getch();
                						clrscr();
          							}
         							 else
          							{
             							cout<<"ANTRIAN KOSONG"<<endl<<endl;
            							getch();
            							clrscr();
          							}
               					break;
         							case 3 :
                              if (tail>0)
            						{
             							cout<<"NRP \t\t NAMA \t\t KELAS \n";
             							for (int x=f; x<tail; x++)
             						{
             							cout<<data[x].nrp<<"\t "<<data[x].nama<<"\t\t "<<data[x].kelas<<"\n ";
             						}
            			 				getch();
             							clrscr();
            						}
            						else
            						{
                              	cout<<"NRP \t NAMA \t KELAS \n\n ";
            		 					getch();
             							clrscr();
            						}
                              break;
         							case 4 :
            						cout<<"TERIMA KASIH";
            						exit;
           	 						break;
         							default :
                              cout<<endl<<"MASUKKAN ANGKA ANTARA 1-4"<<endl;
            						getch();
            						clrscr();
            						goto atas;
   									}
   								}
   								while(pilih!=4);
   								getch();
                           clrscr();
									}



              //TAMPILAN MENU  ANTRIAN
              void antrian()
              {
                int f, r;
					typedef struct
              {
   					int nrp;
   					char nama[50],kelas[50];
					}mahasiswa;
					void awal()
					{
   					f=0;
                  r=-1;
					}
					void main()
					{
   					mahasiswa data[n];
   					int pilih,tail;
   					tail=0;
   					awal();
                  atas:
   					cout<<"DATA MAHASISWA"<<endl;
   					do{
   						cout<<"1. INSERT DATA"<<endl;
                     cout<<"2. DELETE DATA"<<endl;
   						cout<<"3. VIEW DATA"<<endl;
   						cout<<"4. EXIT"<<endl<<endl;
   						cout<<"MASUKKAN PILIHAN ANDA : ";
   						cin>>pilih;
   						switch(pilih)
   						{
      						case 1 :
                        if(r<n-1)
         					{
            					tail++;
            					r++;
            					cout<<endl<<"MASUKKAN NRP : ";
                           cin>>data[r].nrp;
            					cout<<"MASUKKAN NAMA : ";
            					gets(data[r].nama);
            					cout<<"MASUKKAN KELAS : ";
                           gets(data[r].kelas);

            					getch();
            					clrscr();
         					}
         					else
         					{
                      		cout<<"ANTRIAN PENUH"<<endl<<endl;
                           getch();
                      		clrscr();
          					}
         					break;
          					case 2 :
            				if(f<r+1)
          					{
               				cout<<endl<<"DATA YANG DI HAPUS"<<endl<<endl;
                				cout<<"NRP   : "<<data[f].nrp<<endl;
                				cout<<"NAMA  : "<<data[f].nama<<endl;
                				cout<<"KELAS : "<<data[f].kelas<<endl;

                				f++;
                				if(f==r+1 && r==n-1)
                           {
                   				awal();
                				}
                				getch();
                				clrscr();
          					}
         					 else
                         {
             					cout<<"ANTRIAN KOSONG"<<endl<<endl;
            					getch();
            					clrscr();
                         }
               			break;
         					case 3 :
           					if (tail>0)
                        {
             					cout<<"NRP \t\t NAMA \t\t KELAS \n";
             					for (int x=f; x<tail; x++)
                           {
             						cout<<data[x].nrp<<"\t "<<data[x].nama<<"\t\t "<<data[x].kelas<<"\n ";
                           }
             					getch();
             					clrscr();
            				}
            				else
            				{
             					cout<<"NRP \t NAMA \t KELAS \n\n ";
                           getch();
             					clrscr();
            				}
         					break;
         					case 4 :
            				cout<<"TERIMA KASIH";
            				exit;
            				break;
         					default :
            					cout<<endl<<"MASUKKAN ANGKA ANTARA 1-4"<<endl;
            					getch();
                           clrscr();
            					goto atas;
   							}
   							}
   							while(pilih!=4);
   							getch();
                        clrscr();
							}




         //TAMPILAN MENU SORTNG
         void sorting()
         {
           int main()
				{
     				string nama[10], tmp;
     				int i, j, k;

     				cout<<"PROGRAM PENGURUTAN NAMA BUBBLE SORT\n\n";
					cout<<" Masukan Jumlah Nama  : "; cin >>k;

     				for(i=0; i<k; i++)
     				{
          			cout<<"Masukan Nama ke "<<(i+1)<<" : ";
          			cin>>nama[i];
      			}

     				cout<<"\n Data Nama sebelum diurutkan : "<< endl;
     				for(i=0; i<k; i++)
					{
         			cout<<nama[i]<<" ";
      			}
     				cout<<endl;

    				for( i=0;i<k;i++)
					{
						for(j=i+1;j<k;j++)
         			{
              			if(nama[i]>nama[j])
             			{
                 				tmp=nama[i];
                 				nama[i]=nama[j];
                 				nama[j]=tmp;
             			}
         			}
     				}

      			cout<<"\n Data Nama setelah diurutkan  : "<<endl;
     				for(i=0; i<k; i++)
     				{
      				{
         				cout<<nama[i]<<" ";
         			}
     				}

					getch();
               clrscr();
               }



            //TAMPILAN MENU SEARCHING
            void searching()
            {
               int main()
					{
     					string nama[10], tmp;
     					int i, j, k;

     			cout<<"PROGRAM PENGURUTAN NAMA BINARY SEARCH\n\n";
            cout<<" Masukan Jumlah Nama  : "; cin >>k;

     			for(i=0; i<k; i++)
     			{
          		cout<<"Masukan Nama ke "<<(i+1)<<" : ";
          		cin>>nama[i];
           	}

     			cout<<"\n Data Nama sebelum diurutkan : "<< endl;
     			for(i=0; i<k; i++)
				{
            	cout<<nama[i]<<" ";
      		}
     			cout<<endl;

    			for( i=0;i<k;i++)
				{
					for(j=i+1;j<k;j++)
         			{
              			if(nama[i]>nama[j])
             			{
                 				tmp=nama[i];
                 				nama[i]=nama[j];
                 				nama[j]=tmp;
             			}
         			}
     			}

      		cout<<"\n Data Nama setelah diurutkan  : "<<endl;
     			for(i=0; i<k; i++)
     			{
      			{
         				cout<<nama[i]<<" ";
               }
     			}

			getch();
         clrscr();
         }
































































































































