#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

main(){
	int y[15];
	int xsatu[15];
	int xdua[15];
	int xsatuKuadrat[15];
	int xduaKuadrat[15];
	int xsatuy[15];
	int xduay[15];
	int xsatuxdua[15];
	
	int sigmaY = 0;
	int sigmaXsatu = 0;
	int sigmaXdua = 0;
	int sigmaXsatuKuadrat = 0;
	int sigmaXduaKuadrat = 0;
	int sigmaXsatuY = 0;
	int sigmaXduaY = 0;
	int sigmaXsatuduaKuadrat = 0;
	
	int banyakData = 0;
	
	cout << "Masukan Banyak Data : ";
	cin >> banyakData;
	
	banyakData -= 1;
	
	cout << endl;
	cout << "Data X :" << endl;
	for(int i = 0; i <= banyakData; i++){
		cout << "Masukan X Ke - " << i << " = ";
		cin >> x[i];
		sigmaX += x[i];
	}
	
	cout << endl;
	cout << "Data Y :" << endl;
	for(int i = 0; i <= banyakData; i++){
		cout << "Masukan Y Ke - " << i << " = ";
		cin >> y[i];
		sigmaY += y[i];
	}
	
	cout << endl;
	
	for(int i = 0; i <= banyakData; i++){
		xy[i] = x[i] * y[i];
		sigmaXY += xy[i];
	}
	
	for(int i = 0; i <= banyakData; i++){
		xKuadrat[i] = x[i] * x[i];
	}
	
	for(int i = 0; i <= banyakData; i++){
		sigmaXKuadrat += xKuadrat[i];
	}
	
	
	cout << endl;
	cout << "Data X :";
	for(int i = 0; i <= banyakData; i++){
		cout << x[i] << "	";
	}
	
	cout << endl << endl;
	cout << "Data Y :";
	for(int i = 0; i <= banyakData; i++){
		cout << y[i] << "	";
	}
	
	cout << endl << endl;
	cout << "Data XY :";
	for(int i = 0; i <= banyakData; i++){
		cout << xy[i] << "	";
	}
	
	cout << endl << endl;
	cout << "Data X^2 :";
	for(int i = 0; i <= banyakData; i++){
		cout << xKuadrat[i] << "	";
	}
	
	cout << endl << endl;
	
	cout << "Sigma X = " << sigmaX << endl;
	cout << "Sigma Y = " << sigmaY << endl;
	cout << "Sigma XY = " << sigmaXY << endl;
	cout << "Sigma X^2 = " << sigmaXKuadrat << endl;
	
}

