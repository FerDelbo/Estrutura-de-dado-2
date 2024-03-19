#include <iostream>

int MDCRecursivo(int x, int y){
    if(y<=x && x%y==0) return y; 
    else if(x<y) return MDCRecursivo(y,x);
    return MDCRecursivo(y,x%y);
}

int mdcInterativo(int x, int y){

}

int main(){
    using namespace std;

    cout<< "mdc recursivo: " << MDCRecursivo(30,42) << "\n"; 
    cout<< "mdc interativo: " << MDCRecursivo(30,42) << "\n"; 
}