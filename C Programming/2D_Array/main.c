#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX(a , b) ((a) > (b) ? (a) : (b))
#define MIN(a , b) ((a) < (b) ? (a) : (b))

void printMatrix(int **arr , int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

int *rowMax(int **arr , int n){
    int *resMax = (int*)malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        int max = arr[i][0]; 
        for(int j = 0 ; j < n ; j++){
            max = MAX(max , arr[i][j]);
        }
        *(resMax + i) = max;
    }
    return resMax;
}

int *rowSum(int **arr , int n){
    int *rowSum = (int*)malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        int sum = 0;
        for(int j = 0 ; j < n ; j++){
            sum += *(*(arr + i) + j);
        }
        *(rowSum + i) = sum;
    }
    return rowSum;
}

int *colSum(int **arr , int n){
    int *colSum = (int*)malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        int sum = 0;
        for(int j = 0 ; j < n ; j++){
            sum += *(*(arr + j) + i);
        }
        *(colSum + i) = sum;
    }
    return colSum;
}

int *colMax(int **arr , int n){
    int *resMax = (int*)malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        int max = *(*(arr + i));
        for(int j = 0 ; j < n ; j++){
            max = MAX(max , *(*(arr + j) + i));
        }
        *(resMax + i) = max;
    }
    return resMax;
}

int main(){
    int n;
    scanf("%d" , &n);
    int **arr = (int**)malloc(n * sizeof(int*));
    for(int i = 0 ; i < n ; i++){
        *(arr + i) = (int*)malloc(n * sizeof(int));
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d" , (*(arr + i) + j));
        }
    }
    // printMatrix(arr , n);
    int *rowMaxArr = colSum(arr , n);
    for(int i = 0 ; i < n ; i++){
        printf("%d " , *(rowMaxArr + i));
    }
    return 0;
}