#include<stdio.h>
int main(){
int j, m,a,j1, m1,a1;
printf("Entrez la première date (mm/jj/aa) :");
scanf("%d/%d/%d",&m,&j,&a);
printf("Entrez la deuxieme date (mm/jj/aa) :");
scanf("%d/%d/%d",&m1,&j1,&a1);

if(a<a1 || a1==a && m<m1 || a1==a && m==m1 && j<j1){
    printf("%02d/%02d/%02d est plus tôt que %02d/%02d/%02d" ,m,j,a,m1,j1,a1);
}

    else if (a == a1 && m == m1 && j == j1) {
        printf("Les dates sont les memes\n");
}
    else {
        printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d\n", m1, j1, a1, m, j, a);
    }

    return 0;
}
