#include <iostream>
#include <cstddef>
#include "arvore.h"

using namespace std;

Arvore::Arvore(){
    raiz = NULL;
}

arvore* Arvore::adicionarNo(arvore *esquerda, TipoItem item, arvore *direita){
    arvore* novaArvore = new arvore;    

    novaArvore->item = item;
    novaArvore->direita = direita;
    novaArvore->esquerda = esquerda;
    
    return novaArvore;
}

void Arvore::imprimirArvore(arvore* arvore){
    if(arvore == NULL){
        cout<< "<>";
        return ;
    }else {
        cout<<"<";
        cout << arvore->item << " ";
        imprimirArvore(arvore->esquerda);
        imprimirArvore(arvore->direita);
        cout<<">";
    }
   
}


int Arvore::getAltura(arvore* noRaiz){
    if(noRaiz ==  NULL){
        return 0;
    } else {
        int esquerda = getAltura(noRaiz->esquerda);
        int direita = getAltura(noRaiz->direita);

        if(esquerda > direita)
            return esquerda+1;
        else
            return direita+1;
    }
}

void imprimirNivel(arvore* noRaiz, int nivel){
    if(noRaiz == NULL)
        return;
    if(nivel == 1){
        cout << noRaiz->item << " ";
    }else if (nivel > 1){
        imprimirNivel(noRaiz->esquerda, nivel - 1);
        imprimirNivel(noRaiz->direita, nivel - 1);
    }
}

void Arvore::imprimirEmNivel(arvore* noRaiz){
    int altura = getAltura(noRaiz);
    int i;
    for(i = 1; i <= altura; i++){
        imprimirNivel(noRaiz, i);
    }
   
}


int Arvore::totalDeFolhas(arvore* noRaiz){
   if(noRaiz == NULL){
        return 0;
   }else if(noRaiz->item != NULL && noRaiz->esquerda==NULL && noRaiz->direita == NULL){
        return 1;
   }else{
        int folhas = totalDeFolhas(noRaiz->esquerda);
        folhas += totalDeFolhas(noRaiz->direita);
        return folhas;
   }
}

bool Arvore::temItem(arvore* noRaiz, TipoItem item){
    if(noRaiz == NULL){
        return 0;
    }else if(item == noRaiz->item){
        return 1;
    }else if(item < noRaiz->item){
        return temItem(noRaiz->esquerda, item);
    }else{
        return temItem(noRaiz->direita, item);
    }
}

