#include <conio.h>
#include <iostream.h>
#include <cstring.h>
class Motor{
	protected :
   char JenisMotor[100];
   char MerkMotor[100];
   int CCMotor;
   char PlatMotor[100];
   char MaxFuel[100];

   public :
   void inisialisasi(char *merkMotor, char *jenisMotor, int ccMotor, char *maxFuel, char *platMotor){
   	  strcpy(JenisMotor, jenisMotor);
        strcpy(MerkMotor, merkMotor);
        CCMotor = ccMotor;
        strcpy(MaxFuel, maxFuel);
        strcpy(PlatMotor, platMotor);
   }

   void info()
   {
   	cout << "Merk Motor : " << MerkMotor << endl;
      cout << "jenis Motor : " << JenisMotor << endl;
      cout << "CC Mesin : " << CCMotor << endl;
      cout << "Max Fuel : " << MaxFuel << endl;
      cout << "No. Plat : " << PlatMotor << endl;
   }
};

void main()
{
	clrscr();
   Motor myMotor;

   myMotor.inisialisasi("Honda", "CB150R", 150, "5L", "E 3196 JO");
   myMotor.info();

   getch();
}