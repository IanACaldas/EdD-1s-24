#include <stdio.h>
#include <stdlib.h>
#include "listaencadeada.h"

    int main(int argc, char* argv[]){

        No* H = no('A', NULL);
        No* n2 = no('B', NULL);
        No* n3 = no('C', NULL);
        No* n4 = no('J', NULL);
        No* n5 = no('Y', NULL);

        inserirno(H, n2);
        inserirno(H, n3);
        inserirno(H, n4);
        inserirno(H, n5);

        imprimirlista(H);

        printf("\n qtd = %d", quantidadenos(H));

        exit(0);
    }