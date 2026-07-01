#include<stdio.h>
int main(){
    int n , sum = 0;
    scanf("%d" , &n);
    int arr[n - 1];
    for(int i = 0 ; i < n - 1 ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i < n - 1 ; i++){
        sum += arr[i];
    }
    sum = (n * (n + 1) / 2) - sum;
    printf("%d" , sum);
    return 0;
}