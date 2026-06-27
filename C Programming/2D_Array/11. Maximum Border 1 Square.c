#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool maximumBorder(int **arr , int n , int m , int i){
    for(int i = 0 ; i < n - i + 1 ; i++){
        for(int j = 0 ; j < m - i + 1; j++){
            for(int k = )
        }
    }
    return true;
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
    for(int i = m > n ? n : m ; i >= 0 ; i++){
        if(maximumBorder(arr , n , m, i)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}