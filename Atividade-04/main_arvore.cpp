#include <iostream>
#include <cstddef>
#include "arvore.cpp"

using namespace std;

int main(){
    Arvore* arv = new Arvore();
    Arvore* arv1 = new Arvore();
    
    arvore* noArvF1 = arv->adicionarNo( NULL, 3, NULL);
    arvore* noArvE1 = arv->adicionarNo( NULL, 6, NULL);
    arvore* noArvD1 = arv->adicionarNo( NULL, 2, noArvF1);
    arvore* noArvC1 = arv->adicionarNo( NULL, 5, noArvE1);
    arvore* noArvB1 = arv->adicionarNo( NULL, 1, noArvD1);
    arvore* noArvA1 = arv->adicionarNo(noArvB1, 4, noArvC1);

  
    arvore* noArvE = arv->adicionarNo( NULL, 6, NULL);
    arvore* noArvF = arv->adicionarNo( NULL, 5, NULL);
    arvore* noArvC = arv->adicionarNo( NULL, 4, NULL);
    arvore* noArvD = arv->adicionarNo( NULL, 3, noArvE);
    arvore* noArvB = arv->adicionarNo( noArvC, 2, noArvF);
    arvore* noArvA = arv->adicionarNo( noArvB, 1, noArvD);
    

    /*arv->imprimirArvore(noArvA);*/
    cout << "Tamanho da Arvore" << endl;
    cout << arv->getAltura(noArvA);
    cout << endl << endl;

    cout << "Imprimir Arvore" << endl;
    arv->imprimirArvore(noArvA);
    cout << endl << endl;

    cout << "Imprimir em Nivel" << endl;
    arv->imprimirEmNivel(noArvA);
    cout << endl << endl;   


    cout << "Total de Folhas" << endl;
    cout << arv->totalDeFolhas(noArvA);
    cout << endl << endl;

    cout << "Verificar Existencia de Item na Arvore 1" << endl;
    cout << "Tem o valor 7 na arvore? ";
    cout << arv1->temItem(noArvA1, 7);
    cout << endl;

    cout << "Tem o valor 2 na arvore? ";
    cout << arv1->temItem(noArvA1, 2);
    
    return 0;
}


