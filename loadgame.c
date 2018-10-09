#include <struct.h>
#include<HEADER.h>
///進入遊戲使用  *load 是之前在主選單開的檔案     RorC 是選擇獨創檔案 AccountNum 是紀錄哪個玩家
void loadgame( FILE *load,int RorC,int accountNum)
{

    time1=0;
    SCORE=0;
    int t,q;



    Sleep(1000);
    system("CLS");

    printf("Rules :\n\n"
           "\t1 There will be a 5 by 5 map\n\n"
           "\t2 You can switch your candy by the key on keyboard \n\n"
           "\t3 Input w , a , s , d as upward  leftward  downward  rightward\n\n"
           "\t  Blankspace as choose to switch.\n\n"
           "\t4 We can only switch inside the 5x5 map\n\n"
           "\t  We don't have the ability to switch outside the map\n\n"
           "\t5 You can leave the game + recode your game when you input 'x' any time\n\n");


    printf("\n\n\n\n\n\n");

    system("pause");
    system("color 07");
    system("CLS");

    //music1();

    char S[]="Game start !";

    for (t=0,q=9;t<12;q++,t++)

    {SetColor(q);
    if(q>14)q=q-6;
        Sleep(100);

        printf("%c",S[t]);

    }
    SetColor(7);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");

system("pause");

//================================================Read


if (RorC==0)
{
        //============================讀檔==========

   struct clientData client ;
       client.acctNum=0;
       client.Score=0;
       memset(client.MAT, 0, sizeof(client.MAT));
       memset( client.time, '+', strlen(client.time) );

    fseek( load, ( accountNum - 1 ) * sizeof( struct clientData ),
      SEEK_SET );
    fread( &client, sizeof( struct clientData ), 1, load );
    int r,t1,t2,t0=0;
    for(t1=0;t1<MAX;t1++)
    {

        for(t2=0;t2<MAX;t2++)
    {
        r=client.MAT[5*t1+t2];
        fiveBy[t1][t2]=r;
        if ( r ==0)t0++;
    }

    }
    if (t0>20)
    {
            system("cls");

            printf("\nDue to the way of exiting the program ,your map hasn't be stored\n"

                     "So we prepare a new map for you.\n");

            Sleep(1500);

            RorC=1;

    }
    SCORE=client.Score;


}

if(RorC==1)
{
//===================================    亂數產生  ============================
    int count1,count2,t1;


    srand(time(NULL));

    for(count1=0;count1<MAX;count1++)

    {

        for(count2=0;count2<MAX;count2++)

        {

            t1=rand() %4;

            fiveBy[count1][count2]=t1;

        }
    }
 }
//====================  按 'x' 跳出迴路  =================
   int k=  setjmp(buf);
   if(k==0)

    {
        print_array(*fiveBy,-1);
    }

    else{

                char S1[]="\n\nGame End\n\n";
                for (t=0;t<10;t++,q++)
                {
                     SetColor(q);
                     if(q>14)q=q-6;
                     Sleep(250);
                     printf("%c",S1[t]);
                }
                SetColor(7);
                music2();

//存檔________________________________________________________________________

   struct clientData client ;
   client.acctNum=0;
   client.Score=0;
   memset(client.MAT, 0, sizeof(client.MAT));
   memset( client.time, '+', strlen(client.time) );

    fseek( load, ( accountNum - 1 ) * sizeof( struct clientData ),SEEK_SET );
    fread( &client, sizeof( struct clientData ), 1, load );
    int e1,e2;
    for (e1=0;e1<MAX;e1++)
    {

        for(e2=0;e2<MAX;e2++)
        {
          client.MAT[5*e1+e2]=fiveBy[e1][e2];
        }
    }

    client.Score=SCORE;
    time_t T = time(NULL);///儲存時間*  *  *
    char *now = ctime(&T);
    int s=0;
    while(*now!='\0')
    {
        client.time[s]=now[s];
        s++;
    }
      fseek( load, ( client.acctNum - 1 ) *
         sizeof( struct clientData ), SEEK_SET );

      /* insert record in file */
      fwrite( &client,
         sizeof( struct clientData ), 1, load );

system("cls");
    }
}
