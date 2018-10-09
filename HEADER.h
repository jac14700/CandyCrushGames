#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <struct.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>
#include <windows.h>

#include<setjmp.h>
#define MAX 5
#define matrix 25
#define Read  0
#define Create  1
#define OCT 9
#define SIZ (OCT * 12 + 1)


int x,y;
int time1;
int fiveBy[5][5];
int SCORE,t1;

void loadgame( FILE *load,int RorC,int accountNum);
void updateRecord( FILE *fPtr );
void newRecord( FILE *fPtr );
void deleteRecord( FILE *fPtr );
void textFile( FILE *readPtr );



void smile(void);
void SetColor(int color);
void print_array(int *Parray,int updown);
int exchange(int *   Parray,char x,char y);
void swap( int *element1Ptr, int *element2Ptr );
void s_witch(int *   Parray,char x,char y,char dir);
void score(int * Parray);
int enterChoice( void );
void music1();
void music2();
jmp_buf buf;



#endif // HEADER_H_INCLUDED
