#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        scanf("%d" , &arr[i]);
    int flag = -1;
    for(int i = 1 ; i < n ; i++){
        arr[i] += arr[i - 1];
    }
    for(int i = 1 ; i < n ; i++){
        if(arr[i-1] == arr[n - 1] - arr[i]){
            flag = i;
            break;
        }
    }
    printf("%d" , flag);
    return 0;
}