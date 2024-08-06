#include <iostream>

class No{
    int dado;
    No* esq;
    No* dir;
    void No::percurso_em_ordem(No* n){
        if(n == nullptr) return;

        std::cout << n->dado << ", ";   //print pŕe ordem
        n->percurso_em_ordem(n->esq);
        //std::cout << n->dado << ", "; //print em-ordem
        n->percurso_em_ordem(n->dir);
        //std::cout << n->dado << ", "; //print pos-ordem
    }
};