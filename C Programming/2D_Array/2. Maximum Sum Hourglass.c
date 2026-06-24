#include<stdio.h>
#include<stdlib.h>
int main(){
    int n , m;
    scanf("%d %d" , &n , &m);
    int **arr = (int**)malloc(n * sizeof(int*));
    for(int i = 0 ; i < n ; i++){
        *(arr + i) = (int*)malloc(m * sizeof(int));
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d" , (*(arr + i) + j));
        }
    }
    int maxVal = 0;
    for(int i = 0 ; i < n - 2 ; i++){
        int sum = 0;
        for(int j = 0 ; j < m - 2 ; j++){
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
        }
        if(sum > maxVal)    maxVal = sum;
    }
    printf("%d" , maxVal);
    return 0;
}