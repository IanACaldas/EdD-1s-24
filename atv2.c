#include <stdio.h>
#include <stdlib.h>

    int main (int argc, char* argv[]) {


// atoi = transformar string em um inteiro (argv[1] passa de uma string pra um numero inteiro "N")
        int n = atoi(argv[1]);

        if(n <= 1){
            printf("//false");
            exit(0);
        }

        if((n != 2) && (n % 2 == 0)){
            printf("//false");
            exit(0);
        }

        for(int i = 3; i < n; 3 + 2){
            if(n % i == 0) {
                printf("//false");
                exit(0);
            }
        }


        printf("//true");
        exit(0);
    }