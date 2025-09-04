#include<stdio.h>
int main(){
int heure, time,minutes;
printf("Entrez une heure (24h)\n");
scanf("%d:%d",&heure,&minutes);
time=heure*60+minutes;
printf("time is %d:%d\n",heure,minutes);
printf("time in minutes %d\n",time);
int time1=(8*60 + 9*60+43)/2;
int time2=((9*60 +43) + (11*60+19 ))/2;
int time3=((11*60+19)+(12*60+47))/2;
int time4=((12*60+47)+(14*60))/2;
int time5=((14*60)+(15*60+45))/2;
int time6=((15*60 +45)+(17*60))/2;
int time7=((17*60)+(21*60+45))/2;
int time8=(21*60+45)/2;
if (time<=time1){ 

printf("L'heure de départ la plus proche est 8h00 a.m., arrivant à 10h16 a.m.");}
else if(time <= time2 )
{
        printf("L'heure de départ la plus proche est 9h43 a.m., arrivant à 11h52 a.m.");}
else if (time <= time3)
{
     printf("L'heure de départ la plus proche est 11h19 a.m., arrivant à 1h31 p.m.");

}      else if (time <= time4)
{
  printf("L'heure de départ la plus proche est 12h47 p.m., arrivant à 3h00 p.m.");

}   else if (time <= time5)
{
  printf("L'heure de départ la plus proche est 2h00 p.m., arrivant à 4h08 p.m.");

}    else if (time <= time6){ 
 printf("L'heure de départ la plus proche est 3h45 p.m., arrivant à 5h52 p.m.");}

else if (time <= time7)
{
     printf("L'heure de départ la plus proche est 7h00 p.m., arrivant à 9h20 p.m.");
}
   else if (time <= time8)
{
     printf("L'heure de départ la plus proche est 9h45 p.m., arrivant à 11h58 p.m.");

} }