typedef struct No{
    char valor;
    struct No* proximono;
}No;

No* no(char valor, No* proximo_no);
void inserirno(No* H, No* no);
void imprimirlista(No* H);
int quantidadenos(No* H);
No* copiarlista(No* H);
void liberarlista(No* H);
int verificarexistencia(No* H, chr valor_busca);
int verificarocorrencias(No* H, chr valor_busca);
void imprimirinversa(No* H);
void inserirnoi(No* H, No* no, int i);