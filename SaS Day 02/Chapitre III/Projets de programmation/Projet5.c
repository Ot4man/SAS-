#include<stdio.h>
int main(){
int note;


printf("Entrez une note numérique : \n");
scanf("%d",&note);
if(note <0 && note >100)
{printf("Erro : Entrer un note entre 0 et 100\n ");}


switch (note/10)
{ 
        case 10: printf("100\n");
        case  9: printf("Note littérale : A\n"); break;
        case  8: printf("Note littérale : B\n"); break;
        case  7: printf("Note littérale : C\n"); break;
        case  6: printf("Note littérale : D\n"); break;
        default: printf("Note littérale : F\n"); break;
    } return 0;
}