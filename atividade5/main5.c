#include <stdio.h>
#include <stdlib.h>
#include "listacircular.h"

int main(int argc, char* argv[]){

    No* H = no('A', NULL);
    inserir_no(H, 'B');
    inserir_no(H, 'C');

    imprimir_lista(H);
    printf("\n");

    remove_no(H, 'B');
    imprimir_lista(H);
    printf("\n");

    remove_no(H, 'C');
    imprimir_lista(H);
    printf("\n");

    exit(0);
}