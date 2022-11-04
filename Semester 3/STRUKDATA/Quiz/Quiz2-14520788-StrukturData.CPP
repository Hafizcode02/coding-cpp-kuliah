#include <conio.h>
#include <iostream.h>

main(){
	int i;

	cout << "No		Data\n";
   for(i = 1; i <= 10; i++){
      cout << i << "\t\t" << (int) (i*i) << endl;
   }

   getch();
}
