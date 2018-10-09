#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int tplbp()
{



}






int matrix3(int x,int y,char *A,int w,int l)
{
    // x--;y--;//set the begin at the conner of upper left
     int  a,b,c,d;

     char heyCheerUp[3][3];






     for (a=0;a<3;a++)
     {

         for (b=0;b<3;b++)
         {
          if(((x-1+a)<w)&&((y-1+b)<l)&&((x-1+a)>-1)&&((y-1+b)>-1))
          heyCheerUp[a][b]=A[x-1+a][y-1+b];
          else heyCheerUp[a][b]=0;
         }

     }


     for(c=0;c<3;c++)
     {
         for(d=0;d<3;d++)
         {
              if ((heyCheerUp[c][d]<<heyCheerUp[x][y])||(heyCheerUp[c][d]==heyCheerUp[x][y]))
             {
                 heyCheerUp[c][d]=0;
             }
             else heyCheerUp[c][d]=1;
         }
     }




				    int temp = 0;

					   temp += (heyCheerUp[0] == 1) ? pow(2, 7):0;
					   temp += (heyCheerUp[1] == 1) ? pow(2, 6):0;
				       temp += (heyCheerUp[2] == 1) ? pow(2, 5):0;
				       temp += (heyCheerUp[5] == 1) ? pow(2, 4):0;
				       temp += (heyCheerUp[8] == 1) ? pow(2, 3):0;
				       temp += (heyCheerUp[7] == 1) ? pow(2, 2):0;
				       temp += (heyCheerUp[6] == 1) ? pow(2, 1):0;
				       temp += (heyCheerUp[3] == 1) ? pow(2, 0):0;


return temp;
}



/*   if ((yesMatrix[a][b]<<yesMatrix[x][y])||(yesMatrix[a][b]==yesMatrix[x][y]))
             {
                 yesMatrix[a][b]=0;
             }
             else A[a][b]=1;*/
