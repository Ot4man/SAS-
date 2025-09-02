/*
SEction 1.1: 

#include <stdio.h>
int main(void)
{
printf("hello, world n");
return 0;
}*/


/*
Section 1.2
#include <stdio.h>
int main(void)
{
printf("Parkinson's Law:\nWork expands so as to ");
printf("fill the timen\n");
printf("available for its completion.\n");
return 0;
}

1)-
 Directives : #include <stdio.h>
 Instructions : -printf()
               -return 0
2)- la sortie de programme :
 Parkinson's Law:
Work expands so as to fill the timen
available for its completion.
*/

/*Section 1.4:
1)- 

/* Computes the dimensional weight of a 12"x10"x8" box 
#include <stdio.h>
int main(void) {

int height, length, width, volume, weight;
height = 8;
length = 12;
width = 10;
volume = height * length * width;
weight = (volume + 165) / 166;
printf("Dimensions: %dx%dx%d n", length, width, height);
printf("Volume (cubic inches): %d n", volume);
printf("Dimensional weight (pounds): %d n", weight);
return 0;
}
2)- 
programme de plusieurs variables
*/
/*
#include<stdio.h>

int a,b,c;
float x,y,z;
int main(){ 
printf("a= %d \n",a);
printf("b= %d \n",b);
printf("c= %d \n",c);
printf("x= %d \n y=%d \n z=%d\n",x,y,z);
return 0;
}
 Il n’y a aucun schéma régulier dans les valeurs affichées
*/

/* Section 1.7 :
5)- éléments  qui sont pas des identifiants C légaux
(a) 100_bottles

6)- parce que plusieurs _ consécutifs (comme current___balance) sera risque conflit avec le compilateur ou les librairies, et c’est moins lisible

7)- 7. Lequels des éléments suivants sont des mots-clés en C ?
-for()
-while()
*/
/* Section 1.8:
8)- Combien de jetons y a-t-il dans l'instruction suivante ?
answer=(3*q-p*p)/3;
sont 14 
9)-Insertion des espaces :

#include <stdio.h>

int main(void) {

int height, length, width, volume, weight;

height = 8;
length = 12;
width = 10;

volume = height * length * width;

weight = (volume + 165) / 166;

printf("Dimensions: %d x %d x %d n", length, width, height);

printf("Volume (cubic inches): %d n", volume);

printf("Dimensional weight (pounds): %d n", weight);

return 0;
}
10)- l'espace essentiels 
    entre int et hieght 
    les mots-clés et identifiants.

*/
#include<stdio.h>
int main(){
    printf("1.           *\n");
    printf("2.          * \n");
    printf("3.         *  \n");
    printf("4.   *    *   \n");
    printf("5.    *  *    \n");
    printf("6.     *    \n ");
return 0;
}