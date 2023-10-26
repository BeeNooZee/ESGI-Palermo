#include <stdio.h>
#include "TP1.h"

void MenuTP1() {

    int CH=0;

    printf("MenuTP1\n");
    printf("Que voulez vous utiliser ? (1 = TP1.1 | 2 = TP1.2 | 3 = TP1.3 | 4 = TP1.4 |5 = TP1.5 )\n");
    scanf("%d",&CH);

    if(CH==1) {
        TP1_1();
    }
    if(CH==2){
        TP1_2();
    }
    if(CH==3) {
        TP1_3();
    }

    if(CH==4) {
        TP1_4();
    }
    if(CH==5) {
        TP1_5();
    }
}


