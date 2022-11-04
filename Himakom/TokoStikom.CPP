#include <constrea.h>
#include <stdio.h>
#include <cstring.h>

main()
{
	int pil, hargaMakanan[3], pil2, jmlMakanan[3], jmlHargaMakanan[3], totalHargaMkn;
   string namaMakanan[3], namaMinuman[3], kodeMakanan[3], kodeMinuman[3];

   totalHargaMkn = 0;

   cout << "==========================================" << endl;
   cout << "                Warung Stikom             " << endl;
   cout << "------------------------------------------" << endl;
   cout << "| Kode | Pilihan 				  		        |" << endl;
   cout << "------------------------------------------" << endl;
   cout << "| 1    | Makanan 				  		        |" << endl;
   cout << "| 2    | Minuman 				  		        |" << endl;
   cout << "==========================================" << endl;
   cout << "Masukan Pilihan : "; cin >> pil;

   switch(pil)
   {
    	case 1 :
   			cout << "==========================================" << endl;
   			cout << "                Warung Stikom             " << endl;
   			cout << "------------------------------------------" << endl;
   			cout << "| Kode | Nama 				  		|  Harga   |" << endl;
   			cout << "------------------------------------------" << endl;
   			cout << "| NG   | Nasi Goreng          |  15.000  |" << endl;
   			cout << "| MG   | Mie Goreng           |   7.000  |" << endl;
   			cout << "| NK   | Nasi Kuning          |   5.000  |" << endl;
   			cout << "------------------------------------------" << endl;
            cout << "Berapa menu yang ingin dipilih : ";
            cin >> pil2;

            if(!pil2 > 3 || !pil2 < 1){
            	for (int i = 0; i < pil2; i++){
               	cout << "Masukan kode makanan ke-" << (i+1) << " : "; cin >>kodeMakanan[i];
                  if(kodeMakanan[i] == "NG")
                  {
                  	namaMakanan[0] = "Nasi Goreng";
                     hargaMakanan[0] = 15000;
                     cout << "Berapa yang ingin dibeli : "; cin >> jmlMakanan[0];
                  }else if(kodeMakanan[i] == "MG")
                  {
                  	namaMakanan[1] = "Mie Goreng";
                     hargaMakanan[1] = 7000;
                     cout << "Berapa yang ingin dibeli : "; cin >> jmlMakanan[1];
                  }else if(kodeMakanan[i] == "NK")
                  {
                  	namaMakanan[2] = "Nasi Kuning";
                     hargaMakanan[2] = 5000;
                     cout << "Berapa yang ingin dibeli : "; cin >> jmlMakanan[2];
                  }
            	}

            cout << "==========================================" << endl;
   			cout << "              Struk Pembayaran            " << endl;
   			cout << "------------------------------------------" << endl;
            for(int i = 0; i < 3; i++){
            	if(namaMakanan[i] != ""){
               	jmlHargaMakanan[i] = hargaMakanan[i] * jmlMakanan[i];
               	cout << namaMakanan[i] << "  " << hargaMakanan[i] << " x  [" << jmlMakanan[i] << "]  =" << jmlHargaMakanan[i] << endl;;
                  totalHargaMkn += jmlHargaMakanan[i];
               }
            }
            cout << "Total harga makanan semua : " << totalHargaMkn;

            }else{
            	cout << "Mohon Masukan dengan benar!" << endl;
            }

            break;
   }

   getch();

}
