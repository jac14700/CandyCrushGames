#include<windows.h>
///改變字體顏色
void SetColor(int color)
{

HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole,color);
}
