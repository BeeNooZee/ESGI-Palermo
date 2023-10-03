#include "TP1.h"
#include <stdio.h>

void TP1_2()
{
    printf("TP1_2\n");

    int j, entier, R1 = 0, R2=1;

    printf("entrer un entier :\n");
    scanf("%d", &entier);

    for (j=1; j<=entier; j++){
        R1 = R1 + j;
        R2 = R2 * j;
    }
    printf("%d\n", R1);
    printf("%d\n", R2);
}