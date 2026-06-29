#include<stdio.h>
#include<stdlib.h>
struct student{
    char *name;
    int marks;
};

char evaluateGrade(struct student *s){
    switch(s->marks){
        case 90 ... 100 :
            return 'A';
        case 75 ... 89 :
            return 'B';
        case 50 ... 74 :
            return 'C';
        default:
            return 'F';
    }
}

int main(){
    struct student *s = (struct student*)malloc(sizeof(struct student));
    s->name = (char*)malloc(20);
    printf("Enter the Name : ");
    scanf(" %[^\n]",s->name);
    printf("Enter the marks : ");
    scanf("%d" , &s->marks);
    if(s->marks  >= 0 && s->marks <= 100)
        printf("%s Grade  : %c \n" ,s->name, evaluateGrade(s));
    else
        printf("Invalid Mark");
    return 0;
}