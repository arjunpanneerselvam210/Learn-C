#include<stdio.h>
#include<stdlib.h>

int SubmatrixSum(int **arr , int n , int m , int *queries){
    int sum = 0;
    for(int i = queries[0] - 1 ; i < queries[2] ; i++){
        for(int j = queries[1] - 1 ; j < queries[3] ; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int main(){
    int n , m;
    scanf("%d %d",&n , &m);
    int **arr = (int**)malloc(n * sizeof(int*));
    for(int i = 0 ; i < n ; i++)
        arr[i] = (int*)malloc(m * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int query;
    scanf("%d", &query);
    int **queries = (int**)malloc(query * sizeof(int*));
    for(int i = 0 ; i < query ; i++)
        queries[i] = (int*)malloc(4 * sizeof(int));
    for(int i = 0 ; i < query ; i++){
        for(int j = 0 ; j < 4 ; j++){
            scanf("%d" , &queries[i][j]);
        }
    }
    for(int i = 0 ; i < query ; i++){
        printf("%d\n" , SubmatrixSum(arr , n , m , queries[i]));
    }
    return 0;
}