#include "lab2.hh"
#include <iostream>

void read(int *A, int n){
    for(int i = 0; i < n; i++){
        std::cin >> A[i];
    }
}

void print(int *A, int n){
    for(int i = 0; i < n; i++){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int max(int *A, int n){
    int new_max = *A;
    int i;
    for(i = 1; i < n; ++i){
        if(new_max < *(A + i)){
            new_max = *(A + i);
        }
    }
    return new_max;
}

int gcdJunior(int a, int b){
    if(a == 0){
        return b;
    }
    return gcdJunior(b % a, a);
}

int gcd(int *A, int n){

    int result = *A;
    int i;

    for(i = 1; i < n; ++i){
        result = gcdJunior(*(A + i), result);
        if(result == 1){
            std::cout << std::endl;
            return 1;
        } 
    }
    std::cout << std::endl;
    return result;
}

int * concat(int *A, int n, int *B, int m){
    return 0;
}

int * subarray(int *A, int n, int start, int len){
    return 0;
}

int * add(int * A, int n, int p, int e){
    return 0;
}

int * del(int *A, int n, int p){
    return 0;
}