#include <stdio.h>

int main() {
    int i,m;
    printf("entrez le nombre de m : \n");
    scanf("%d",&m);
    for( i=2;i*i<=m;i+=2){

    printf("%d\n",i*i);
}
    return 0;

}
