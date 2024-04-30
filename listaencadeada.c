#include <stdio.h>
#include <stdlib.h>
#include "listaencadeada.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void inserirno(No* H, No* no){
    if( H != NULL){
        if( H->proximo_no == NULL){
            H->proximo_no = no;
        }else{
            inserirno(H->proximo_no, no);
        }
    }
}

void imprimirlista(No* H){
    if(H != NULL){
        printf("%c ", H->valor);
        imprimirlista(H->proximo_no);
    }
}

int quantidadenos(H* H){
    if(H != NULL){
        return 1 + quantidadenos(H->proximo_no);
    }
    return (0);
}

No* copiarlista(No* H){
    if(H != NULL){
        return no(H->valor, listacopiar(H->proximo_no));
    }
    return NULL;
}

No* copiarlista(No* H){
    
}

void liberarlista(No* H){
    if(H != NULL){
        liberarlista(H->proximo_no);
        free(H);
        H = NULL;
    }
}