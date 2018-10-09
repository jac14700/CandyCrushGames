#include <struct.h>
#include<HEADER.h>

void music1()
{   int i=5;

double Do=32;
double Re=32*pow(1.0595, 2);
double Mi=32*pow(1.0595, 4);
double Fa=32*pow(1.0595, 5);
double Sol=32*pow(1.0595, 7);
double La=32*pow(1.0595, 9);
double Si=32*pow(1.0595, 11);
     Beep((int)(Sol*pow(2, i)), 150);
      Beep((int)(Sol*pow(2, i)), 150);
       Beep((int)(Sol*pow(2, i)), 150);
        Beep((int)(Sol*pow(2, i)), 400);
         Beep((int)(Fa*pow(2, i)), 100);
         Beep((int)(Do*pow(2, i)), 200);Sleep(10);Beep((int)(Do*pow(2, i)), 200);Sleep(10);Beep((int)(Do*pow(2, i)), 200);Sleep(100);
         //Beep((int)(Fa*pow(2, i)), 400);
          Beep((int)(Si*pow(2, i)), 600);
}
