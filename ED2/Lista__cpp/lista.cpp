#include "lista.h"
using namespace std;


//Construtor da classe no
No::No(int dado){
    this->dado = dado;
    this->proximo = nullptr;
}

void No::imprimir(){
    cout << this->dado << ", ";
}

Lista::Lista(){
    this->primeiro = nullptr;
    this->ultimo = nullptr;
    this->tamanho = 0;
}

Lista::~Lista(){
    cout<<"Destrutor chamado\n";
    No* aux = this->primeiro;
    while(aux != nullptr){
        No* del = aux;
        aux = aux->proximo;
        delete del;
    }
}

void Lista::inserir(int dado){
    No* novo;
    novo = new No(dado);
    if(this->vazia()){///caso 1: Lista vazia, insere no primiro elemento
        this->primeiro = novo;   
    }else{//Caso 2: Lista contem um ou mais elementos
        this->ultimo->proximo = novo;
    }
    //atualiza a ultima posição
    this->ultimo = novo;
    //atualiza o tamanho
    this->tamanho++;
}

void Lista::imprimir(){
    for(No* p = this->primeiro; p!= nullptr; p = p->proximo){
        p->imprimir();
    }
}