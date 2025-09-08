
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
    bool digit_seen[10] = {false};
    int digit;
    long n;
    printf("Entrer un nombre : ");
    scanf("%ld", &n);

    if (n <= 0)
    {
        exit(1);
    }

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }
    if (n > 0)
        printf("Des chiffres sont repetes .\n");
    else
        printf("Aucun chiffres repetes .\n");

    return 0;
}