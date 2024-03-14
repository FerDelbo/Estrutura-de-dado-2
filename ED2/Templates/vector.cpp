#include <vector>
#include <iostream>

int main(){
    using namespace std;

    vector<int> v;
    v.reserve(100);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout << v.size() << " elementos\n";
    cout << v.capacity() << " espaçes pre-alocados\n";

    for(int e : v){
        cout << e << ", ";
    }
    cout<<"\n";
}