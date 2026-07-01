#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        scanf("%d" , &arr[i]);
    int max = INT_MIN , min = INT_MAX;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(arr[i] >= max){
            max = arr[i];
            min = -1;
        }
        else if(arr[i] < min)
            min = arr[i];
    }
    printf("%d" , max - min);
    return 0;
}