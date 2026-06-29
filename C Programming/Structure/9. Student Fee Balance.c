#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollNo;
    char *name;
    float totalFee;
};

typedef struct student Student;

int main(){
    Student *s = (Student*)malloc(sizeof(Student));
    scanf("%d" , &s->rollNo);
    s->name = (char*)malloc(10);
    scanf(" %[^\n]" , s->name);
    scanf("%f" , &s->totalFee);
    float paidFee;
    scanf("%f" , &paidFee);
    s->totalFee = s->totalFee - paidFee ;
    printf("Balance Fee : %f ",s->totalFee);
    return 0; 
}