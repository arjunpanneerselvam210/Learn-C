#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int flag = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        if(arr[i] > arr[i + 1]){
            flag = 1;
            break;
        }
    }
    printf("%s" , flag == 0 ? "Array is Sorted" : "Array is not sorted");
    return 0;
}