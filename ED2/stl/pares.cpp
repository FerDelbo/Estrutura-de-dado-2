#include <iostream>
#include <vector>
using namespace std;

void pares(vector<int> vec){
    for(int e : vec){
        if(e%2 == 0) cout<<e<<", ";
    }
    cout<<"\n";
}

int main(){
    vector<int> v = {0, 2, 1, 4, 7};

    pares(v);

    return 0;
}