#include <iostream>

int mult(int a, int b){
    if(a == 1) return b; //Caso base: quando a for 1 consiguimos ter quantas vezes ira ocorrer a soma  
    if(a == 0 || b == 0) return 0; //Caso base: caso a multiplicação for com 0
    return mult(a-1, b) + b;
};

int main(){

    using namespace std;
    cout<<mult(5,5)<<"\n";

    return 0;
}