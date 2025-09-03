/*les livres ISBN*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int Prefixe,Ident_groupe,code_editeur,Num_artical ,chiffre_control;
 
    printf(" Entrer le ISBN de livre \n");
    scanf("%d-%d-%d-%d-%d",&Prefixe,&Ident_groupe,&code_editeur,&Num_artical,&chiffre_control);
    printf("Prefixe GS1 :%d\n",Prefixe);
    printf("Identifiant de groupe :%d\n",Ident_groupe);
    printf("Code de l'éditeur :%d\n",code_editeur);
    printf("Numéro d'article  :%d\n",Num_artical);
    printf("Chiffre de controle:%d\n",chiffre_control);

}