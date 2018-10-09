#include <struct.h>
#include<HEADER.h>

///產生五乘五矩陣的畫面
void print_array(int *Parray,int updown)
{
    int f=2;
    double Do=32;
    double Re=32*pow(1.0595, 2);
    double Mi=32*pow(1.0595, 4);


    int UpDownRL;
    int x1=0;
    int y1=0;
    int *Hold;
    char control;

///不斷產生圖片
while(1)
{
if (kbhit())
{
///跳的xy值標
    control=getch();
    if (control == 'x')
        longjmp(buf,2);
    if (control == 'a')
       if(y1!=0) y1--;
    if (control == 'w')
       if (x1!=0)x1--;
    if (control == 's')
       if(x1!=4) x1++;
    if (control == 'd')
       if (y1!=4) y1++;
    if (control == ' ') /// 指定按鍵為空白鍵
    {
    printf("\n<which direction>?");
    UpDownRL=getch();
    switch(UpDownRL)
    {
    case 'a':Beep((int)(Do*pow(2, f-1)), 300);
        break;

    case 's':Beep((int)(Do*pow(2, f)), 300);
        break;
    case 'w':Beep((int)(Re*pow(2, f)), 300);
        break;
    case 'd':Beep((int)(Mi*pow(2, f)), 300);
        break;
    }
    printf("\n\n");

/////////////////////////

    if(UpDownRL=='x')
    longjmp(buf,2);


//////////////////////////




    s_witch(Parray,x1+48,y1+48,UpDownRL);





}

    int x,y,t,q;
    char S3[]="maping . . .   \n\n\t\t\t\t\t";

    Hold=Parray;
    system("CLS");


///maping . . .
    for (t=0,q=10;t<20;t++,q++)
    {   if(q>14)q=q-5;
        SetColor(q);

        if (time1==0)Sleep(100);

        printf("%c",S3[t]);

    }

    ///陣列產出
    SetColor(4);
    printf("\n\t\t            Y        \n\n\n\n");
    printf("\t\t      0  1  2  3  4"
           "\t\t\n"
           "\t\t======================\n");
    for(x=0;x<MAX;x++)

    {   if(x==MAX/2)printf("\tX\t%d | ",x);

        if (x!=MAX/2)
        printf("\t\t%d | ",x);

        for(y=0;y<MAX;y++)

        {
            if (*Hold==0)SetColor(12);
            if (*Hold==1)SetColor(11);
            if (*Hold==2)SetColor(14);
            if (*Hold==3)SetColor(10);
             printf("  ");
            if ((x==x1)&&(y==y1)){;SetColor(240);}
             printf("%d",*Hold);

            Hold++;

            SetColor(7);

        }SetColor(4);
        if (x==MAX-1)break;
        printf("  |\t");


        printf("\n\n");

    }printf("  |\n");

    printf("\t\t======================\t\t");

    ///分數產出
    SetColor(7);
    score(Parray);
    SetColor(7);
    time1++;

}
}
}
