#include <iostream>

class No{
    friend class Lista;//Faz com que a classe lista possa acessar os componentes privados da outra classe
public:
    No(int);
    void imprimir();
private:    
    int dado;
    No * proximo;
};

class Lista{
private:
    int tamanho;
    No* primeiro;
    No* ultimo;

public:
    Lista();
    ~Lista();
    bool vazia(){
        return this-> tamanho == 0;//Por se tratar de uma condição ele já vai retornar TRUE ou FALSE
    }
    void inserir(int);
    void imprimir();

};