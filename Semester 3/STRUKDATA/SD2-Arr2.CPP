#include <iostream.h>
#include <conio.h>

main()
{
	int arr[5];

   for(int i = 0; i < 5; i++){
   	cout << "Input Ke Arr -[" << i << "] : ";
      cin >> arr[i];
   }

   cout << "============\n";

   for(int j = 0; j < 5; j++){
   	cout << arr[j] << endl;
   }

   getch();
}
