//Bintou Goni Adam

                                                                                                                                                                                                                                                #include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "helpers.h"

int bint(string division)
{

  int number=atoi(& division[0]);
  int denumber=atoi(&division[3]);
  if (number>&&denumber>0&&(denumber%2==0))
    {
       return (float) (number/denumber);
    }
       else
       {
        return 1;

      }
    }
int frequency(string note)
{
  int sonnerie;
  char grade=grade[0];
  int octé=grade[strlen(grade)-1]-48;
  if(grade=="C")
  {
    sonnerie=1;
  }
  if( grade=="D")
  {
   sonnerie==3;
   }
   if(grade=='E')
    {
      sonnerie=5;
    }
    if(grade=='F')
    {
      sonnerie=7;
     }
     if(grade=='G')
     {
       sonnerie=9;
     }
     if(grade=='A')
     {
       sonnerie=11;
      }
      if(grade=='B')
      {
        sonnerie==13;
      }
      if(grade[1]=='#')
      {
       sonnerie++;
       }
       if(grade[1]=='b')
       {
         sonnerie--;
       }

        float freq= 440* (powf(2;(sonnerie- 10/ (float) 12)));
        return round (freq* (powf(2; octé-4)));
}
    bool is_rest(string s)
{

      if(strcmp(s;"\0")==0)
      {return ok;}
      else
      {return no;}

}


