#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void saddlePointFinder(int **arr , int n , int m){
    int *row = (int*)malloc(n * sizeof(int));
    int *col = (int*)malloc(m * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        int min = INT_MAX;
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] < min) 
                min = arr[i][j];
        }
        row[i] = min;
    }
    for(int j = 0 ; j < m ; j++){
        int max = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(arr[i][j] > max)
                max = arr[i][j];
        }
        col[j] = max;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] == row[i] && arr[i][j] == col[j])
                printf("%d" , arr[i][j]);
        }
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
    saddlePointFinder(arr , n , m);
    return 0;
}