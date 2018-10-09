#include <struct.h>
#include<HEADER.h>
/// 用來刪除資料*fPtr是之前開的資料
void deleteRecord( FILE *fPtr )
{    system("CLS");

   double Do=32;
   struct clientData client; /* stores record read from file */
   struct clientData blankClient ; /* blank client */

    blankClient.acctNum=0;
    blankClient.Score=0;
    memset(blankClient.MAT, 0, sizeof(blankClient.MAT));
    memset( blankClient.time, '+', strlen(blankClient.time) );


    system("CLS");
   /* obtain number of account to delete */
   printf( "Enter account number to delete ( 1 - 20 ): " );


    int accountNum;
    char account1[100];        /* account number */

again:
    scanf( "%2s", account1 );
    Beep((int)(Do*pow(2, 3)), 300);
    accountNum=atoi(account1);
   if(( accountNum>20) ||( accountNum<1 ))
    {
        printf("Enter 1-20\n");
        goto again;
    };

   /* move file pointer to correct record in file */
   fseek( fPtr, ( accountNum - 1 ) * sizeof( struct clientData ),
      SEEK_SET );

   /* read record from file */
   fread( &client, sizeof( struct clientData ), 1, fPtr );

   /* display error if record does not exist */
   if ( client.acctNum == 0 ) {
      printf( "Account %d does not exist.\n", accountNum );Sleep(1000);
   } /* end if */
   else { /* delete record */

      /* move file pointer to correct record in file */
      fseek( fPtr, ( accountNum - 1 ) * sizeof( struct clientData ),
         SEEK_SET );

      /* replace existing record with blank record */
      fwrite( &blankClient,
         sizeof( struct clientData ), 1, fPtr );
   } /* end else */

} /* end function deleteRecord */

/* create and insert record */
