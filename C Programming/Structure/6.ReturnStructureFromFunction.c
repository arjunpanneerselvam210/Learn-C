#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollNo;
    char *name;
    float marks;
};

typedef struct student Student;

Student *createStudent(){
    Student *s = (Student*)malloc(sizeof(Student));
    s->name = (char*)malloc(10);
    printf("Enter the Student Name : ");
    scanf(" %[^\n]", s->name);
    printf("Enter the Roll Number : ");
    scanf("%d", &s->rollNo);
    printf("Enter the Marks : ");
    scanf("%f" , &s->marks);
    return s;
}

int main(){
    Student *s = createStudent();
    printf("Name : %s \n",s->name);
    printf("Roll Number : %d \n" , s->rollNo);
    printf("Marks : %f \n",s->marks);
    return 0;
}