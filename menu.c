//
// Created by Zakaria NYA on 05/01/2022.
//

#include <stdlib.h>
#include <stdio.h>



void menu(){
    char rep;
    do{
        printf(" \n"
               "\t                  -----------------------------\n           "
               "              |      Les votes             |\n          "
               "               |                            |\n          "
               "                -----------------------------\n           "
               " \n"
               " ----------------------------------------------------------\n"
               "|  ->1) methodes de condorcet                              |\n"
               "|  ->2) condorcet minimax                                  |\n"
               "|  ->3) condorcet schulze                                  |\n"
               "|  ->4) uninominales                                       |\n"
               "|  ->0) Quitter                                            |\n"
               " ----------------------------------------------------------\n");
    } while (rep!=0);
    scanf("%c", &rep);

    switch (rep) {
        case '1' :
            printf("appel methode condorcet");
            break;
        case '2' :
            printf("appel methode minmax");
            break;
        case  '3':
            printf("appel methode schulze");
            break;
        case '4':
            printf("appel method uninominales");
            break;
    }
}

int main() {
    menu();
    return 0;
}