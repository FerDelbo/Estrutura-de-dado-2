#include <unordered_map>
#include <vector>
#include <iostream>
#include <utility>
using namespace std;

int elementoMajoritario(vector<int>& v){
    unordered_map<int,int> h;

    /*for(int el: v){
        h[el]++;
    }*/
    for(int x : v){
        if(h.count(x) == 0){
            h.insert(make_pair(x, 1));
        }else{
            h[x]++;
        }
     }

    for(auto& par : h){
        if(par.second > v.size()/2) return par.first;
    }

    return -1; //supondo que não possa usar numeros negativos
}

int main(){

    vector<int> v = {1,2,3,4,2,2};

    int maj = elementoMajoritario(v);
    if(maj != -1) cout << "o elemento majoritario é o " << maj<<"\n";
    else cout<<"Não há elemento majoritarios\n";

    return 0;
}