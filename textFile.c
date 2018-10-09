#include <struct.h>
#include<HEADER.h>
///是用來產生  text 用戶資料  的  .c
void textFile( FILE *readPtr )
{
   FILE *writePtr; /* accounts.txt file pointer */

   /* create clientData with default information */
    struct clientData client ;
       client.acctNum=0;
       client.Score=0;
       memset(client.MAT, 0, sizeof(client.MAT));
       memset( client.time, '+', strlen(client.time) );

   /* fopen opens the file; exits if file cannot be opened */
   if ( ( writePtr = fopen( "accounts.txt", "w" ) ) == NULL ) {
      printf( "File could not be opened.\n" );
   } /* end if */
   else {
      rewind( readPtr ); /* sets pointer to beginning of file */
      fprintf( writePtr, "%-6s%-16s%-11s%-10s\n","Acct", "Name", "Score","Time" );

      /* copy all records from random-access file into text file */
      while ( !feof( readPtr ) ) {
         fread( &client, sizeof( struct clientData ), 1, readPtr );

         /* write single record to text file */
         if ( client.acctNum != 0 ) {
            fprintf( writePtr, "%-6d%-16s%-11d%-10s\n",
               client.acctNum, client.Name, client.Score,client.time );
         } /* end if */

      } /* end while */

      fclose( writePtr ); /* fclose closes the file */
   } /* end else */

} /* end function textFile */
