#include <conio.h>
#include <iostream.h>
#include <cstring.h>

main()
{
	string c;
	int i,posisi;
	string A[20]={"DODI","DADANG","SUBUR","KAJA","LIMBO","TARIKA","MALIKA","ROGER","ASRON","GORBON"};

	cout<<"Data : ";
	for(i=0;i<10;i++)
 	{
		cout<<A[i]<<" ";
	}

	cout<<"\n\nData yang ingin dicari : ";
	cin>>c;

 	i = 0;
	posisi = 0;
	while( i < 10 && A[i] != c)
 	{
		i++;
	}

	if ( A[i] != c )
   	cout<<"\nMaaf data yang dicari tidak ada";
   else
 		cout<<"\nditemukan pada posisi ke " << (posisi+=(i+1));

   getch();
}