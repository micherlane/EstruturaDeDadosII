#include <iostream>

using namespace std;

typedef int TipoItem;

struct arvore {
    TipoItem item;
    arvore* esquerda;
    arvore* direita;
};

class Arvore{
    private:
        
    public:
        arvore* raiz;
        Arvore();
        arvore* adicionarNo(TipoItem item, arvore* esquerda, arvore* direita);
        void imprimirArvore(arvore* noRaiz);
        int getAltura(arvore* noRaiz);
        void imprimirEmNivel(arvore* noRaiz);
};