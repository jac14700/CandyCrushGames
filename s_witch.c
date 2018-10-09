#include <struct.h>
#include<HEADER.h>


/// 置換FUNCTION
void s_witch(int *   Parray,char X,char Y,char dir)

{


    int x=X-48,y=Y-48;


    qq:

    switch(dir)

    {




        case 'w':

        if (x == 0)

        {
                printf("Invaid!!!\n\n");

                printf("Please input your direction again!\n\n");

                dir=getch();

                printf("\n\n");

                s_witch(Parray,x+48,y+48,dir);




                break;

        }

        swap(Parray+(5*x+y),Parray+(5*(x-1)+y));

        break;






        case 's':

        if ((x%5) == 4)

        {
                printf("Invaid!!!\n\n");

                printf("Please input again!\n\n");

                dir=getch();

                printf("\n\n");

                s_witch(Parray,x+48,y+48,dir);



                break;

        }

        swap(Parray+(5*x+y),Parray+(5*(x+1)+y));

        break;






        case 'a':

        if ((y%5) == 0)

        {

                printf("Invaid!!!\n\n");

                printf("Please input again!\n\n");

                dir=getch();

                printf("\n\n");

                s_witch(Parray,x+48,y+48,dir);



                break;

        }

        swap(Parray+(5*x+(y-1)),Parray+(5*x+y));

        break;





        case 'd':

        if ((y%5) == 4)

        {

                printf("Invaid!\n\n");

                printf("Please input again!\n\n");

                dir=getche();

                printf("\n\n");

                s_witch(Parray,x+48,y+48,dir);



                break;

        }

        swap(Parray+(5*x+y),Parray+(5*x+(y+1)));

        break;





        case 'x':


        longjmp(buf,2);





        default :
                printf("\nPlease input your direction<w ,  s    , a     , d>\n");

                printf("They will be regard as     <up , down , right , left>\n\n\n");

                printf("try again\n");

                dir=getch();

                printf("\n\n");

                goto qq;


    }



}

