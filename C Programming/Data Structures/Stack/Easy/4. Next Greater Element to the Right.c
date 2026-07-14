#include<stdio.h>
int main(){
    int n;
    scanf("%d" ,&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&arr[i]);
    int stack[15];
    int top = -1;
    int res[n];
    res[n - 1] = -1;
    stack[++top] = arr[n - 1];
    for(int i = n - 2 ; i >= 0 ; i--){
        if(arr[i] > stack[top]){
            res[i] = -1;
            stack[++top] = arr[i];
        }
        else{
            res[i] = stack[top];
            top--;
        }
    }
    for(int i = 0 ; i < n ;i++){
        printf("%d ",res[i]);
    }
    return 0;
}