
struct Matriz
{
    int num;
    int tamanhoKick;
    int tamanhoKick2;
    int **vetor1;
    char **vetor2;
    int **vetorKick;
    int incidencia [81][2];
    int numeros [16];
    int dim = 25;
    int aux,aux2;

};
struct Number
{
    int grafo [26][26];
    int posicao;
    int n;
};


void palpite();
void print();
void chute(Matriz *p);
void order(Matriz *p);
void printNumKick(Matriz *p);
void aloca(FILE *f, Matriz *p);
void conta_incidencia(Matriz *p);
int procura_numero(int n, Matriz *p);
void carrega_matriz(char *arquivo,char *f,Matriz *p);
int scan(Matriz *p,int i,int numero);
void repeat(Matriz *p);
void preenche(Matriz *p, Number *numero);
void selectionsort(int values[],int n);

