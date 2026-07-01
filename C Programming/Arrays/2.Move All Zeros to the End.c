#include<stdio.h>
void swap(int *a , int *b){
    int temp = *a;
    *a = *b ;
    *b = temp;
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int i = 0 ;
    for(int j = 1 ; j < n ; j++){
        if(arr[j] != 0){
            i++;
            swap(&arr[i] , &arr[j]);
        }
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}