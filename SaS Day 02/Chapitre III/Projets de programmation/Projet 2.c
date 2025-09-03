#include<stdio.h>
int main(){
int Nb,NbInverse,unite,dizaine;
printf("Entrer un nombre a deux chiffres \n");
scanf("%d",&Nb);
printf("Le nombre à deux chiffres %d\n",Nb);
      unite=Nb%10;
      dizaine=Nb/10;
      NbInverse=(unite * 10) +  dizaine;
   
printf("Nombre  inverse est %d",NbInverse);
return 0;
}

