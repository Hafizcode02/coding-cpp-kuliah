#include <conio.h>
#include <iostream.h>

int main()
{
 	int m, n;

	cout << "Masukan nilai m : " ; cin >> m;
   cout << "Masukan nilai n : " ; cin >> n;

   if(m == n)
		cout<<m<<" sama dengan "<<n<<endl;
   else if(m != n)
		cout<<m<<" tidak sama dengan "<<n<<endl;
 	else if(m > n)
		cout<<m<<" lebih besar dari "<<n<<endl;
 	else if(m < n)
		cout<<m<<" lebih kecil dari "<<n<<endl;

	getch();
}