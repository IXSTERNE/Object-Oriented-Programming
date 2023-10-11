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

    int k = n + m;
    int *C = new int[k];
    int j = 0;

    for(int i = 0; i < n; i++){
        *(C + i) = *(A + i);
    }
    for(int i = n; i < k; i++){
        *(C + i) = *(B + j);
        j++;
    }

    std::cout << std::endl;
    std::cout << "Concatenation : ";
    return C;
}

int * subarray(int *A, int n, int start, int len){

    int *B = new int[len];

    std::cout << "Subarray : ";

    for(int i = 0; i < len; i++){
        *(B + i) = *(A + start + i);
    }
    return B;
}

int * add(int * A, int n, int p, int e){

    int m = n;
    int *B = new int[m];

    for(int i = 0; i < m; i++){
        *(B + i) = *(A + i);
    }

    for(int i = m; i > p; i--){
        *(B + i) = *(B + i - 1);
    }
    *(B + p) = e;

    std::cout << "Added " << e << " to the array: ";
    return B;
}

int * del(int *A, int n, int p){

    int *B = new int[n];

    std::cout << "After deleting : ";

    for(int i = 0; i < n; i++){
        *(B + i) = *(A + i);
    }

    for(int i = p; i < n; i++){
        *(B + i) = *(B + i + 1);
    }
    return B;
}