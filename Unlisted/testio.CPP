// basic file operations
#include <iostream>
#include <fstream>
#include <cstring>
#include <conio>

int main () {
  //ofstream myfile;
  //myfile.open ("example.txt");
  //myfile << "Writing this to a file.\n";
  //myfile << "Anjay Mabar bruh";
  //myfile.close();
  //return 0;

int i = 0;
string arr[5];
ifstream file("example.txt");
string data = "";
while(getline(file, data,';'))
{
	cout << data << endl;
   i++;

}
file.close();
getch();
}