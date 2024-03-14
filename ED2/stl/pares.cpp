#include <iostream>
#include <vector>
using namespace std;

vector<int>* pares(const vector<int>& vec){
    vector<int>* aux = new vector<int>();

    for(int e : vec){
        if(e%2 == 0){
            //cout<< e << ", ";
            aux->push_back(e);
        }
    }
    return aux;
}

int main(){
    vector<int> v1 = {0, 2, 1, 4, 7};
    vector<int>* v2 = pares(v1);
    for(int i : *v2){
        cout<< i << ", ";
    }
    cout<<"\n";
    //pares(v);

    return 0;
}