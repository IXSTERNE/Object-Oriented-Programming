#include <iostream>
using namespace std;

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
            return 1;
        } 
    }
    return result;
}

int * concat(int *A, int n, int *B, int m){

}

int main(){
    int n = 5;
    int A[] = {6, 8, 12, 16, 8};
    cout << "Max:" << max(A, n) << endl;
    cout << "Greatest common denominator: " <<gcd(A, n) << endl;
    
    return 0;
}


