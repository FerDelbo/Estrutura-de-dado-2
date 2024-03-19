#include <iostream>

int fibonacciRecursivo(int n){
    if(n == 0 || n == 1) return 1;
    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
};

int fibonacciInterativo(int n){
    int n1 = 1; //n-1
    int n2 = 0; //n-2
    for (int i = 0; i < n; i++){
        int temp = n1 + n2;
        n2 = n1;
        n1 = temp;
    }
    return n1;
    
    
}

int main(){
    using namespace std;
    cout <<"Fibonacci recursivo: "<< fibonacciRecursivo(5) << "\n";
    cout <<"Fibonacci interativo: "<< fibonacciInterativo(1) << "\n";
    return 0;
}