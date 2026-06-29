#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollNo;
    char *name;
    float marks;
};
int main(){
    struct student *s = (struct student*)malloc(sizeof(struct student));
    printf("Enter the Roll Number : ");
    scanf("%d",&s->rollNo);
    s->name = (char*)malloc(20);
    printf("Enter the Name : ");
    scanf(" %[^\n]",s->name);
    printf("Enter the marks : ");
    scanf("%f" , &s->marks);
    float bonus;
    printf("Enter the Bonus Marks : ");
    scanf("%f" , &bonus);
    s->marks = s->marks + bonus < 100 ? s->marks + bonus : 100 ;
    printf("Updated Marks : %f ",s->marks);
    return 0;
}