#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isPrime(int n){
    for(int i = 2 ; i * i < n ; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int spiralPrimeCounter(int **arr , int n , int m){
    int count = 0 , top = 0 , left = 0 , bottom = n - 1 , right = m - 1;
    while(left <= right && top <= bottom){
        for(int i = left ; i <= right ; i++){
        if(isPrime(arr[top][i]))
            count++;
        }
        top++;  
        for(int i = top ; i <= bottom ; i++){
            if(isPrime(arr[i][right]))
                count++;
        }
        right--;
        if(left <= right){
            for(int i = right ; i >= left ; i--){
                if(isPrime(arr[bottom][i]))
                    count++;
            }
        }
        bottom--;
        if(top <= bottom){
            for(int i = bottom ; i >= top ; i--){
                if(isPrime(arr[i][left]))
                    count++;
            }
        }
        left++;
    }
    return count;
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
    printf("%d",spiralPrimeCounter(arr , n , m));
    return 0;
}