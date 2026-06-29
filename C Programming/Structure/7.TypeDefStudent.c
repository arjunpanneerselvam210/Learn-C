#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollNo;
    char *name;
    float m1 , m2 , m3;
};

typedef struct student Student;

Student *createStudent(){
    Student *s = (Student*)malloc(sizeof(Student));
    s->name = (char*)malloc(10);
    printf("Enter the Roll Number : ");
    scanf("%d" , &s->rollNo);
    printf("Enter the Student Name : ");
    scanf(" %[^\n]", s->name);
    printf("Enter the Marks 1 : ");
    scanf("%f" , &s->m1);
    printf("Enter the Marks 2 : ");
    scanf("%f" , &s->m2);
    printf("Enter the Marks 3 : ");
    scanf("%f" , &s->m3);
    return s;
}

int main(){
    Student *s = createStudent();
    printf("Total : %d \n",(int)(s->m1 + s->m2 + s->m3));
    printf("Percentage : %f " ,(s->m1 + s->m2 + s->m3) / 3 );
    return 0;
}