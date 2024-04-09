#include <stdio.h>
#include <stdlib.h>


    int main(int argc, char* argv[]){

        FILE *fp = fopen (argv[1], "r");

        if(fp == NULL){
            printf("ERRO ao abrir o arquivo %s\n", argv[1]);
            exit(1);
        }


        int *vetor_n;
        int qtd_n = 0;
        int i;
        while( fscanf(fp, "%d\n", &i) != EOF){
            qtd_n++;
        }
        vetor_n = malloc(sizeof(int)*qtd_n);

        rewind(fp);

        i = 0;
        while( fscanf(fp, "%d\n", &vetor_n[i]) != EOF){
            i++;
        }

        fclose(fp);

        bubble_sort(vetor_n, qtd_n);

        FILE* arq_saida = fopen("saida.txt", "w");
        if(arq_saida == NULL){
            printf("ERRO ao abrir arquivo");
            exit(1);
        }

        for(i = 0; i < qtd_n; i++){
            printf("%d ", vetor_n[i]);
        }

        exit(0);
    }