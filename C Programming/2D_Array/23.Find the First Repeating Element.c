
#include<stdio.h>
#include<stdlib.h>
int solve(int *arr , int *n){
    int *temp = (int*)calloc(11 , sizeof(int));
    for(int i = 0 ; i < *n ; i++){
        temp[arr[i]]++;
    }
    for(int i = 0 ; i < *n ; i++){
        if(temp[arr[i]] >= 2)
            return arr[i];
    }
    return -1;
}
int main(){
    int n ;
    scanf("%d" , &n);
    int *arr = (int*)calloc(n , sizeof(int));
    for(int  i = 0 ; i < n ; i++)
        scanf("%d" , &arr[i]);
    int res = solve(arr , &n);
    printf("\n%d" , res);
    return 0;
}
