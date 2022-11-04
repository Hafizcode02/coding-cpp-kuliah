#include <iostream.h>
#include <conio.h>

void main()
{
	int kode;

   cout<<"Daftar nama-nama hari: "<<endl;
	cout<<"1. Senin \n2) Selasa \n3) Rabu \n4) Kamis"<<endl;
	cout<<"5) Jumat \n6) Sabtu \n7) Minggu"<<endl;

	cout<<"kode hari < 1,2,3,4,5,6,7> ? ";
	cin>>kode;

   switch(kode)
   {
    	case 1:
      		cout<<"kode (1) Hari Senin"<<endl;
            break;
      case 2:
            cout<<"kode (2) Hari Selasa"<<endl;
            break;
      case 3:
            cout<<"kode (3) Hari Rabu"<<endl;
            break;
      case 4:
            cout<<"kode (4) Hari Kamis"<<endl;
            break;
      case 5:
            cout<<"kode (5) Hari Jumat"<<endl;
            break;
   	case 6:
            cout<<"kode (6) Hari Sabtu"<<endl;
            break;
		case 7:
            cout<<"kode (7) Hari Minggu"<<endl;
            break;
		default:
            cout<<"Anda memasukan kode salah.\n";
            break;
   }

   getch();
}

