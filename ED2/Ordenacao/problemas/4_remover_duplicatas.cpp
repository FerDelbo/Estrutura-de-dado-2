#include <stdlib.h>
#include <algorithm>
#include <iostream>

#include "utils.h"

#define DEBUG 1

// retorna um vetor com os elementos de v, sem duplicatas.
// os elementos no vetor de saída não precisam preservar a ordem da entrada.
std::vector<int> remover_duplicatas(std::vector<int> &v){
    std::vector<int> s;
    std::sort(v.begin(), v.end());
    if(v.size() == 0) return s;
    for(int i = 1; i < v.size(); i++){
        if(v[i-1] != v[i]) s.push_back(v[i-1]);

    }
    if(s[s.size()] != v[v.size()]){ //tratar ultimo elemento
        s.push_back(v[v.size()]);
    }
    return s;
}

int main(int argc, char** argv){
    int n = atoi(argv[1]);

    std::vector<int> v = gerar_vetor_aleatorio(n, 42, n * 10);

    #if DEBUG
    imprimir_vetor(v.data(), n);
    #endif

    std::vector<int> res = remover_duplicatas(v);

    std::cout << "O vetor sem duplicatas contém " << res.size() << " elementos:\n";
    imprimir_vetor(res.data(), res.size());

    return EXIT_SUCCESS;

}
