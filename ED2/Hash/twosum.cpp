#include <unordered_set> //hash com chave apenas
#include <unordered_map> //haxh com chave -> valor
#include <vector>
#include <iostream>
using namespace std;

bool twosum(vector<int>& v, int x){
  
    unordered_set<int> h;

    for(int el : v){
        h.insert(el);
    }

    for(int el : v){
        if(h.count(x-el)) return true; //o metodo cout busca se o elemento existe na tabela, retornando true ou false
    }
    
    return false;
}


int main(){
    vector<int> v = {2,1,0,4,3,7};
    int x = 10;
    bool saida = twosum(v, x);

    cout << "existem dois elementos quando soamdos são iguais a " << x << "? " << saida << "\n";

    return 0;
}