#include <stdio.h>
#include <stdlib.h>
#include "listaencadeada.h"
#include "listatv4.h"

int main(int argc, char* argv[]){

    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* Hc = copiarlista(H);
    

    imprimirlista(H);
    printf("\n copia\n");
    imprimirlista(Hc);

    H->proximono->valor = 'X';
    Hc->valor = 'U';

    printf("\n");
    imprimirlista(H);
    printf("\n copia\n");
    imprimirlista(Hc);

    liberarlista(Hc);

    printf("\n qtd = %d", quantidadenos(H));

    printf("\n E existe na lista? %d", verificarexixtencia(H, 'E'));
    printf("\n E ocorre qnts vezes na lista? %d\n", verificarocorrencias(H, 'E'));

    imprimirinversa(H);

    inserirnoi(&H, no('Z', NULL), 0);
    printf("\n");
    imprimirlista(H);
    exit(0);
}