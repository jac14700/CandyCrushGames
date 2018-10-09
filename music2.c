#include <struct.h>
#include<HEADER.h>

///再見音樂
void music2()
{   int i=4;

double Do=32;
double Re=32*pow(1.0595, 2);
double Mi=32*pow(1.0595, 4);
double Fa=32*pow(1.0595, 5);
double Sol=32*pow(1.0595, 7);
double La=32*pow(1.0595, 9);
double Si=32*pow(1.0595, 11);
     Beep((int)(La*pow(2, i)), 500);
     Beep((int)(Fa*pow(2, i)), 600);
     //Beep((int)(Re*pow(2, i)), 700);
     //Beep((int)(Si*pow(2, 3)), 600);
}
