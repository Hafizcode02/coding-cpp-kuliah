#include <constrea.h>
#include <stdio.h>
#include <cstring.h>

// Currency : 22 Oktober 2020, 09:28

main()
{
	int selectedCurrency, numberOfTrade;
   float valueCurrency, calculateResult;

   cout << "Penukaran Uang Valas\n";
   cout << "1. Mata Uang Dollar USA\n";
   cout << "2. Mata Uang Dollar Australia\n";
   cout << "3. Mata Uang Dollar Singapore\n";
   cout << "4. Mata Uang Yen Jepang\n";
   cout << "5. Mata Uang Euro Eropa\n";
   cout << "6. Mata Uang Ringgit Malaysia\n\n";

   cout << "Jenis Mata Uang? (1-6) : ";
   cin >> selectedCurrency;

   switch(selectedCurrency)
   {
   	case 1 :
      		valueCurrency = 14731.10;
            break;
      case 2 :
      		valueCurrency = 10456.25;
            break;
      case 3 :
      		valueCurrency = 10854.43;
            break;                       
      case 4 :
      		valueCurrency = 140.65;
            break;
      case 5 :
      		valueCurrency = 17435.83;
            break;
      case 6 :
      		valueCurrency = 3553.56;
            break;
      default :
      		cout << "Mata Uang Tidak tersedia" ;
            break;
   }

   if(selectedCurrency <= 6)
   {
   	cout << "Jumlah Tukar? (max = 10) : ";
   	cin >> numberOfTrade;

      if(numberOfTrade <= 10)
      {
      	calculateResult = valueCurrency * numberOfTrade;
   		cout << "Harga Tukar = Rp. " << calculateResult;
      }else {
      	cout << "Maaf Maksimal tukar hanya 10";
      }
   }

   getch();
}