#include <iostream.h>
#include <conio.h>

int n;

int fibo(int n){
	if(n == 0)
   	return 0;
   else
   	return (n + fibo(n - 1));
}

main()
{
	n = 10;
   cout << fibo(n);

   getch();
}




