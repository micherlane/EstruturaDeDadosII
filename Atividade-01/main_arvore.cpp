#include <iostream>
#include <cstddef>
#include "arvore.cpp"

using namespace std;

int main(){
    Arvore* arv = new Arvore();
    
    /*arvore* noArvE = arv->adicionarNo(6, NULL, NULL);
    arvore* noArvF = arv->adicionarNo(3, NULL, NULL);
    arvore* noArvC = arv->adicionarNo(5, NULL, noArvE);
    arvore* noArvD = arv->adicionarNo(2, NULL, noArvF);
    arvore* noArvB = arv->adicionarNo(1, NULL, noArvD);
    arvore* noArvA = arv->adicionarNo(4, noArvB, noArvC);*/

    arvore* noArvE = arv->adicionarNo(6, NULL, NULL);
    arvore* noArvF = arv->adicionarNo(5, NULL, NULL);
    arvore* noArvC = arv->adicionarNo(4, NULL, NULL);
    arvore* noArvD = arv->adicionarNo(3, NULL, noArvE);
    arvore* noArvB = arv->adicionarNo(2, noArvC, noArvF);
    arvore* noArvA = arv->adicionarNo(1, noArvB, noArvD);
    

    /*arv->imprimirArvore(noArvA);
    cout << arv->getAltura(noArvA);
    cout << endl;*/

    cout << "Imprimir Arvore" << endl;
    arv->imprimirArvore(noArvA);
    cout << endl << endl;

    cout << "Imprimir em Nivel" << endl;
    arv->imprimirEmNivel(noArvA);
    cout << endl << endl;   

    return 0;
}


