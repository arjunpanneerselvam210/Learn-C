#include<stdio.h>
int main(){
    char *s = NULL;
    size_t size = 0;
    getline(&s , &size , stdin);
    char *stack[100];
    int flag = 0 , top = -1;
    for(int i = 0 ; s[i] != '\0' && s[i] != '\n' ; i++){
        if(s[i] != ' ' && flag == 0){
            stack[++top] = &s[i];
            flag = 1;
        }
        else if(s[i] == ' ')
            flag = 0;
    }
    while(top >= 0){
        char *temp = stack[top];
        while(*temp != ' ' && *temp != '\n' && *temp != '\0'){
            printf("%c",*temp);
            temp++;
        }
        if(top > 0)
            printf(" ");
        top--;
    }
    return 0;
}