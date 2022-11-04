#include <constrea.h>
#include <stdio.h>
#include <cstring.h>

main()
{
  int angka;
  string kalimat;

  cout << "Masukan Angka (1 - 10) : ";
  cin >> angka;

  if(angka <= 10)
  {
  		switch(angka)
  		{
      	case 1 : kalimat = "Satu"; break;
      	case 2 : kalimat = "Dua"; break;
      	case 3 : kalimat = "Tiga"; break;
      	case 4 : kalimat = "Empat"; break;
  			case 5 : kalimat = "Lima"; break;
  			case 6 : kalimat = "Enam"; break;
  			case 7 : kalimat = "Tujuh"; break;
  			case 8 : kalimat = "Delapan"; break;
  			case 9 : kalimat = "Sembilan"; break;
  			case 10 : kalimat = "Sepuluh"; break;
  		}

      cout << angka << " adalah angka " << kalimat << endl;
  }else {
   	cout << "angka maksimal 10";
  }

  getch();
}
