#include <struct.h>
#include<HEADER.h>
///是用來產生主選單以及選擇所使用的

int enterChoice( void )
{system("color 07");
   int menuChoice; /* variable to store user's choice */

   /* display available options */

                   double Do=32;

                   double Fa=32*pow(1.0595, 5);

SetColor(12);
   printf( "\n* MENU *\n\n");
SetColor(14);

   printf(" 1 --  Store a formatted text file of players called\n"
      "      \"accounts.txt\" for printing\n\n"
      " 2 --  Continue a player account\n\n"
      " 3 --  Create a new player account\n\n"
      " 4 --  Delete a player account record\n\n"
      " 5 --  exit->\n\n\n\n\n\n\n\n\n\n");
      SetColor(15);
      printf("Your choice=  " );
SetColor(1);
   scanf( "%d", &menuChoice ); /* receive choice from user */
SetColor(15);
///音效產生 - - -
switch(menuChoice)
{
case 1:Beep((int)(Do*pow(2, 3)), 300);break;
case 2:Beep((int)(Do*pow(2, 3)), 300);break;
case 3:Beep((int)(Do*pow(2, 3)), 300);break;
case 4:Beep((int)(Do*pow(2, 3)), 300);break;
case 5:Beep((int)(Do*pow(2, 3)), 300);break;
default :Beep((int)(Do*pow(2, 3)), 300);
         Sleep(10);Beep((int)(Fa*pow(2, 3)), 300);
         Sleep(10);Beep((int)(Fa*pow(2, 3)), 300);
         Sleep(10);break;
}
Sleep(300);
   return menuChoice;

} /* end function enterChoice */

