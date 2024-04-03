#include<iostream>

void troca(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int* v, int p, int r){
    int x = v[r];
    int i = p-i;

    for(int j = p; j<r; j++){
        if(v[j] <= x){
            i++;
            troca(v[i], v[j]);
        }
    }
    troca(v[i+1], v[r]);
    return i+1;
}

int* gerar_aleatorio(int n, int max, int seed){
    srand(seed);
    int* v = new int [n];
    for(int i = 0; i < n; i++){
        v[i] = rand() % max;
    }
    return v;
}

void quickSort(int* v, int inicio, int final){
    if(inicio < final){
        int pivo = partition(v, inicio, final);
        quickSort(v, inicio, pivo - 1); //Parte direita (menor)
        quickSort(v, pivo+1, final); //Parte esquerda (maior)
    }
}

void QuickSort(int* v, int n){
    quickSort(v, 0, n-1);
}

void imprimir(int* v, int tam){
    for (int i = 0; i < tam; i++){
        std::cout<< i << " ";
    }
    std::cout<<"\n";
}

int main(int argc, char** argv){
    int n = std::atoi(argv[1]);
    int* vec = gerar_aleatorio(n, n*100, 0);
    QuickSort(vec, n);
    imprimir(vec, n);
}