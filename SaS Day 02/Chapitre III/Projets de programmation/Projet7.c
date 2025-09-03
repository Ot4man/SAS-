#include <stdio.h>

int main() {
    int num, dim, a, b, r, pgc;

    printf("Entrez une fraction dim et num : ");
    scanf("%d %d", &num, &dim);

    if (dim == 0) {
        printf("Erreur : le dim ne peut pas  0.\n");
        return 1;
    }

    a = num;
    b = dim;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    pgc = a; 

    printf("Le plus grand commun diviseur est %d\n", pgc);

    num = num / pgc;
    dim = dim / pgc;

    printf("Sous sa forme la plus simple : %d/%d\n", num, dim);

    return 0;
}
