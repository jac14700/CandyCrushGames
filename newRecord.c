#include <struct.h>
#include<HEADER.h>
///////// 用來新增資料*fPtr是之前開的資料
void newRecord( FILE *fPtr )
{    system("CLS");
system("color 37");

   /* create clientData with default information */
   struct clientData client ;
       client.acctNum=0;
       client.Score=0;
       memset(client.MAT, 0, sizeof(client.MAT));
       memset( client.time, '+', strlen(client.time) );

   double Do=32;

printf("Enter the account number you like to create  ");
   /* obtain number of account to create */

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

   /* display error if account already exists */
   if ( client.acctNum != 0 ) {
      printf( "Account #%d already contains information.\n",
              client.acctNum );
              Sleep(1000);
   } /* end if */
   else { /* create record */


      /* user enters last name, first name and balance */
      printf( "Name      " );
      scanf( "%s", &client.Name );

      client.acctNum = accountNum;

      /* move file pointer to correct record in file */
      fseek( fPtr, ( client.acctNum - 1 ) *
         sizeof( struct clientData ), SEEK_SET );

      /* insert record in file */
      fwrite( &client,
         sizeof( struct clientData ), 1, fPtr );


         loadgame(fPtr,Create,accountNum);

   } /* end else */


} /* end function newRecord */
