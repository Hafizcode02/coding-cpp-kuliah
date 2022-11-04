#include <constrea.h>

int main()
{
	int a = 5;
   int *aPtr = &a;

   cout << "a :" <<a<< endl;
   cout << "&a :" <<&a<< endl;
   cout << "*a :" <<aPtr<< endl;

   getch();
}