/*
1)- 
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
*/
/*
2)-volume de sphere :

#include<stdio.h>
int main(){
float pi=3.14;
float r=10;
float volume ;
volume = (4.0f /3.0f) * pi * r * r * r ;
 printf("Le volume de la sphere de rayon %.2f m est %.2f m^3\n", r, volume);
return 0;
} */
/*
3)-Modification de programme
#include<stdio.h>
int main(){
float pi=3.14;
float r;
float volume ;
printf("donner le rayon de ce sphere: \n");
scanf("%f",&r);
volume = (4.0f /3.0f) * pi * r * r * r ;
 printf("Le volume de la sphere de rayon %.2f m est %.2f m^3\n", r, volume);

return 0;
} */
/*4)- Addition de taxe :
#include<stdio.h>
int main (){
    float montant, montant_finale;
    float taxe;

printf("Entrer un montant en dollars et en cent \n ");
scanf("%f",&montant);

taxe= montant * 0.05;
montant_finale = montant + taxe;

printf("le montant finale est : %.2f",montant_finale);
return 0;
}
*/

/*5)-Polynome 

#include<stdio.h>
#include<math.h>
int main(){
int x;
double polynome;
printf("donner une valuer pour x \n");
scanf("%d",&x);


polynome = 3*pow(x,3) * pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - pow(x,2) + 7*x -6;
printf("%.2f\n", polynome);

return 0;
}*/

/*
6)-


#include <stdio.h>

int main() {
    int x;
    double polynome;

    printf("Donner une valeur pour x : \n");
    scanf("%d", &x);

    polynome = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("%.2f\n", polynome);

    return 0;
}
*/

/*
7)-Montant en dollar --> billets


#include<stdio.h>
int main(){
int montant, reste;
int billets_20,billets_10,billets_5,billets_1;

printf("Entrer le montant en dollar\n ");
scanf("%d",&montant);
billets_20 = montant / 20;

reste = montant % 20;

billets_10 = reste / 10;
reste = reste % 10;

billets_5 = reste / 5;
reste = reste % 5;

billets_1 = reste;

printf("billets de 20$ : %d\n", billets_20);
printf("billets de 10$ : %d\n",billets_10);
printf("billets de 5$ : %d\n", billets_5);
printf("billets de 1$ : %d\n",billets_1);
return 0;
} 
*/ 
/*
8)--



*/
#include<stdio.h>
int main(){
double montant_du_pret, taux_annuel, paiement_mensuel;
double taux_mensuel;
double solde1, solde2, solde3;
printf("Entrez le montant du prêt : \n");
scanf("%lf",&montant_du_pret);
printf("Entrez le taux d'intérêt : \n");
scanf("%lf",taux_annuel);
printf("Entrez le paiement_mensuel : \n");
scanf("%lf",paiement_mensuel);

taux_mensuel = (taux_annuel / 100.0) / 12.0;

solde1 = montant_du_pret * (1.0 + taux_mensuel) - paiement_mensuel;
solde2 = solde1  * (1.0 + taux_mensuel) - paiement_mensuel;
solde3 = solde2  * (1.0 + taux_mensuel) - paiement_mensuel;

printf("Solde restant apres le premier paiement : $%.2f\n", solde1);
printf("Solde restant apres le deuxieme paiement : $%.2f\n", solde2);
printf("Solde restant apres le troisieme paiement : $%.2f\n", solde3);

    return 0;

}