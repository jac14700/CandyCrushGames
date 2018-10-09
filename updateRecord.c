#include <struct.h>
#include<HEADER.h>
/// 用來更新資料 *fPtr是之前開的資料
void updateRecord( FILE *fPtr )
{    system("CLS");
system("color 37");
    double Do=32;






   /* create clientData with no information */
   struct clientData client ;
       client.acctNum=0;
       client.Score=0;
       memset(client.MAT, 0, sizeof(client.MAT));
       memset( client.time, '+', strlen(client.time) );



   /* obtain number of account to update */
   printf( "Enter account to update ( 1 - 20 ): " );




    int account;
    char account1[100];        /* account number */

again:
    scanf( "%2s", account1 );
    Beep((int)(Do*pow(2, 3)), 300);
    account=atoi(account1);
   if(( account>20) ||( account<1 ))
    {
        printf("Enter 1-20\n");
        goto again;
    };






   /* move file pointer to correct record in file */
   fseek( fPtr, ( account - 1 ) * sizeof( struct clientData ),
      SEEK_SET );

   /* read record from file */
   fread( &client, sizeof( struct clientData ), 1, fPtr );

   /* display error if account does not exist */
   if ( client.acctNum == 0 ) {
      printf( "Acount #%d has no information.\n", account );Sleep(1000);return ;
   } /* end if */
   else { /* update record */



      printf( "\n\n\nNUM:\t %-10d\n\n""NAME:\t %-10s\n\n""score:\t %-10d\n\n""time:\t %-10s\n\n",
         client.acctNum, client.Name, client.Score ,client.time);

printf("\n\n\n\n\n\n\n\n\n");
system("pause");

      /* move file pointer to correct record in file */
      fseek( fPtr, ( account - 1 ) * sizeof( struct clientData ),
         SEEK_SET );

      /* write updated record over old record in file */
      fwrite( &client, sizeof( struct clientData ), 1, fPtr );
   } /* end else */



///進入遊戲
    loadgame(fPtr,Read,account);

} /* end function updateRecord */
