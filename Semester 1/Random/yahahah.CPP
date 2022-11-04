#include <iostream.h>
#include <conio.h>
#include <stdio.h>
main()
{
	int ma[2][3];
	int mb[2][3];
	int mc[2][3];

   int i, j;

   cout << "Membaca Matriks A : " << endl;
   for(i=0; i<2; i++){
   	for(j=0; j<3; j++){
      	cout << "ma["<< i << ", "<< j << "]?";
         cin >> ma[i][j];
      }
   }


   cout << "Membaca Matriks B : " << endl;
   for(i=0; i<2; i++){
   	for(j=0; j<3; j++){
      	cout << "mb["<< i << ", "<< j << "]?";
         cin >> mb[i][j];
      }
   }

   cout << "Mencetak Matriks A : " << endl;
   for(i=0; i<2; i++){
   	for(j=0; j<3; j++){
      	cout << "\t" << ma[i][j];
      }
      cout << endl;
   }

   cout << "Mencetak Matriks B : " << endl;
   for(i=0; i<2; i++){
   	for(j=0; j<3; j++){
      	cout << "\t" << mb[i][j];
      }
      cout << endl;
   }


   for(i=0; i<2; i++){
   	for(j=0; j<3; j++){
      	mc[i][j] = ma[i][j] + mb[i][j];
      }
   }

   cout << "Penjumlahan a dan b" << endl;
   for ( int i=0; i<3; i++ ){
		for ( int j=0; j<3; j++ ){
			cout << "\t" << mc[i][j];
		}
		cout << endl;
	}

   getch();

}
