#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollNo;
    char *name;
    int totalclasses;
    int attendedClasses;
};

typedef struct student Student;

Student *createStudent(){
    Student *s = (Student*)malloc(sizeof(Student));
    s->name = (char*)malloc(10);
    printf("Enter the Roll Number : ");
    scanf("%d" , &s->rollNo);
    printf("Enter the Student Name : ");
    scanf(" %[^\n]", s->name);
    printf("Enter the Total Classes : ");
    scanf("%d" , &s->totalclasses);
    printf("Enter the Attended Classes : ");
    scanf("%d" , &s->attendedClasses);
    return s;
}

int main(){
    int n;
    scanf("%d" , &n);
    Student **s = (Student**)malloc(n * sizeof(Student*));
    for(int i = 0 ; i < n ; i++){
        s[i] = createStudent();
    }
    for(int i = 0 ; i < n ; i++){
        printf("%s Attendance: %f ",s[i]->name , (float)s[i]->attendedClasses * 100 / s[i]->totalclasses);
    }
    return 0; 
}