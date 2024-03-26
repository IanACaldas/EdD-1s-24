#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {

    int menor_n = argv[1], maior_n = argv[1];
    int quant_n = argc - 1, soma_n = 0;
    float med_n;
    int vetor_n[quant_n];

for( int i = 1; i <= quant_n; i++){

        soma_n += argv[i];


            if (numero < menor_n)
                menor_n = argv[i];
            if (numero > maior_n)
                maior_n = argv[i];
    }

    // (float) = faz o pc entender q é uma operação em float
    med_n = (float) soma_n / quant_n;

    for(int i = 0; i < quant_n - 1; i++){
            for(int j = i; j < quant_n; j++){
                if(vetor_n[i] > vetor_n[j]){
                    int aux = vetor_n[j];
                    vetor_n[j] = vetor_n[i];
                    vetor_n[i] = aux;
            }
        }
    }

    printf("Quantidade de números: %d\n", quant_n);
    printf("Média dos números: %.2f\n", med_n);
    printf("Menor número: %d\n", menor_n);
    printf("Maior número: %d\n", maior_n);
    printf("Números em ordem crescente: ");
        for (int i = 0; i < quant_n; i++) {
        printf("%d ", vetor_n[i]);
    }

    return 0;
}