#include<stdio.h>
#include<stdbool.h>
#include<stdio.h>
int main(){
bool digit_seen[10]={false};
int digit;
int tab[10];
long n ;
int c = 0;
printf("Entrer un nombre : ");
scanf("%ld",&n);
while (n>0)
{
    digit = n% 10;
    if(digit_seen[digit]){
        tab[c] = digit;
        c++;
    }

    digit_seen[digit]=true ;
  
    n/=10;
}
if(c>=1){   
printf("Des chiffres sont repetes .\n");
for(int i=0;i<c;i++){
    printf("%d",tab[i]);
}}else{
    printf("Aucun chiffres repetes .\n");}
return 0;
}