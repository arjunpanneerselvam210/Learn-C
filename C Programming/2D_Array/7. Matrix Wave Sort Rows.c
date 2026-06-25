#include<stdio.h>
#include<stdlib.h>

void display(int **arr , int n , int m){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
}

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rSort(int *arr , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] < arr[j + 1])
                swap(&arr[j] , &arr[j + 1]);
        }
    }
}

void Sort(int *arr , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j + 1])
                swap(&arr[j] , &arr[j + 1]);
        }
    }
}

void waveSort(int **arr , int n , int m){
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0)
            Sort(arr[i] , m);
        else
            rSort(arr[i] , m);
    }
}

int main(){
    int n , m;
    scanf("%d %d",&n,&m);
    int **arr = (int**)malloc(n * sizeof(int*));
    for(int i = 0 ; i < n ; i++)
        arr[i] = (int*)malloc(m * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    waveSort(arr , n , m);
    display(arr , n , m);
    return 0;
}