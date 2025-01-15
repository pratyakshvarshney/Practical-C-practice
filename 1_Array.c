//1. Insert, Delete, and Traverse Elements in an Array

#include <stdio.h>

void print(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insert(int arr[], int n, int pos, int ele){
    for(int i=n-1; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele;
}

void delete(int *arr, int n, int pos){
    for(int i=pos-1; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = 0;
}


int main() {
    int a[] = {1, 2, 5, 8};
    print(a, 4);
    insert(a, 4, 4, 6);
    print(a, 4);
    delete(a, 4, 3);
    print(a, 4);

    return 0;
}
