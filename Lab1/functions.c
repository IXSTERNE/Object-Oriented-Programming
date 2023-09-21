#include "myinclude.h"

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{     
        int i, current_max;
        current_max = A[0];
        for(i = 0; i < n; i++){
                if(A[i] > current_max){
                        current_max = A[i];
                }
        }
        return current_max;
}

int min(int A[], int n)
{
       int i, current_min;
       current_min = A[0];
       for(i = 0; i < n; i++){
                if(A[i] < current_min){
                        current_min = A[i];
                }
       }
       return current_min;
}

void copy(int A[], int n, int B[])
{
        int i;
        for(i = 0; i < n; i++){
                B[i] = A[i];
        }
}

int find(int A[], int n, int x)
{
       int i, found = -1;
       for(i = 0; i < n; i++){
                if (A[i] == x){
                        found = i;
                }
       }
       return found;
}

int make_set(int A[], int n, int B[])
{
    //Eliminate duplicates in the set by
    //basically shifting the elements to the left to 
    //until it reaches the duplicate
        int i, j, temp;
        for(i = 0; i < n; i++){
                for(j = i + 1; j < n; j++){
                        if(A[i] == A[j]){
                                for(temp = j; temp < n - 1; temp++){
                                        A[temp] = A[temp + 1];
                                }
                        n--;
                        j--;
                        }
                }
        }   
        copy(A, n, B);
        return n;
}

int union_set(int A[], int n, int B[], int m)
{
    //Put both arrays in our newly defined array new_array[]
    //Then eliminate the duplicates in the new array
       int i, j, temp, new_array[n + m], new_size;
       new_size = n + m;

       for(i = 0; i < n; i++){
                new_array[i] = A[i];
       }

       for(i = 0; i < m; i++){
                new_array[i + n] = B[i];
       }

       for(i = 0; i < new_size; i++){
                for(j = i + 1; j < new_size; j++){
                        if(new_array[i] == new_array[j]){
                                for(temp = j; temp < new_size - 1; temp++){
                                        new_array[temp] = new_array[temp + 1];
                                }
                        new_size--;
                        j--;
                        }
                }
        }
        for (i = 0; i <  new_size; i++){
                A[i] = new_array[i];
        }
        return new_size;
}


int intersection_set(int A[], int n, int B[], int m, int C[])
{   
    //Check if the array elements do intersect
    //If yes put the elements in the array C[]
        int i, j, temp, p = 0;
        for(i = 0; i < n; i++){
                for(j = 0; j < m; j++){
                        if(A[i] == B[j]){
                                C[p] = A[i];
                                p++;
                        }
                }
                
        }
    //Then eliminate the duplicates
        for(i = 0; i < p; i++){
                for(j = i + 1; j < p; j++){
                        if(C[i] == C[j]){
                                for(temp = j; temp < p - 1; temp++){
                                        C[temp] = C[temp + 1];
                                }
                        j--;
                        p--;
                        }
                }
        }
        return p;
}
