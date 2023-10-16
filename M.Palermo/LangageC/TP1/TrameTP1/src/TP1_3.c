#include <stdio.h>
#include "TP1.h"

void TP1_3() {

    int CH=0;

    printf("MenuTP1\n");
    printf("A quelle personne voulez vous conjuger le verbe etre ? (1/2/3/4/5/6) \n");
    scanf("%d",&CH);

    if (CH==1){
        printf("Le verbe etre a la premier personne du singulier se conjugue : Je suis \n");
    }
    if (CH==2){
        printf("Le verbe etre a la deuxieme personne du singulier se conjugue : Tu es \n");
    }
    if (CH==3){
        printf("Le verbe etre a la troisieme personne du singulier se conjugue : Il est \n");
    }
    if (CH==4){
        printf("Le verbe etre a la premier personne du c se conjugue : Nous sommes \n");
    }
    if (CH==5){
        printf("Le verbe etre a la deuxieme personne du troisieme se conjugue : Vous etes \n");
    }
    if (CH==6){
        printf("Le verbe etre a la troisieme personne du troisieme se conjugue : Ils sont  \n");
    }


}