#include <conio.h>
#include <iostream.h>

int N;
int Factorial(int N){
 if(N <= 0)
	return 1;
 else
	return N * Factorial (N-1);
}

main(){
 N = 5;
 cout << Factorial(N);
 getch();
}