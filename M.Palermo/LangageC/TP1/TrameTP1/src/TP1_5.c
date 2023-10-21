#include <stdio.h>
#include <string.h>
#include <ctype.h>

void TP1_5(){

        printf("TP1_5\n");

        char mot[100];
        printf("Entrez un mot : ");
        scanf("%s", mot);

        int longueur = strlen(mot);
        int debut = 0;
        int fin = longueur - 1;

        for (int i = 0; i < longueur; i++) {
            mot[i] = tolower(mot[i]);
        }

        int estPalindrome = 1;
        while (debut < fin) {
            while (!isalpha(mot[debut])) {
                debut++;
            }
            while (!isalpha(mot[fin])) {
                fin--;
            }

            if (mot[debut] != mot[fin]) {
                estPalindrome = 0;
                break;
            }

            debut++;
            fin--;
        }

        if (estPalindrome) {
            printf("%s est un palindrome.\n", mot);
        } else {
            printf("%s n'est pas un palindrome.\n", mot);
        }


}