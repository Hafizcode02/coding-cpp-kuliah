#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

main() {
    //	deklarasi awal
    int i = 0;
    bool ket = true;
    double galat = 0.000001;
    double terkaanAwal = 4.000000;

    // set table
    cout << setiosflags(ios::right) << "i" << setw(10) << "xr" << setw(10) << "abs" << setw(10) << "ket" << setw(4) << endl;

    do {
        //  deklarasi variable xr & abs
        double xr[100], abs[100];
        xr[0] = terkaanAwal;
        abs[0] = galat;

        //  saat program pertama berjalan langsung cetak, ketika iterasi sudah masuk ke no-1 baru kerjakan di dalam blok if
        if (i > 0) {
        	// Nilai Var Asli x^2 - 2 - 3 = 0
            xr[i] = sqrt((2 * xr[i - 1]) + 3); // Metode 1 Dijadiin Akar
            xr[i] = 3/(xr[i-1] - 2); // Metode 2 Dijadiin Per
            abs[i] = xr[i] - xr[i - 1];
            // antisipasi ketika ada hasil yang bernilai negatif
            if (abs[i] < 0) {
                abs[i] = abs[i] * -1;
            }
            // ketika abs >= galat maka keterangan true & selain itu false
            if (abs[i] >= galat) {
                ket = true;
            } else {
                ket = false;
            }
        }
        
        // print data hasil
        cout << setiosflags(ios::right) << i;
        cout.precision(6);
        cout << fixed << setw(10) << xr[i] << setw(10) << abs[i] << setw(10) << ket << setw(4) << endl;
        i++;
    } while (ket == true);

    getch();
}
