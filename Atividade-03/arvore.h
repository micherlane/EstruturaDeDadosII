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
        arvore* adicionarNo(arvore* esquerda, TipoItem item, arvore* direita);
        void imprimirArvore(arvore* noRaiz);
        int getAltura(arvore* noRaiz);
        void imprimirEmNivel(arvore* noRaiz);
        int totalDeFolhas(arvore* noRaiz);
        bool temItem(arvore* noRaiz, TipoItem item);
        int totalDeNos(arvore* noRaiz);
};