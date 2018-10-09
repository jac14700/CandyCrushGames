#include <struct.h>
#include<HEADER.h>
#include "unistd.h"


///呼叫還是作用的主程式

int main()

{  system("color 07");
   double i=4;

   double Do=32;

   double Re=32*pow(1.0595, 2);

   double Mi=32*pow(1.0595, 4);

   double Fa=32*pow(1.0595, 5);





    FILE *cfPtr; /* credit.dat file pointer */
       int choice;  /* user's choice */

       /* fopen opens the file; exits if file cannot be opened */
       if ( ( cfPtr = fopen( "credit.dat", "rb+" ) ) == NULL ) {
          printf( "File could not be opened.\n" );
       } /* end if */
       else {

          /* enable user to specify action */
          while ( ( choice = enterChoice() ) != 5 )
          {
            switch ( choice ) {

                /* create text file from record file */
                case 1:
                   Beep((int)(Do*pow(2, 4)), 300);
                   textFile( cfPtr );
                   system("CLS");
                   break;

                /* update record */
                case 2:
                   Beep((int)(Re*pow(2, 4)), 300);
                   updateRecord( cfPtr );
                   system("CLS");
                   break;

                /* create record new player*/
                case 3:
                   Beep((int)(Mi*pow(2, i)), 300);
                   newRecord( cfPtr );
                   system("CLS");
                   break;

                /* delete existing record */
                case 4:
                   Beep((int)(Fa*pow(2, i)), 300);
                   deleteRecord( cfPtr );
                   system("CLS");
                   break;

                /* display message if user does not select valid choice */
                default:
                   printf( "Incorrect choice\n" );
                   break;

             } /* end switch */

          } /* end while */

          fclose( cfPtr );
       }
       return 0;
}







