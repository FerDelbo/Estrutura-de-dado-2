#include <iostream>
using namespace std;


void imprimirBianario(int n){ //meu código
    if(n== 0 || n== 1){ //Caso 1 -> se for 0 ou 1
      cout<<n;  
    }else if(n/2 == 1){ //Caso base = achar o ultimo para imprimir o numero e o resto 
        cout<< n/2;
        cout<< n%2;
    }else{
        imprimirBianario(n/2);
        cout<<n%2; // imprimi os restos    
    } 
}

void ib(int n){ //codigo professor 
    if(n<=1) cout<<n;
    else{
        ib(n/2);
        cout<<n%2;
    }
}

int main(){
    imprimirBianario(5);
    cout<<"\n";

    return 0;
}