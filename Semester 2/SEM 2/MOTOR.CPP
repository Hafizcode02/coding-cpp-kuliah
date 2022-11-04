#include <iostream.h>
#include <conio.h>
#include <cstring.h>

class Motor
{
	private :
   		char tipeMotor[50], merkMotor[50];
   		int state;
         int speed, gear;

   public :
   		Motor(char *tipemotor, char *merkmotor);
         void info();
         void start();
         void increaseGear();
         void decreaseGear();
         void stop();
};

Motor::Motor(char *tipemotor, char *merkmotor)
{
	strcpy(Motor::tipeMotor, tipemotor);
   strcpy(Motor::merkMotor, merkmotor);
   state = 0;
   speed = 0;
   gear = 0;
}

void Motor::info()
{
	cout << "Motor : " << tipeMotor << endl;
   cout << "Merk : " << merkMotor << endl;
   cout << "=================================" << endl;
}

void Motor::start()
{
	cout << "Engine Started.... " << endl;
   state = 1;
}

void Motor::increaseGear()
{
	cout << "Current Motor Gear : Normal " << endl;
	cout << "Increase Motor Gear .... " << endl;
	for(int i = 1; i <= 6; i++)
   {
   	cout << "Gear Motor State is " << (gear += i) << endl;
      cout << "Current Speed is " << (speed += (i * 20)) << " KM/Jam" <<endl;
      speed = 0;
      gear = 0;
   }
   cout << endl;
}

void Motor::decreaseGear()
{
	cout << "Using Brakes .... " << endl;
	cout << "Decrease Motor Gear .... " << endl;
	for(int i = 6; i >= 1; i--)
   {
   	cout << "Gear Motor State is " << (gear += i) << endl;
      cout << "Current Speed is " << (speed += (i * 20)) << " KM/Jam" << endl;
      speed = 0;
      gear = 0;
   }
   cout << "Current Motor Gear : Normal " << endl;
   cout << endl;
}


void Motor::stop()
{
	cout << "Engine Turn Off...... " << endl;
   state = 0;
}

void main()
{
	clrscr();

   Motor hafiz("CB150R", "HONDA");
   hafiz.info();
   hafiz.start();
   hafiz.increaseGear();
   hafiz.decreaseGear();
   hafiz.stop();

   getch();
}

