#include<windows.h>
///���ܦr���C��
void SetColor(int color)
{

HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole,color);
}
