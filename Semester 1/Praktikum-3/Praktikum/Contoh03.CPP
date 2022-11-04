#include <iostream.h>
#include <conio.h>

void main()
{
	int nilai;

   cout<<"Masukkan nilai test : ";
	cin>>nilai;

	switch(nilai/10)
	{
		case 10:
		case 9:
		case 8:cout<<'A'<<endl;break;
		case 7:cout<<'B'<<endl;break;
		case 6:
		case 5:cout<<'C'<<endl;break;
		case 4:
		case 3:cout<<'D'<<endl;break;
		case 2:
		case 1:
		case 0:cout<<'E'<<endl;break;
		default:cout<<"Salah, nilai diluar jangkauan.\n";
	}
   getch();
}