#include <stdio.h>

int main() {
    int a, b, r;

    printf("Entrez deux entiers a et b : ");
    scanf("%d %d", &a, &b);

    
    if (a == 0) {
        printf("Le plus grand commun diviseur est %d\n", b);
        return 0;
    }
    if (b == 0) {
        printf("Le plus grand commun diviseur est %d\n", a);
        return 0;
    }

   
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("Le plus grand commun diviseur est %d\n", a);

    return 0;
}


