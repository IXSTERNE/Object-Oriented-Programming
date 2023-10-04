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

    for(int i = 1; i < n; i++){
        if(new_max < *(A + i)){
            new_max = *(A + i);
        }
    }
    std::cout << std::endl;
    std::cout << "Max: ";
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

    for(int i = 1; i < n; i++){
        result = gcdJunior(*(A + i), result);
        if(result == 1){
            std::cout << std::endl;
            std::cout << "Greatest common denominator : ";
            return 1;
        } 
    }
    std::cout << std::endl;
    std::cout << "Greatest common denominator : ";
    return result;
}

int * concat(int *A, int n, int *B, int m){

    for(int i = 0; i < m; i++){
        *(A + n + i) = *(B + i);
    }
    std::cout << std::endl;
    std::cout << "Concatenation : ";
    return A;
}

int * subarray(int *A, int n, int start, int len){

    std::cout << "Subarray : ";

    for(int i = 0; i < len; i++){
        return (A + start + i);
    }
}

int * add(int * A, int n, int p, int e){

    for(int i = n; i > p; i--){
        *(A + i) = *(A + i - 1);
    }
    *(A + p) = e;
    std::cout << "Added " << e << " to the array: ";
    return A;
}

int * del(int *A, int n, int p){

    std::cout << "Deleted the element " << *(A + p) << " from the array: ";
    for(int i = p; i < n - 1; i++){
        *(A + i) = *(A + i + 1);
    }
    return A;
}