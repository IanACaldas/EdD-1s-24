typedef struct No{
    char valor;
    struct No* proximono;
} No;

No* no(char valor, No* proximono);

void inserirno(No* H, No* no);

void imprimirlista(No* H);

int quantidadenos(H* H);

No* copiarlista(No* H);

void liberarlista(No* H);

No* copiarlista(No* H);