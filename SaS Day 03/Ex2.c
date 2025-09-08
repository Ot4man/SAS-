#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    int tab_chiff[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tab_currence[10] = {0};
    int digit;
    long n;
    printf("Entrer un nombre : ");
    scanf("%ld", &n);
    int c = 0;
    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            c++;
            tab_currence[digit];
           
            

        }
        else
        {
            c = 0;
            digit_seen[digit] = true;
            c++;
        }

        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" %d\t", tab_chiff[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tab_currence[i]);
    }
    return 0;}
// }
// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     bool digit_seen[10] = {false};
//     int tab_chiff[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int tab_currence[10] = {0};
//     int digit;

//     long n;
//     printf("Entrer un nombre : ");
//     scanf("%ld", &n);
//     while (n > 0)
//     {
//         digit = n % 10;
//         if (digit_seen[digit])
//         {
//             tab_currence[digit]++;
//         }
//         else
//         {
//             digit_seen[digit] = true;
//         }

//         n /= 10;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf(" %d\t", tab_chiff[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\t", tab_currence[i]);
//     }
//     return 0;
// }