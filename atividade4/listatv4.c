#include <stdio.h>
#include <stdlib.h>
#include "listaencadeada.h"

No* no(char valor, No* proximono){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximono = proximono;
    return no;
}

void inserirno(No* H, No* no){
    if(H != NULL){
        if( H->proximono == NULL){
            H->proximono = no;
        }
        else{
            inserirno(H->proximono, no);
        }
    }
}

void imprimirlista(No* H){
    if(H != NULL){
        printf("%c ", H->valor);
        imprimirlista(H->proximono);

    }
}

int quantidadenos(No* H){
    if( H != NULL){
        return 1 + quantidadenos(H->proximono);
    }
    return 0;
}

No* copiarlista(No* H){
    if(H != NULL){
        return no(H->valor, copiarlista(H->proximono));
    }
    return NULL;
}

void liberarlista(No* H){
    if(H != NULL){
        liberarlista(H->proximono);
        free(H);
        H = NULL;
    }
}

int verificarexistencia(No* H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1;
        }
        return verificarexistencia(h->proximono, valor_busca);

    }
    return 0;
}

int verificarocorrencias(No* H, chr valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1 + verificarocorrencias(H->proximono, valor_busca);
        }
        return 0 + verificarocorrencias(H->proximono, valor_busca);
    }
    return 0;
}
   
void imprimirinversa(No* H){
    if(H 1= NULL){
        printf("%c ", H->valor);
        imprimirlista(H->proximono);
    }
}

void inserirnoi(No* H, No* no, int i){
    if(H 1= NULL){

        if(i == 0){
            no->proximono = H->proximono;
            
        }
    }
            }
        

    