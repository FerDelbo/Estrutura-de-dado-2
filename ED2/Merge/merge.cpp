#include <iostream>

void merge(int* v, int p, int q, int r){
    //1) calcular o tamanho de E e D
    int tamE = q-p+1;
    int tamD = r-q;
    //2) alocar E e D do tamanho adequado
    int* e = new int[tamE];
    int* d = new int[tamD];
    //3) copiar os elementos entre p...q em E
    for(int i = 0; i < tamE; i++)
        e[i] = v[p+i];
    //4) copiar o elementos entre q+1...r em D
    for (int j = 0;  j < tamD; j++)
        d[j] = v[q+1+j];
    //5) intercalar os elementos em E e D em v
    int posE = 0;
    int posD = 0;
    int k = p;
    while((posD < tamD) && (posE < tamE)){
        if(e[posE]<= d[posD]){
            v[k] = e[posE];
            posE++;
        }else{
            v[k] = d[posD];
            posD++;
        }
        k++;
    }
    //6) copiar os elementos restante em E ou D em v
    while(posD<tamD){
        v[k] = d[posD];
        posD++;
        k++;
    }
    while(posE<tamE){
        v[k] = e[posE];
        posE++;
        k++;
    }
    delete[] e;
    delete[] d;
}

int main(){
    int n = 6;
    int v[] = {3, 5, 6, 0, 4, 7};
    merge(v, 0, 2, 5);
    for(int i = 0; i < n; i++)
        std::cout << v[i] << ", ";
    std::cout << "\n";
    return 0;
}