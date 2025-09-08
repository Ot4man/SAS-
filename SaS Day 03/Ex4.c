#include <stdio.h>
#define N 10
int main()
{
    int a[N], i;
    printf("Entrer %d Nombres : ", N);
    for (i = 0; i < (int)(sizeof(a)) / (sizeof(a[0])); i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Dans l'ordre inverse : ");
    for (i = N - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
        printf("\n");
    }
    return 0;
}
