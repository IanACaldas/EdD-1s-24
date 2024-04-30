typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* no(char valor, No* proximo_no);

void inserirno(No* H, No* no);

void imprimirlista(No* H);

int quantidadenos(H* H);

No* copiarlista(No* H);

void liberarlista(No* H);

No* copiarlista(No* H);