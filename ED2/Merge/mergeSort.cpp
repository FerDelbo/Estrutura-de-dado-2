#include <iostream>
#include "merge.cpp"
void mergeSort(int* v, int e, int d){
    if(e<d){
        int m = (e+d)/2;
        mergeSort(v, e, m);
        mergeSort(v, m+1, d);
        merge(v, e, m, d);
    }
}