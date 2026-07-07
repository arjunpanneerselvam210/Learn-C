#include<stdio.h>
int top = -1;
int main(){
    char stack[100];
    char *s = NULL;
    size_t size = 0;
    getline(&s , &size , stdin );
    for(int i = 0 ; s[i] != '\0' ; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            stack[++top] = s[i];
        else{
            if(top == -1){
                printf("Invalid");
                return 0;
            }
            else if((s[i] == ')' && stack[top] == '(') || 
                    (s[i] == ']' && stack[top] == '[') || 
                    (s[i] == '}' && stack[top] == '{'))
                top--;
            else{
                printf("Invalid");
                return 0;
            }
        } 
    }
    if(top == -1)
        printf("Valid");
    else   
        printf("Invalid");
    return 0;
}