#include <stdio.h>

void print(int a[], int n){
    int i=0;
    while(i<n)
        printf("%d ",a[i++]);
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int *a, int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n-i-1; j++)
            if(a[j] > a[j+1])
                swap(&a[j], &a[j+1]);
}

int main(){
    int a[] = {1, 2, 3, 4, 2, 56, 23, 45, 100, 98, 23, 12};
    int n = sizeof(a)/sizeof(a[0]);
    print(a, n);
    
    bubble(a, n);
    print(a, n);
    
    return 0;
}
