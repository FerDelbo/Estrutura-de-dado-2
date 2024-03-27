#include <iostream>
#include <stdlib.h>

int* gerar_aleatorio(int n, int max, int seed){
    srand(seed);
    int* v = new int [n];
    for(int i = 0; i < n; i++){
        v[i] = rand() % max;
    }
    return v;
}


template <typename T>
int posMin(T* vec, int inicio, int fim){
    int menor = inicio;
    for (int i = inicio + 1; i <= fim; i++){
        if(vec[i] < vec[menor]){
            menor = i;
        }
    }
    return menor;
    
}

void troca(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

template <typename T>
void SelectionSort(T *v, int n){
    for(int i = 0; i < n-1; i++){
        int posMenor = posMin(v, i, n-1);
        troca(v[i], v[posMenor]);
    }
}

void imprimir(int *v, int tam){
    for(int i = 0; i < tam; i++){
        std::cout<< v[i] << " ";
    }
    std::cout << "\n";

     
}

int main(int argc, char** argv){
    
    //int vec[] = {3, 0, 4, 2, 5, 1};
    //int n = 6
    int n = std::atoi(argv[1]);
    int* vec = gerar_aleatorio(n, n*100, 99);
    //imprimir(vec, n);
    SelectionSort(vec, n);
    imprimir(vec, n);

}