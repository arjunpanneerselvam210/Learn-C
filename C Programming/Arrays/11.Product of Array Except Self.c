#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int res[n];
    res[0] = arr[0];
    int prev = arr[0];
    for(int i = 1 ; i < n ; i++){
        res[i] = prev;
        prev *= arr[i];
    }
   
    int rev = arr[n - 1];
    for(int i = n - 2 ; i >= 0 ; i--){
        res[i] *= rev;
        rev *= arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ",res[i]);
    }
    return 0;
}