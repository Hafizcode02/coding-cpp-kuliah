#include <conio.h>
#include <iostream.h>

void loopWord(int i=5){
	cout << "Logika dan algoritma itu mudah! \n";
   if(i > 1)
   	loopWord(i-1);
   else
   	getch();
}

main()
{
	loopWord();
}