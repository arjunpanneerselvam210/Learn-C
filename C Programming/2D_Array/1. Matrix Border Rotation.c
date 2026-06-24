#include<stdio.h>
#include<stdlib.h>
void display(int **arr , int n , int m){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            printf("%d " , *(*(arr + i) + j));
        }
        printf("\n");
    }
}
void shiftPostition(int **arr , int n , int m){
    int temp = arr[0][0];
    for(int i = 1 ; i < n ; i++){
        arr[i - 1][0] = arr[i][0]; 
    }
    for(int i = 1 ; i < m ; i++){
        arr[n - 1][i - 1] = arr[n - 1][i];
    }
    for(int i = n - 2 ; i >= 0 ; i--){
        arr[i + 1][m - 1] = arr[i][m - 1];
    }
    for(int i = m - 2 ; i >= 0 ; i--){
        arr[0][i + 1] = arr[0][i];
    }
    arr[0][1] = temp;
}
int main(){
    int n , m;
    scanf("%d%d" ,&n,&m);
    int **arr = (int**)malloc(n * sizeof(int*));
    for(int i = 0 ; i < n ; i++){
        *(arr + i) = (int*)malloc(m * sizeof(int));
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d" , (*(arr + i) + j));
        }
    }
    shiftPostition(arr , n , m);
    display(arr , n , m);
    return 0;
}