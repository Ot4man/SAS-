#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char c;
int compteur=0;
printf("entrer un mot : \n");
c=getchar();
while (c!='\n')
{ 
    c=toupper(c);
   switch (c)
   {
   case 'A':    case 'E':   case 'I':    case  'L':    case  'N':   case  'O':    case  'R':    case 'S':
   case 'T':
   compteur+=1;
    break;
   case 'D':case 'G':
   compteur+=2;
   break; 

   case'B': case 'C':case 'M' : case'P' : 
   compteur+=3;
   break;

   case'F': case'H' :case'V' :case'W' :case'Y' :
   compteur+=4 ;
   break;

   case'K':
   compteur+=5;
   break;

   case'J': case'X':
   compteur+=8;
   break;

   case'Q': case'Z' :
   compteur+=10;
    break;
   } 
   c=getchar();
}
printf("Valeur Scrabble : %d",compteur);


return 0;
}