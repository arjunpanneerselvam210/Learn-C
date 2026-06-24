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

void zeroTransformation(int **arr , int n , int m){
    int flag = arr[0][0];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                if(j != 0)
                    arr[0][j] = 0;
                else
                    flag = 0;
            }
        }
    }
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < m ; j++){
            if(arr[i][0] == 0 || arr[0][j] == 0)
                arr[i][j] = 0;
        }
    }
    if(arr[0][0] == 0){
        for(int j = 0 ; j < m ; j++)
            arr[0][j] = 0;
    }
    if(flag == 0){
        for(int i = 0 ; i < n ; i++)
            arr[i][0] = 0;
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
    zeroTransformation(arr , n , m);
    display(arr , n , m);
    return 0;
}