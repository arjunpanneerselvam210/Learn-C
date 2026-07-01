#include<stdio.h>
int main(){
    int n ;
    scanf("%d" , &n);
    int arr[n] , res[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int maxVal = 0 , j = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(arr[i] >= maxVal){
            maxVal = arr[i];
            res[j++] = maxVal;
        }
    }
    for(int i = j - 1 ; i >= 0 ; i--)
        printf("%d " , res[i]);
    return 0;
}