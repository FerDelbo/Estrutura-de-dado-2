#include<iostream>
#include <stdint.h>
using namespace std;

uint64_t fat(int n){
    if(n==1) return 1;
    return n * fat(n-1);
}

int main(int argc, char** argv){
    int n = std::atoi(argv[1]);

    cout << fat(n) << "\n";
}