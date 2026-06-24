#include<stdio.h>
#include<stdlib.h>
int stringLength(char *s){
    int i;
    for(i = 0 ; s[i] != '\0' ;i++);
    return i;
}
int stringCompare(char *s1 , char *s2){
    for(int i = 0 ; i < s1[i] != '\0' || i < s2[i] != '\0' ; i++){
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0;
}
void stringContcat(char *s1 , char *s2){
    int i;
    for(i = 0 ; s1[i] != '\0' ; i++);
    for(int j = 0 ; s2[j] != '\0' ;j++ , i++)
        s1[i] = s2[j];
    s1[i] = '\0';
}
char *stringCopy(char *s1){
    char *temp = (char*)malloc(10 * sizeof(char));
    for(int i = 0 ; s1[i] != '\0' ;i++)
        temp[i] = s1[i];
    return temp;
}
void stringUpper(char *s1){
    for(int i = 0 ; s1[i] != '\0' ; i++){
        if(s1[i] >= 97 && s1[i] <= 122)
            s1[i] -= 32;
    }
}
void stringLower(char *s1){
    for(int i = 0 ; s1[i] != '\0' ; i++){
        if(s1[i] >= 65 && s1[i] <= 90)
            s1[i] += 32;
    }
}
int main(){
    char *s1 = (char*)malloc(10 * sizeof(char));
    scanf("%s",s1);
    // char *s2 = (char*)malloc(10 * sizeof(char));
    // scanf("%[^\n]" , s1);
    // scanf("%[^\n]" , s2);
    // scanf("%s %s",s1,s2);
    // printf("%d" , stringLength(s1));
    // printf("%d",stringCompare(s1 , s2));
    // stringContcat(s1,s2);
    // char *s3 = stringCopy(s1);
    // printf("%s",s3);
    // free(s1);
    // printf("%s",s3);
    // printf("\n");
    stringUpper(s1);
    printf("%s" , s1);
    return 0;
}