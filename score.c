#include <struct.h>
#include<HEADER.h>
///琌ノㄓ璸衡Θ罿┮ㄏノㄧ计( だ计 )
void score(int * Parray){


double Do=32;
double Re=32*pow(1.0595, 2);
double Mi=32*pow(1.0595, 4);

    int i=4;
    int x=0,y=0,temp,sumy,jumpy,test2;

        for (x=0;x<MAX;x++)
        {
            for (y=0;y<MAX;y++)
            {
                sumy=1;
                temp=*(Parray+(5*x+y));
                jumpy=y+1;




                do{
                    test2=*(Parray+(5*x+jumpy));

                if(test2==temp)
                {
                    sumy++;
                }

                if(test2!=temp)
                {
                    break;
                }
                    jumpy++;

///恶计舘!!!

                if(sumy==3)
                {
                    *(Parray+(5*x+y))=rand() %4;
                    *(Parray+(5*x+(y+1)))=rand() %4;
                    *(Parray+(5*x+(y+2)))=rand() %4;
                    };

                if(sumy==4)
                {
                    *(Parray+(5*x+y))=rand() %4;
                    *(Parray+(5*x+(y+1)))=rand() %4;
                    *(Parray+(5*x+(y+2)))=rand() %4;
                    *(Parray+(5*x+(y+3)))=rand() %4;
                    };

                if(sumy==5)
                {
                    *(Parray+(5*x+y))=rand() %4;
                    *(Parray+(5*x+(y+1)))=rand() %4;
                    *(Parray+(5*x+(y+2)))=rand() %4;
                    *(Parray+(5*x+(y+3)))=rand() %4;
                    *(Parray+(5*x+(y+4)))=rand() %4;
                    };
                }while(jumpy<MAX);



///计舘!!!

                if((y==0)&&(x==0)) printf("score:%d",SCORE);


                if (sumy==3){SCORE+=3;printf(" +3  ");Sleep(500); Beep((int)(Do*pow(2, i)), 300);}

                if (sumy==4){SCORE+=4;printf(" +4  ");Sleep(500);Beep((int)(Re*pow(2, i)), 300);}

                if (sumy==5){SCORE+=5;printf(" +5  ");Sleep(500);Beep((int)(Mi*pow(2, i)), 300);}

                sumy=0;
            }
        }
return;
}
