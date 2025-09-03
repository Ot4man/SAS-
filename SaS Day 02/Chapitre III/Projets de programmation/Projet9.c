#include <stdio.h>
#include <string.h>

int main() {
    char chaine_alpha[50];

    printf("Entrez un numéro de téléphone : \n");
    scanf("%s", chaine_alpha);

    for (int i = 0; i < strlen(chaine_alpha); i++) {
        char pos = chaine_alpha[i];

        if (pos >= 'A' && pos <= 'C') {
            printf("2");
        } 
        else if (pos >= 'D' && pos <= 'F') {
            printf("3");
        } 
        else if (pos >= 'G' && pos <= 'I') {
            printf("4");
        } 
        else if (pos >= 'J' && pos <= 'L') {
            printf("5");
        } 
        else if (pos >= 'M' && pos <= 'O') {
            printf("6");
        } 
        else if (pos >= 'P' && pos <= 'S') {
            printf("7");
        } 
        else if (pos >= 'T' && pos <= 'V') {
            printf("8");
        } 
        else if (pos >= 'W' && pos <= 'Y') {
            printf("9");
        } 
        else {
            printf("%c", pos);
        }
    }

    printf("\n");
    return 0;
}