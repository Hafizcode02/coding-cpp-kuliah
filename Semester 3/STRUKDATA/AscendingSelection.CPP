#include <iostream.h>
#include <conio.h>

int data[10];
int n;

void tukar(int a, int b){
	int t;
   t = data[b];
   data[b] = data[a];
   data[a] = t;
}

void main(){
	int pos, i, j;

   cout << "Inputkan banyak data : ";
   cin >> n;

   for(i = 0; i < n; i++){
   	cout << "Inputkan data ke-" << (i+1) << " = ";
      cin >> data[i];
   }

   cout << endl;
   cout << "Data Yang diinputkan : ";
   for(i = 0; i < n; i++){
   	cout << data[i] << " ";
   }
   cout << endl;

   for(i = 0; i < n-1; i++){
   	pos = i;
      for(j = i+1; j < n; j++){
      	if(data[j] < data[pos]) pos = j;
      }
      if(pos!=i) tukar(pos,i);
   }

   cout << "Data yang telah diurutkan secara ascending : " << endl;
   for(int i=0; i<n; i++){
   	cout << data[i] << " ";
   }
   cout << endl;
   getch();
}