#include <constrea.h>

void pangkat(int a)
{
	cout << "Pangkat dari " << a << " : " << (a * a) << endl;
}

int pangkatFungsi(int b)
{
	return b * b;
}

int main()
{
	int a,b;

   cout << "Masukan Angka a : "; cin >> a;
   pangkat(a);

   cout << "Pangkat dari b : ";
   cin >> b;
   cout << pangkatFungsi(b);

   getch();
}          