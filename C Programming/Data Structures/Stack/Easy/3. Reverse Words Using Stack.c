#include<stdio.h>
int main(){
    char *s = NULL;
    size_t size = 0;
    getline(&s , &size , stdin);
    char stack[100];
    int top = -1;
    for(int i = 0 ; s[i] != '\0' && s[i] != '\n' ; i++){
        if(top == -1 || s[i] != stack[top])
            stack[++top] = s[i];
        else if(stack[top] == s[i])
            top--;
    }
    if(top == -1){
        printf("EMPTY");
        return 0;
    }
    int i = 0;
    while(i <= top){
        printf("%c",stack[i++]);
    }
    return 0;
}