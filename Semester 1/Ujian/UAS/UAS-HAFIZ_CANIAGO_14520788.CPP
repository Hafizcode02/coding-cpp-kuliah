   #include <stdio.h>
   #include <constrea.h>
   #include <cstring.h>

   void dataStructBarang();
   void matriksKali();
   void minValue();
   void garis();

   int pilihan;

   struct pembayaran {
   	string kode;
   	string nama;
   	int jumlah;
      int harga;
      int ttlharga;
   };

   main()
   {
      do {
      clrscr();
      cout << ">>>>>>>>>> Menu Program Modular <<<<<<<<<< \n";
      cout << "1. array pengolahan data barang \n";
      cout << "2. perkalian matriks \n";
      cout << "3. menentukan nilai terkecil \n";
      cout << "4. (exit) \n";
      garis();
      cout << "Pilihan Proses : "; cin >> pilihan;

      switch(pilihan)
      {
         case 1 :
                  dataStructBarang();
                  break;
         case 2 :
                  matriksKali();
                  break;
         case 3 :
                  minValue();
                  break;
         case 4 :
                  return 0;
         default :
                  cout << "List tidak ditemukan";
                  getch();
                  break;
      }
      }while(pilihan < 5);
   }

   void garis()
   {
      for(int i = 0; i<43; i++)
      {
         cout << "=";
      }
      cout << endl;
   }

   void dataStructBarang(){
   	 clrscr();
   	 pembayaran dsb[100];
       int total, bayar;
       int countTransact = 0;
       char touch = 'Y';

       string kode[5] = {"AT01","AT02","AT03","AT04","AT05"};
       string nama[5] = {"Pulpen Standart","Pensil Faber","Penghapus Joyko","Penggaris 30cm","Buku Gambar"};
       int harga[5] = {2000, 1500, 1000, 3000, 2500};

       cout << "=================================================================================\n";
       cout << "\t\t\t\t TOKO HAGO (c)\n";
       cout << "=================================================================================\n";
       cout << "Kode Barang		Nama Barang				Harga Barang\n";
       for(int i = 0; i <5; i++)
       {
       	cout << kode[i] << "\t\t\t" << nama[i] << "\t\t\t\t" << "Rp." << harga[i];
         cout << endl;
       }
       cout << "=================================================================================\n";

       do{
       	main :
       	cout << "Masukan Kode Barang : "; cin >> dsb[countTransact].kode;
         for(int i = 0; i < 5; i++){
         	if(kode[i] == dsb[countTransact].kode)
            {
               dsb[countTransact].nama = nama[i];
               dsb[countTransact].harga = harga[i];
               break;
            }
         }

         if(dsb[countTransact].nama == ""){
         	garis();
         	cout << "Maaf Kode Barang tidak ditemukan \n";
            garis();
            cout << endl;
         	goto main;
         }
         
         cout << "Masukan Jumlah Barang : "; cin >> dsb[countTransact].jumlah;
         dsb[countTransact].ttlharga = dsb[countTransact].jumlah * dsb[countTransact].harga;
         garis();
         cout << "Ada yang lain [Y/T] ? "; cin >> touch;
         garis();
         countTransact++;
         cout << endl;

       }while(touch=='Y'||touch=='y');

       clrscr();
       total = 0;
      
       cout << "=================================================================================\n";
       cout << "\t\t\t\t NOTA TOKO HAGO (c)\n";
       cout << "=================================================================================\n";
       cout << "Nama Barang		Jumlah		Harga		Subtotal\n";
       for(int i = 0; i < countTransact; i++){
       	cout << dsb[i].nama << "\t\t" << dsb[i].jumlah << "\t\t" << dsb[i].harga << "\t\t" << dsb[i].ttlharga;
         total += dsb[i].ttlharga;
         cout << endl;
       }

       cout << "=================================================================================\n";
       cout << "TOTAL		: Rp. " << total;
       cout << endl;
       cout << "BAYAR		: Rp. "; cin >> bayar;
       cout << endl;
       cout << "Kembali		: Rp. " << (bayar - total);
       cout << endl;
       cout << "=================================================================================\n";

       getch();
   }

   void matriksKali()
   {
      int ma[2][3];
      int mb[3][3];
      int mc[2][3];
      int i, j;

      cout << "Input Matriks A : \n";
      for ( i=0; i<2; i++ )
      {
         for ( j=0; j<3; j++ )
         {
            cout << "ma["<<i<<", "<<j<<"]? ";
            cin >> ma[i][j];
         }
      }
      cout <<endl<<endl;

      cout << "Input Matriks B : \n";
      for ( i=0; i<3; i++ )
      {
         for ( j=0; j<3; j++ )
         {
            cout << "mb["<<i<<", "<<j<<"]? ";
            cin >> mb[i][j];
         }
      }
      cout <<endl<<endl;


      cout << "Matriks A : \n";
      for ( i=0; i<2; i++ )
      {
         for ( j=0; j<3; j++ )
         {
            cout << "\t" << ma[i][j];
         }
         cout << endl;
      }
      cout <<endl<<endl;

      cout << "Matriks B : \n";
      for ( i=0; i<3; i++ )
      {
         for ( j=0; j<3; j++ )
         {
            cout << "\t" << mb[i][j];
         }
         cout << endl;
      }

      // perhitungan
      for ( i=0; i<2; i++ )
      {
         for ( j=0; j<3; j++ )
         {
            mc[i][j] = 0;
            for ( int k=0; k<3; k++){
               mc[i][j] = mc[i][j]+ma[i][k] * mb[k][j];
            }
         }
      }
      cout <<endl<<endl;

      cout << "Hasil Perkalian Matriks A dan B: \n";
      for ( int i=0; i<2; i++ )
      {
         for ( int j=0; j<3; j++ )
         {
            cout << "\t" << mc[i][j];
         }
         cout << endl;
      }

      getch();
   }

   void minValue()
   {
       int arrayVal[4];
       int minVal;

       for(int i=0; i < 5; i++){
         cout << "Masukan angka array[" << i <<"]: ";
         cin >> arrayVal[i];
       }

       minVal = arrayVal[0];

       for(int j=0; j < 5; j++)
       {
         if(arrayVal[j] < minVal)
         {
            minVal = arrayVal[j];
         }
       }

       cout << "Angka Terkecil dari angka diatas adalah : " << minVal ;
       getch();
   }


