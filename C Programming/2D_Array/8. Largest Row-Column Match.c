#include<stdio.h>
#include<stdlib.h>

int largestRowColMatch(int **arr , int n){
    int maxVal = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int count = 0;
            for(int k = 0 ; k < n ; k++){
                if(arr[i][k] == arr[k][j])
                    count++;
                else
                    break;
            }
            if(count > maxVal)  maxVal = count;
        }
    }
    return maxVal;
}

int main(){
    int n , m;
    scanf("%d",&n);
    int **arr = (int**)malloc(n * sizeof(int*));
    for(int i = 0 ; i < n ; i++)
        arr[i] = (int*)malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d" ,largestRowColMatch(arr, n));
    return 0;
}