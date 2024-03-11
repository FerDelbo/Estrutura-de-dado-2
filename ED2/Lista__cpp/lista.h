#include <iostream>

class No{
    friend class Lista;
public:
    No(int);
    void imprimir();
private:    
    int dado;
    No * proximo;
};

class Lista{
public:
    Lista();
    bool vazia(){
        return this-> tamanho == 0;//Por se tratar de uma condição ele já vai retornar TRUE ou FALSE
    }
    void inserir(int);
    void imprimir();

private:
    int tamanho;
    No* primeiro;
    No* ultimo;
};