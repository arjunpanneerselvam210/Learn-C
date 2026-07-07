#include<stdio.h>
int top = -1;
int main(){
    int n;
    scanf("%d" , &n);
    int stack[n];
    for(int i = 0 ; i < n ; i++){
        int data;
        scanf("%d",&data);
        stack[++top] = data;
    }
    while(1){
        if(top == -1){
            printf("Stack Underflow\n");
            break;
        }
        printf("%d ",stack[top--]);
    }
    return 0;
}